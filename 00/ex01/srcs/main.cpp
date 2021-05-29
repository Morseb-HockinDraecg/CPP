#include "Contact.hpp"

static void		add_cmd(Contact phonebook[8], int i){
	t_contact contact;

	if (i > 7){
		std::cout << "--- CONTACT LIST IS FULL --- " << std::endl;
		return ;
	}
	std::cout << " --- ADDING NEW CONTACT ---" << std::endl;
	while (contact.firstName.empty()){
	std::cout << "First name : ";
		if (!getline(std::cin, contact.firstName))
			return ;
		if (contact.firstName.empty())
			std::cout << " -- Waiting for input --" << std::endl;
	}
	std::cout << "Last name : ";
	if (!getline(std::cin, contact.lastName))
		return ;
	std::cout << "Nickname : ";
	if (!getline(std::cin, contact.nickname))
		return ;
	std::cout << "Login : ";
	if (!getline(std::cin, contact.login))
		return ;
	std::cout << "Postal Address : ";
	if (!getline(std::cin, contact.postalAddress))
		return ;
	std::cout << "Email : ";
	if (!getline(std::cin, contact.emailAddress))
		return ;
	std::cout << "Phone number : ";
	if (!getline(std::cin, contact.phoneNumber))
		return ;
	std::cout << "Birthday date : ";
	if (!getline(std::cin, contact.birthdayDate))
		return ;
	std::cout << "Favorire meal : ";
	if (!getline(std::cin, contact.favoriteMeal))
		return ;
	std::cout << "Underware color : ";
	if (!getline(std::cin, contact.underwearColor))
		return ;
	std::cout << "Darkest secret : ";
	if (!getline(std::cin, contact.darkestSecret))
		return ;
	phonebook[i].setContact(contact);
	std::cout << std::endl << "New contact added with success." << std::endl;
}

static void		display_lst_contact(Contact phonebook[8], int i){
	int	fieldlenght = 11;
	int	index = -1;

	std::cout << std::setw(fieldlenght) << "index|" << std::setw(fieldlenght) << "first name|" << 
	std::setw(fieldlenght) << "last name|" << std::setw(fieldlenght) << "nickname|" << std::endl;
	while (++index < i){
		phonebook[index].showContact_search(index + 1);	
	}
}

static void		search_cmd(Contact phonebook[8], int i_max){
	int	i;
	std::string temp;

	if (i_max > 8)
		i_max = 8;
	if (i_max == 0){
		std::cout << "Can't SEARCH : no contact saved." << std::endl;
		return ;
	}
	std::cout << " --- SEARCH selected --- " << std::endl;
	display_lst_contact(phonebook, i_max);
	std::cout << "choose an index for more datails : ";
	std::getline(std::cin, temp);
	try {
		i=std::stoi(temp);
	} catch (...){
		std::cout << "Can't SEARCH : input is not a number !" << std::endl;
		return ;
	}
	if (i_max < i){
		std::cout << "Can't SEARCH : no contact saved at this index." << std::endl;
		return ;
	} else if (i <= 0) {
		std::cout << "Can't SEARCH : negative or null index doesn't exist !" << std::endl;
		return ;
	}
	phonebook[i - 1].showContact();
}

int main(){
	Contact		phonebook[8];
	std::string	cmd;
	int			i;

	std::cout << "-----------------------------" << std::endl;
	std::cout << "|  PhoneBook Back in 80':)  |" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	i = 0;
	while (1){
		std::cout << "-----------------------------" << std::endl;
		std::cout << "| -- ADD - SEARCH - EXIT -- |" << std::endl;
		std::cout << "-----------------------------" << std::endl;
		if (!getline(std::cin, cmd))
			return (0);

		for (int i = 0; cmd[i]; i++)
			cmd[i] = toupper(cmd[i]);

		if (!cmd.compare("ADD")){
			add_cmd(phonebook, i);
			i++;
		}
		else if (!cmd.compare("SEARCH"))
			search_cmd(phonebook, i);
		else if (!cmd.compare("EXIT"))
			break;
		else
			std::cout << "command not found, command expected : ADD SEARCH EXIT" << std::endl;

	}
	std::cout << "EXIT SUCCEEDED" << std::endl;
	return 0;
}