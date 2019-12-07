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
            "PLACE_FLEET=A-E1-H" + "\n" +
            "PLACE_FLEET=B-A8-V" + "\n" +
            "PLACE_FLEET=B-E6-H" + "\n" +
            "PLACE_FLEET=S-A4-H" + "\n" +
            "PLACE_FLEET=S-I3-H" + "\n" +
            "PLACE_FLEET=S-J7-V" + "\n" +
            "PLACE_FLEET=T-B6-V" + "\n" +
            "PLACE_FLEET=T-B2-V" + "\n" +
            "PLACE_FLEET=T-E9-V" + "\n" +
            "PLACE_FLEET=T-H10-V" + "\n" ;
}

#endif //PROYECTOFINAL_PLACE_FLEET_HPP
