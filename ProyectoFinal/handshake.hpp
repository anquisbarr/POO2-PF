#ifndef PROYECTOFINAL_HANDSHAKE_HPP
#define PROYECTOFINAL_HANDSHAKE_HPP

#include <string>
#include "command.hpp"

class Handshake : public Command {
private:
    std::string nameTeam;
public:
    Handshake(std::string, std::string);
    std::string generateCommand() override;
};

Handshake::Handshake(std::string fileName, std::string nameTeam) : Command(fileName), nameTeam(nameTeam) {}

std::string Handshake::generateCommand() {
    return "HANDSHAKE=" + nameTeam;
}

#endif //PROYECTOFINAL_HANDSHAKE_HPP
