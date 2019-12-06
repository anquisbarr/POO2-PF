#ifndef PROYECTOFINAL_ATTACK_HPP
#define PROYECTOFINAL_ATTACK_HPP

#include "command.hpp"

class Attack : public Command {
private:
  std::string token;
  std::string column;
  std::string row;
public:
  Attack(std::string, std::string, std::string, std::string);
  std::string generateCommand() override;
};

Attack::Attack(std::string fileName, std::string token, std::string column, std::string row) :
  Command(fileName), token(token), column(column), row(row) {}

std::string Attack::generateCommand() {
  return "TOKEN=" + token + "\n" +
      "ATTACK=" + column + row;
}

#endif
