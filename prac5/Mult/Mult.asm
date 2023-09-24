// This file is based on part of www.nand2tetris.org
// and the book "The Elements of Computing Systems"
// by Nisan and Schocken, MIT Press.
// File name: Mult.asm

// Multiplies R1 and R2 and stores the result in R0.
// (R0, R1, R2 refer to RAM[0], RAM[1], and RAM[2], respectively.)

// Put your code here.

@2
M=0

@0
D=M
@3
M=D

@1
D=M
@4
M=D

@4
D=M
@LOOP
D;JGE

@3
M=-M
@4
M=-M

(LOOP)
@4
D=M
@END
D;JLE

@3
D=M
@2
M=M+D

@4
M=M-1

@LOOP
0;JMP
(END)

@END
0;JMP