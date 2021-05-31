#include <iostream>
#include <fstream>

typedef struct	s_strs{
	std::string filename;
	std::string replace;
	std::string s1;
	std::string s2;
}	t_strs;

static void	cpy_and_replace_file(t_strs& s){
	std::ifstream	ifs(s.filename);
	std::ofstream	ofs(s.replace);
	std::string line;
	size_t pos;
	size_t len;

	if (!ifs || !ofs){
		std::cout << "Could't open the file.";
		exit(1);
	}
	len = s.s1.length();
	while (getline(ifs, line))
	{
		while (true)
		{
			pos = line.find(s.s1);
			if (pos != std::string::npos)
				line.replace(pos, len, s.s2);
			else 
				break;
		}

		ofs << line << std::endl;
	}
}

static void init(t_strs& s, char **av){
	s.filename = av[1];
	s.s1 = av[2];
	s.s2 = av[3];
	if (s.s1.empty() || s.s2.empty()){
		std::cout << "A string is empty !" << std::endl;
		exit(1);
	}
	s.replace = s.filename;
	s.replace += ".replace";
	cpy_and_replace_file(s);
}

int main(int ac, char **av){
	t_strs	s;

	if (ac != 4){
		std::cout << "Wrong number of args." << std::endl;
		return 1;
	}
	init(s, av);

	return 0;
}