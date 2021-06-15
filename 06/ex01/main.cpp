#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>

struct Data
{
	std::string	s1;
	std::string	s2;
	int			i;
};



/*
**	serialize
*/

char	getChar(){
	static const char charSet[] = 
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
	const size_t maxIndex = sizeof(charSet) - 1;
	return (charSet[rand()% maxIndex]);
}

std::string	randomString(size_t len){
	std::string s;

	s.reserve(len);
	while (len--)
		s+= getChar();
	return s;
}

void * serialize(void){
	Data* d = new(Data);

	d->s1 = randomString(5 + rand() % 10);
	d->s2 = randomString(5 + rand() % 10);
	d->i = rand() % 454534;
	std::cout << "random datas generated : " << std::endl;
	std::cout << "s1: "<< d->s1 << " | s2 : " << d->s2 << " | int : " << d->i << std::endl;
	std::cout << std::endl;
	return reinterpret_cast<void*>(d);
}




/*
**	deserialize
*/
Data * deserialize(void * raw){
	return (reinterpret_cast<Data *>(raw));
}




//////

int main(){

	srand((unsigned int)time(0));

	void *v = serialize();
	std::cout << "void* address : " << v << std::endl;
	Data *d = deserialize(v);
	std::cout << "data* address : " << d << std::endl;
	std::cout << "s1: "<< d->s1 << " | s2 : " << d->s2 << " | int : " << d->i << std::endl;

	delete d;

	return 0;
}