#ifndef INSTRUCTION_DROP_H
#define INSTRUCTION_DROP_H
#include "Instruction.h"

class Instruction_drop: public Instruction
{
    public:
        Instruction_drop();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_drop();
};

#endif // INSTRUCTION_DROP_H
