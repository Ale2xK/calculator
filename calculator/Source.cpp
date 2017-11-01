//calculator
#include <iostream> 

int main(int argc, char* argv[])
{
	std::cout << "first number: ";
	double a1;
	std::cin >> a1;
	std::cout << "second number: ";
	double a2; 
	std::cin >> a2;
	double plus;
	plus = a1 + a2;
	double minus;
	minus = a1 - a2;  
	double pow;
	pow = a1 * a2; 
	double div;
	div = a1 / a2;  
	std::cout << a1 << "+" << a2 << "=" << plus << std::endl;
	std::cout << a1 << "-" << a2 << "=" << minus << std::endl;
	std::cout << a1 << "*" << a2 << "=" << pow << std::endl;
	std::cout << a1 << "/" << a2 << "=" << div << std::endl;

	return 0;
}