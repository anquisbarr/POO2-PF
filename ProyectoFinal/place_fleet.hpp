#ifndef PROYECTOFINAL_PLACE_FLEET_HPP
#define PROYECTOFINAL_PLACE_FLEET_HPP

#include "command.hpp"

class PlaceFleet : public Command {
private:
    std::string token;
    std::string type;
    std::string column;
    std::string row;
    std::string pos;
public:
    PlaceFleet(std::string, std::string, std::string,std::string, std::string, std::string);
    std::string generateCommand() override;
};

PlaceFleet::PlaceFleet(std::string fileName, std::string token, std::string type, std::string column, std::string row, std::string pos) : Command(fileName) , token(token), type(type), column(column), row(row), pos(pos) {}

std::string PlaceFleet::generateCommand() {
    return  "TOKEN=" + token + "\n" +
        "PLACE_FLEET=" + type + "-" + column + row + "-" + pos;
}

#endif //PROYECTOFINAL_PLACE_FLEET_HPP
