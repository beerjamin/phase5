#ifndef INSTRUCTION_SENSE_H
#define INSTRUCTION_SENSE_H
#include "Instruction.h"

class Instruction_sense: public Instruction
{
    public:
        Instruction_sense();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_sense();

    private:
        std::string dir;
        std::string cond;
        std::string on_fail;
};

#endif // INSTRUCTION_SENSE_H
