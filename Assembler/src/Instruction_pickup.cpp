#include "Instruction_pickup.h"

Instruction_pickup::Instruction_pickup(){};

Instruction_pickup::~Instruction_pickup(){};

std::string Instruction_pickup::read(){};

int Instruction_flip::parse(std::string instr, int line) {
    /* move x y */
    std::string delimiter = " ";
    size_t pos = 0;
    std::string token;
    int i = 0;

    while ((pos = instr.find(delimiter)) != std::string::npos) {
        token = instr.substr(0, pos);
        switch (i) {
            case 0:
                break;
            case 1:
                x = tstate(std::stoi(token));
                break;
            case 2:
                y = tstate(std::stoi(token));
                break;
        }
        instr.erase(0, pos + delimiter.length());
        i++;
    }
}
