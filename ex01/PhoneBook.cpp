#include "PhoneBook.hpp"
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::PhoneBook() : _index(0), _totalContacts(0) {}

void PhoneBook::addContact(const Contact &contact) {
  _contacts[_index] = contact;
  _index = (_index + 1) % 8;
  if (_totalContacts < 8)
    _totalContacts++;
}

std::string PhoneBook::fit(const std::string &s) const {
  if (s.length() > 10)
    return s.substr(0, 9) + ".";
  return s;
}

void PhoneBook::displaySummary() const {
  std::cout << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
            << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10)
            << "Nickname" << std::endl;

  for (int i = 0; i < _totalContacts; i++) {
    std::cout << std::setw(10) << i << "|" << std::setw(10)
              << fit(_contacts[i].getFirstName()) << "|" << std::setw(10)
              << fit(_contacts[i].getLastName()) << "|" << std::setw(10)
              << fit(_contacts[i].getNickname()) << std::endl;
  }
}

void PhoneBook::displayContact(int index) const {
  if (index >= 0 && index < _totalContacts) {
    _contacts[index].printContact();
  } else {
    std::cout << "Invalid contact index.\n";
  }
}
