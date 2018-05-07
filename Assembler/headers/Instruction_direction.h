#ifndef INSTRUCTION_DIRECTION_H
#define INSTRUCTION_DIRECTION_H
#include "Instruction.h"
#include "Structs.h"

class Instruction_direction: public Instruction
{
    public:
        Instruction_direction();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_direction();

    private:
        tdirection dir;
        std::string on_fail;
};

#endif // INSTRUCTION_DIRECTION_H
