#ifndef PROYECTOFINAL_PLACE_FLEET_HPP
#define PROYECTOFINAL_PLACE_FLEET_HPP

#include "command.hpp"
#include <ctime>
#include <string>
#include <utility>

class PlaceFleet : public Command {
private:
    std::string token;
    char type;
    char column;
    std::string row;
    char orientation;
public:
    PlaceFleet(std::string, std::string);
    std::string generateCommand() override;
    char generateType();
    char generateColumn();
    std::string generateRow();
    char generateOrientation();
};

PlaceFleet::PlaceFleet(std::string fileName, std::string token) : Command(fileName) , token(std::move(token)) {}

std::string PlaceFleet::generateCommand() {
    // Para posicionamiento aleatorio
    /*return  "TOKEN=" + token + "\n" +
        "PLACE_FLEET=" + generateType() + "-" + generateColumn()
        + generateRow() + "-" + generateOrientation();*/

    // Para posicionamiento estratégico
    return "TOKEN=" + token + "\n" +
           "PLACE_FLEET=A-A4-H" + "\n" +
           "PLACE_FLEET=B-D8-V" + "\n" +
           "PLACE_FLEET=B-H1-V" + "\n" +
           "PLACE_FLEET=S-I5-H" + "\n" +
           "PLACE_FLEET=S-D1-H" + "\n" +
           "PLACE_FLEET=S-G9-V" + "\n" +
           "PLACE_FLEET=T-B7-V" + "\n" +
           "PLACE_FLEET=T-J10-V" + "\n" +
           "PLACE_FLEET=T-A1-V" + "\n" +
           "PLACE_FLEET=T-H7-V";
}

char PlaceFleet::generateType() {
    srand(time(0));
    auto types = new std::vector<char>();
    *types = {'A', 'B', 'S', 'T'};
    type = (*types)[rand()%4];
    return type;
}

char PlaceFleet::generateColumn() {
    srand(time(0));
    auto columns = new std::vector<char>();
    *columns = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    column = (*columns)[rand()%10];
    return column;
}

std::string PlaceFleet::generateRow() {
    srand(time(0));
    auto rows = new std::vector<std::string>();
    *rows = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};
    row = (*rows)[rand()%10];
    return row;
}

char PlaceFleet::generateOrientation() {
    srand(time(0));
    auto orientations = new std::vector<char>();
    *orientations = {'H', 'V'};
    orientation = (*orientations)[rand()%2];
    return orientation;
}

#endif //PROYECTOFINAL_PLACE_FLEET_HPP
