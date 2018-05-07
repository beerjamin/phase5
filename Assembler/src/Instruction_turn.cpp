#include "Instruction_turn.h"

Instruction_turn::Instruction_turn(){};

Instruction_turn::~Instruction_turn(){};

std::string Instruction_turn::read(){};

int Instruction_turn::parse(std::string instr, int line) {
    /* sense dir x y */
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
                d = tdirection(std::stoi(token[0]));
                break;
            case 2:
                x = tstate(std::stoi(token));
                break;
            case 3:
                y = tstate(std::stoi(token));
                break;
        }
        instr.erase(0, pos + delimiter.length());
        i++;
    }
}
