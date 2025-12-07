#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string>


// Função para ler um campo obrigatório
std::string readField(const std::string &prompt) {
  std::string input;
  while (true) {
    std::cout << prompt;
    if (!std::getline(std::cin, input)) {
      std::cout << "\nEncerrando programa.\n";
      exit(0); // trata EOF
    }
    if (!input.empty())
      return input;
    std::cout << "O campo não pode ser vazio.\n";
  }
}

int main() {
  PhoneBook phonebook;
  std::string command;

  while (true) {
    std::cout << "Digite um comando (ADD, SEARCH, EXIT): ";
    if (!std::getline(std::cin, command)) {
      std::cout << "\nEncerrando programa.\n";
      break;
    }

    if (command == "ADD") {
      Contact c;

      std::string firstName = readField("Primeiro Nome: ");
      std::string lastName = readField("Último Nome: ");
      std::string nickname = readField("Apelido: ");
      std::string phone = readField("Telefone: ");
      std::string secret = readField("Darkest Secret: ");

      c.setAll(firstName, lastName, nickname, phone, secret);
      phonebook.addContact(c);

      std::cout << "Contato adicionado com sucesso!\n";

    } else if (command == "SEARCH") {

      phonebook.displaySummary();

      std::cout << "Digite o índice do contato: ";
      std::string indexStr;
      if (!std::getline(std::cin, indexStr)) {
        std::cout << "\nEncerrando programa.\n";
        break;
      }

      // verificar se é número
      bool isNum = true;
      for (size_t i = 0; i < indexStr.size(); i++) {
        if (!std::isdigit(indexStr[i])) {
          isNum = false;
          break;
        }
      }

      if (!isNum) {
        std::cout << "Índice inválido.\n";
        continue;
      }

      int index = std::atoi(indexStr.c_str());
      phonebook.displayContact(index);

    } else if (command == "EXIT") {
      std::cout << "Encerrando programa.\n";
      break;

    } else {
      std::cout << "Comando desconhecido! Use ADD, SEARCH ou EXIT.\n";
    }
  }

  return 0;
}
