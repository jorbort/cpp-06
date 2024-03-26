#include "ScalarConverter.hpp"
#include <iostream>
#include <string>
 
int main(int argc, char **argv)
{
	
	if (argc != 2)
	{
		std::cout << "The program needs one argument and only one argument" << std::endl;
		return (1);
	}
	else
	{
		std::string input = argv[1];
		ScalarConverter::convert(input);
	}
}