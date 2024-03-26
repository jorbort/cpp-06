#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter
{

	public:

		~ScalarConverter();
		static void convert(std::string &input);

	private:
		ScalarConverter();
		ScalarConverter &		operator=( ScalarConverter const & rhs );
		ScalarConverter( ScalarConverter const & src );

};

std::ostream &			operator<<( std::ostream & o, ScalarConverter const & i );

#endif 