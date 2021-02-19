#include <iostream>
#include "lib.h"

int main(){
	struct List <double> l;
	Gen g(1);
	l.primero = 1.05;
	l.segundo = 2.05;
	
	std::cout << "Primer valor: " << l.primero << std::endl;
	std::cout << "Segundo valor: " << l.segundo << std::endl;
	
	g.setId(3);

	std::cout << "Id: " << g.getId() << std::endl;

	return 0;

}
