#ifndef INSTRUCTION_MOVE_H
#define INSTRUCTION_MOVE_H
#include "Instruction.h"
#include "Structs.h"

class Instruction_move: public Instruction
{
    public:
        Instruction_move();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_move();

    private:
        std::string on_fail;
};

#endif // INSTRUCTION_MOVE_H
