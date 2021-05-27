#include <iostream>

static void	megaphone(char **av){
	int	i,j;
	i = 0;
	while (av[++i]){
		j = -1;
		while (av[i][++j])
			putchar (toupper(av[i][j]));
	} 
}

int	main(int ac, char **av){

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		megaphone(av);
	std::cout << std::endl;
	return (0);
}