#include <iostream>
#include "calc.h"

calc::calc(double a, double b) {
	this->a = a;
	this->b = b;
}

double calc::add() {
	return a+b;
}

double calc::sub() {
	return a-b;
}

double calc::mult() {
	return a*b;
}

double calc::div() {
	if(b<=0) {
		std::cout << "cannot div by 0" << std::endl;
		return -1;
	}
	return a/b;
}

int main(int argc, char* argv[]) {
	double a, b;
	int op = 5;
	while (1) {
		std::cout << "enter first number" << std::endl;
		std::cin >> a;
		std::cout << "enter second number" << std::endl;
		std::cin >> b;
		std::cout << "ented operation" << std::endl;
		std::cout << "1 for add" << std::endl << "2 for sub" << std::endl 
				<< "3 for mult" << std::endl << "4 for div" <<std::endl;
		std::cin >> op;
		calc* myCalc = new calc(a,b);
		switch (op) {
		case 1:
			std::cout << myCalc->add() << std::endl;
			break;
		case 2:
			std::cout << myCalc->sub() << std::endl;
			break;
		case 3:
			std::cout << myCalc->mult() << std::endl;
			break;
		case 4:
			std::cout << myCalc->div() << std::endl;
			break;
		default:
			std::cout << "no option " << op << std::endl;
		}	
		delete(myCalc);
	}
}
