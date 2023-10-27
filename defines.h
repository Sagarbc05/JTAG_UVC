typedef enum bit [0:3] {
                        EXTEST = 'h0, SAMPLE_PREL = 'h1, 
                        IDCODE = 'h2, DEBUG = 'h8,
                        MBIST = 'h9,  BYPASS = 'hF} jtag_ir;

typedef enum {X,RESET, IDLE,
              SELECT_DR ,SELECT_IR,
              CAPTURE_DR ,CAPTURE_IR, 
              SHIFT_DR ,  SHIFT_IR, 
              EXIT_DR ,   EXIT_IR, 
              EXIT2_DR,   EXIT2_IR,
              PAUSE_DR, PAUSE_IR,
              UPDATE_DR,  UPDATE_IR } tap_state;

// Define IDCODE Value
`define IDCODE_VALUE  32'h0f9511c3
// 0001             version
// 0100100101010001 part number (IQ)
// 00011100001      manufacturer id (flextronics)
// 1                required by standard

// Length of the Instruction register
`define	IR_LENGTH	4

// Supported Instructions
`define EXTEST          4'b0000
`define SAMPLE_PRELOAD  4'b0001
`define IDCODE          4'b0010
`define DEBUG           4'b1000
`define MBIST           4'b1001
`define BYPASS          4'b1111
  
//TMS CODES
  `define TMS_IDCODE '{0,1,0,0,{31{0}},1}
  `define TMS_PRELOAD '{1,0,1,1}
  `define TMS_BYPASS '{1,1,1,0}
  `define TMS_SAMPLE  '{1,1,1,1}
  `define TMS_EXTEST   '{1,0,1,1}
  
