#ifndef INSTRUCTION_DEFAULT_H
#define INSTRUCTION_DEFAULT_H
#iclude "Instruction.h"


class Instruction_default: public Instruction
{
    public:
        Instruction_default();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_default();

};

#endif // INSTRUCTION_DEFAULT_H
