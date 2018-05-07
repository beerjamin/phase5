#ifndef INSTRUCTION_PICKUP_H
#define INSTRUCTION_PICKUP_H
#include "Instruction.h"
#include "Structs.h"

class Instruction_pickup: public Instruction
{
    public:
        Instruction_pickup();
        int parse(std::string args, int line);
        std::string read();
        virtual ~Instruction_pickup();

    private:
       std::string on_fail;
};

#endif // INSTRUCTION_PICKUP_H
