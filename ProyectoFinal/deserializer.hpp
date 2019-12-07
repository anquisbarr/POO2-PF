#ifndef PROYECTOFINAL_DESERIALIZER_HPP
#define PROYECTOFINAL_DESERIALIZER_HPP

#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using std::vector;

class Deserializer {
private:
    std::string fileName;
    std::string status;
    std::string token;
    std::string scope;
    std::string notification;
public:
    Deserializer(std::string);
    void separate(std::string line);
    const std::string& getStatus() const;
    const std::string& getToken() const;
    const std::string& getScope() const;
};

Deserializer::Deserializer(std::string fileName) {

    std::fstream* file = new std::fstream(fileName, std::ios_base::in); /* Accede al archivo enviado en el parámetro */
    std::string line;

   if (file) {
        while (getline(*file, line)) { /* Recorre el archivo línea por línea */
            separate(line);
        }
        file->close();
    }
    delete file;
}

void Deserializer::separate(std::string line) {
    std::string field;
    std::vector<std::string> fields;
    std::stringstream stream(line);

    /* Recorre cada linea e inserta cada campo al vector de campos cuando se topa con el delimitador(',') */
    while (getline(stream, field, '=')) {
        fields.push_back(field);
    }

    /* Verifica que el vector de campos tenga el tamaño correcto (# de atributos del obj) */
    std::string command;
    std::string value;

    /* Verifica que cada campo no esté vacío para insertar el atributo al objeto */
    if (fields[0] == "STATUS") {
        command = fields[0];
        status = fields[1];
    }
    if (fields[0] == "TOKEN") {
        command = fields[0];
        token = fields[1];
    }
    if (fields[0] == "SCOPE") {
        command = fields[0];
        scope = fields[1];
    }

}

const std::string& Deserializer::getStatus() const {
    return status;
}

const std::string& Deserializer::getToken() const {
    return token;
}

const std::string& Deserializer::getScope() const {
    return scope;
}

#endif //PROYECTOFINAL_DESERIALIZER_HPP
