#ifndef PROYECTOFINAL_ATTACK_HPP
#define PROYECTOFINAL_ATTACK_HPP

#include "command.hpp"
#include <ctime>

class Attack : public Command {
private:
  std::string token;
  std::string column;
  std::string row;
public:
  Attack(std::string, std::string);
  std::string generateCommand() override;
  std::string generateAttack1();
  std::string generateAttack2();
};

Attack::Attack(std::string fileName, std::string token) :
  Command(fileName), token(token) {}

std::string Attack::generateCommand() {
  return "TOKEN=" + token + "\n" +
      "ATTACK=" + generateAttack1();
}

std::string Attack::generateAttack1() {
    srand(time(0));
    auto columns = new std::vector<char>();
    *columns = {'A', 'C', 'E', 'G', 'I'};
    auto rows = new std::vector<std::string>();
    *rows = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    std::string attack = (*columns)[rand()%5] + (*rows)[rand()%10];
    return attack;
}

std::string Attack::generateAttack2() {
    srand(time(0));
    auto columns = new std::vector<char>();
    *columns = {'B', 'D', 'F', 'H', 'J'};
    auto rows = new std::vector<std::string>();
    *rows = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10"};

    std::string attack = (*columns)[rand()%5] + (*rows)[rand()%10];
    return attack;
}

#endif
