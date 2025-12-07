#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
private:
  Contact _contacts[8];
  int _index;
  int _totalContacts;

public:
  PhoneBook();

  void addContact(const Contact &contact);
  void displaySummary() const;
  void displayContact(int index) const;
  std::string fit(const std::string &s) const;
};

#endif
