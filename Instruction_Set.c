// Our worker needs a fixed set of tasks they know how to perform. You can't write “make me a coffee” on the checklist. 
// The worker only understands a specific vocabulary of 23 task types.
//With just these 23 tasks, our worker can compute anything a modern CPU can do.


#ifndef OPCODES_H
#define OPCODES_H

typedef enum {
    OP_NOP  = 0x00,  // Do nothing
    OP_LOAD = 0x01,  // Write a number on a sticky note (2-word: next word is the number)
    OP_MOV  = 0x02,  // Copy one sticky note to another
    OP_ADD  = 0x03,  // Add two sticky notes
    OP_SUB  = 0x04,  // Subtract two sticky notes
    OP_AND  = 0x05,  // Bitwise AND
    OP_OR   = 0x06,  // Bitwise OR
    OP_XOR  = 0x07,  // Bitwise XOR
    OP_NOT  = 0x08,  // Bitwise NOT (flip all bits)
    OP_SHL  = 0x09,  // Shift bits left
    OP_SHR  = 0x0A,  // Shift bits right
    OP_CMP  = 0x0B,  // Compare (subtract but only update status board)
} Opcode;

#endif
