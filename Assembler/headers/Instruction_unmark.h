#ifndef INSTRUCTION_UNMARK_H
#define INSTRUCTION_UNMARK_H
#include "Instruction.h"
#include "Structs.h"

class lnstruction_unmark: public Instruction
{
    public:
        lnstruction_unmark();
        int parse(std::string args, int line);
        std::string read();
        virtual ~lnstruction_unmark();

    private:
        tmark mark;
};

#endif // INSTRUCTION_UNMARK_H
