#ifndef INSTRUCTION_FLIP_H
#define INSTRUCTION_FLIP_H
#include "Instruction.h"

class Instruction_flip: public Instruction
{
    public:
        Instruction_flip();
        int parse(std::string instr, int line);
        std::string read();
        virtual ~Instruction_flip();

    private:
        int p;
        std::string on_fail;
};

#endif // INSTRUCTION_FLIP_H
