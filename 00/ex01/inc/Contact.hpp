#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact {

public:

	Contact(void);
	~Contact(void);

	void 		setValue(std::string s);
	std::string	getValue(std::string s) const;

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postalAddress;
	std::string _emailAddress;
	std::string _phoneNumber;
	std::string _birthdayDate;
	std::string _favorite;
	std::string _meal;
	std::string _underwearColor;
	std::string _darkestSecret;
};

#endif