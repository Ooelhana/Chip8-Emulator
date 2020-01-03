#include "chip8.h"
//temp for debug
#include <iostream>

void chip8::initialize() {
  //For debug
  std::cerr << "chip8::initialize() run" << std::endl;

  pc = 0x200;
  opcode = 0;
  I = 0;
  sp = 0;

  //Clear display

  //Clear stack
  for(int i=0; i<16; i++) {
    stack[i] = 0;
  }

  //initialize all memory to 0
  for(int i=0; i<4096; i++) {
    memory[i] = 0x0;
  }
  //initialize all registers to 0
  for(int i=0; i<16; i++) {
    V[i] = 0x0;
  }

  //Load fontset
  unsigned char chip8_fontset[80] =
  {
    0xF0, 0x90, 0x90, 0x90, 0xF0, // 0
    0x20, 0x60, 0x20, 0x20, 0x70, // 1
    0xF0, 0x10, 0xF0, 0x80, 0xF0, // 2
    0xF0, 0x10, 0xF0, 0x10, 0xF0, // 3
    0x90, 0x90, 0xF0, 0x10, 0x10, // 4
    0xF0, 0x80, 0xF0, 0x10, 0xF0, // 5
    0xF0, 0x80, 0xF0, 0x90, 0xF0, // 6
    0xF0, 0x10, 0x20, 0x40, 0x40, // 7
    0xF0, 0x90, 0xF0, 0x90, 0xF0, // 8
    0xF0, 0x90, 0xF0, 0x10, 0xF0, // 9
    0xF0, 0x90, 0xF0, 0x90, 0x90, // A
    0xE0, 0x90, 0xE0, 0x90, 0xE0, // B
    0xF0, 0x80, 0x80, 0x80, 0xF0, // C
    0xE0, 0x90, 0x90, 0x90, 0xE0, // D
    0xF0, 0x80, 0xF0, 0x80, 0xF0, // E
    0xF0, 0x80, 0xF0, 0x80, 0x80  // F
  };

  for(int i=0; i<80; i++) {
    memory[i] = chip8_fontset[i];
  }

}

void chip8::cycle() {
  //fetch opcode
  opcode = memory[pc] << 8 | memory[pc + 1];
  //decode opcode
  

  //execute opcode

  //update timers

}

void chip8::load(string game) {

}