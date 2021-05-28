#include "Contact.hpp"

Contact::Contact(void){
}

Contact::~Contact(void){
}

void Contact::setContact(t_contact c){
	this->_firstName = c.firstName;
	this->_lastName = c.lastName ;
	this->_nickname = c.nickname;
	this->_login = c.login;
	this->_postalAddress = c.postalAddress;
	this->_emailAddress = c.emailAddress;
	this->_phoneNumber = c.phoneNumber;
	this->_birthdayDate = c.birthdayDate;
	this->_favoriteMeal = c.favoriteMeal;
	this->_underwearColor = c.underwearColor;
	this->_darkestSecret = c.darkestSecret;
}

static void resize_and_print(std::string field){
	std::string	tmp;

	tmp = field;
	if (tmp.length() > 10){
		tmp.resize (9);
		tmp.append(1,'.');
	}
	std::cout << tmp;
	tmp.clear();
}

void Contact::showContact_search(int i) const{
	int			fieldlenght = 10;

	std::cout << std::setw(fieldlenght);
	std::cout << i << "|" << std::setw(fieldlenght);
	resize_and_print(this->_firstName);
	std::cout << "|" << std::setw(fieldlenght);
	resize_and_print(this->_lastName);
	std::cout << "|" << std::setw(fieldlenght);
	resize_and_print(this->_nickname);
	std::cout << "|" << std::endl;
}

void Contact::showContact(void) const{
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name : " << this->_lastName << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Login : " << this->_login << std::endl;
	std::cout << "Postal address : " << this->_postalAddress << std::endl;
	std::cout << "Email address : " << this->_emailAddress << std::endl;
	std::cout << "Phone number : " << this->_phoneNumber << std::endl;
	std::cout << "Birthday date : " << this->_birthdayDate << std::endl;
	std::cout << "Favorite meal : " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color : " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret : " << this->_darkestSecret << std::endl;
}