#ifndef PROYECTOFINAL_COMMAND_HPP
#define PROYECTOFINAL_COMMAND_HPP

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using std::vector;
using std::string;

class Command {
protected:
    std::string fileName;
public:
    Command(std::string);
    void save();
    virtual std::string generateCommand() = 0;
};

Command::Command(std::string fileName) : fileName(fileName) {}

void Command::save() {
    auto file = new std::fstream(fileName, std::ios_base::out);
    if (file)
      *file << generateCommand();
    file->close();
    delete file;
}

#endif //PROYECTOFINAL_COMMAND_HPP
