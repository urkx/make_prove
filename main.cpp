#include <iostream>
#include "lib.h"


int main(){
	struct List <double> l;
	l.primero = 1.05;
	l.segundo = 2.05;
	
	std::cout << "Primer valor: " << l.primero << std::endl;
	std::cout << "Segundo valor: " << l.segundo << std::endl;
/*	printf("%lf\n",l.primero);
	printf("%lf\n",l.segundo);
*/	
	return 0;

}
