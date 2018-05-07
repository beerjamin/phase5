#ifndef INSTRUCTION_TURN_H
#define INSTRUCTION_TURN_H
#include "Instruction.h"
#include "Structs.h"

class Instruction_turn: public Instruction
{
    public:
        Instruction_turn();
        int parse(std::string instr, int line);
        std::string read();
        virtual ~Instruction_turn();

    private:
        tleftright lr;
};

#endif // L_TURN_H
