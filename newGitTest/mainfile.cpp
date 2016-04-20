#include "mainfile.h"
#include <iostream>

#include <algorithm>
#include <vector>
#include <random>

int specialFunc(int & inp) {
	return (2*inp);
}

int main() {
	std::cout << "Hi everyone" << std::endl;

	int a=10;
	std::cout << "Input of 10 gives: " << specialFunc(a) << std::endl;
	
	std::vector<int> myvec(100,0);

	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(1,100);
	
	std::vector<int>::iterator it = myvec.begin();
	while (it != myvec.end()) {
		
		*it = distribution(generator);  
		std::cout << *it << " ";
		it++;
	}
		
	std::cout << std::endl;
	
	std::system("pause");

	return 0;
}
