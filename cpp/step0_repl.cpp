#include <iostream>
#include <string>

std::string READ (std::string input) {
	return input ;
}

std::string EVAL (std::string input) {
	return input ;
}

std::string PRINT (std::string input) {
	return input ;
}

std::string rep (std::string input) {
	READ(input) ;
	EVAL(input) ;
	PRINT(input) ;
	return input ;
}

int main () {

	while (1) {
		std::cout << "user> " ;
		
		std::string input ;
		std::getline(std::cin, input) ;
		
		std::string output ;
		output = rep(input) ;

		std::cout << output << "\n" ;
	}

	return 0 ;
}