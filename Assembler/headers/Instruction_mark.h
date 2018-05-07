#ifndef INSTRUCTION_MARK_H
#define INSTRUCTION_MARK_H
#include "Instruction.h"
#include "Structs.h"

class Instruction_mark: public Instruction
{
    public:
        Instruction_mark();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_mark();

    private:
        tmark mark;
};

#endif // INSTRUCTION_MARK_H
