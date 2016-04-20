#include "mainfile.h"
#include <iostream>

int specialFunc(int & inp) {
	return (2*inp);
}

int masterfunc(void) {
	std::cout <<"This is the masterfunc" << std::endl;
	return 0;
}

int main() {
	std::cout << "Hi" << std::endl;

	int a=3;
	std::cout << "Input of 3 gives: " << specialFunc(a) << std::endl;
	
	masterfunc();

	std::system("pause");

	return 0;
}
