//------------------------------------------------------------------------------
// Description: Combinational direction router for DBF 64-bit masked writes.
// Vertical writes target Intermediate Buffer; horizontal writes target Output
// Sample Buffer. Error pulses are selected from the active destination; these
// are meaningful when the writer is examining a prior accepted write.
// Copy/initialization ownership remains under the top-level DBF controller.
//------------------------------------------------------------------------------
`timescale 1ns/1ps

module DBF_BUFFER_WRITE_ROUTER (
  input              I_WR_VALID,
  output logic       O_WR_READY,
  input              I_WR_DIRECTION,
  input        [1:0] I_WR_COMPONENT_ID,
  input       [11:0] I_WR_ADDR,
  input       [63:0] I_WR_DATA,
  input        [3:0] I_WR_SAMPLE_EN,
  output logic       O_INTER_WR_VALID,
  input              I_INTER_WR_READY,
  output logic [1:0] O_INTER_WR_COMPONENT_ID,
  output logic[11:0] O_INTER_WR_ADDR,
  output logic[63:0] O_INTER_WR_DATA,
  output logic [3:0] O_INTER_WR_SAMPLE_EN,
  input              I_INTER_ERROR_VALID,
  input        [1:0] I_INTER_ERROR_CODE,
  output logic       O_OUTPUT_WR_VALID,
  input              I_OUTPUT_WR_READY,
  output logic [1:0] O_OUTPUT_WR_COMPONENT_ID,
  output logic[11:0] O_OUTPUT_WR_ADDR,
  output logic[63:0] O_OUTPUT_WR_DATA,
  output logic [3:0] O_OUTPUT_WR_SAMPLE_EN,
  input              I_OUTPUT_ERROR_VALID,
  input        [1:0] I_OUTPUT_ERROR_CODE,
  output logic       O_WR_ERROR_VALID
);
  localparam logic [1:0] PARA_ERR_WRITE = 2'd3;

  assign O_INTER_WR_VALID = I_WR_VALID && !I_WR_DIRECTION;
  assign O_OUTPUT_WR_VALID = I_WR_VALID && I_WR_DIRECTION;
  assign O_WR_READY = I_WR_DIRECTION ? I_OUTPUT_WR_READY : I_INTER_WR_READY;
  assign O_INTER_WR_COMPONENT_ID = I_WR_COMPONENT_ID;
  assign O_INTER_WR_ADDR = I_WR_ADDR;
  assign O_INTER_WR_DATA = I_WR_DATA;
  assign O_INTER_WR_SAMPLE_EN = I_WR_SAMPLE_EN;
  assign O_OUTPUT_WR_COMPONENT_ID = I_WR_COMPONENT_ID;
  assign O_OUTPUT_WR_ADDR = I_WR_ADDR;
  assign O_OUTPUT_WR_DATA = I_WR_DATA;
  assign O_OUTPUT_WR_SAMPLE_EN = I_WR_SAMPLE_EN;
  assign O_WR_ERROR_VALID = I_WR_DIRECTION ?
      (I_OUTPUT_ERROR_VALID && (I_OUTPUT_ERROR_CODE == PARA_ERR_WRITE)) :
      (I_INTER_ERROR_VALID && (I_INTER_ERROR_CODE == PARA_ERR_WRITE));
endmodule: DBF_BUFFER_WRITE_ROUTER
