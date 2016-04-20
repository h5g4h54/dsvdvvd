#include "mainfile.h"
#include <iostream>

int specialFunc(int & inp) {
	return (2*inp);
}

int main() {
	std::cout << "Hi" << std::endl;

	int a=10;
	std::cout << "Input of 10 gives: " << specialFunc(a) << std::endl;
	
	std::system("pause");

	return 0;
}
