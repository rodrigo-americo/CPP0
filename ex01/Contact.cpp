#include "Contact.hpp"
#include <iostream>

void Contact::setAll(const std::string &firstName, const std::string &lastName,
                     const std::string &nickname,
                     const std::string &phoneNumber,
                     const std::string &darkestSecret) {
  _firstName = firstName;
  _lastName = lastName;
  _nickname = nickname;
  _phoneNumber = phoneNumber;
  _darkestSecret = darkestSecret;
}

void Contact::printContact() const {
  std::cout << "First Name: " << _firstName << std::endl;
  std::cout << "Last Name: " << _lastName << std::endl;
  std::cout << "Nickname: " << _nickname << std::endl;
  std::cout << "Phone Number: " << _phoneNumber << std::endl;
  std::cout << "Darkest Secret: " << _darkestSecret << std::endl;
}

std::string Contact::getFirstName() const { return _firstName; }

std::string Contact::getLastName() const { return _lastName; }

std::string Contact::getNickname() const { return _nickname; }

std::string Contact::getPhoneNumber() const { return _phoneNumber; }

std::string Contact::getDarkestSecret() const { return _darkestSecret; }
