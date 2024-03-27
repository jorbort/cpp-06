#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include "Data.hpp"

class Serializer
{

	public:
		~Serializer();
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);


	private:
		Serializer &		operator=( Serializer const & rhs );
		Serializer();
		Serializer( Serializer const & src );

};

std::ostream &			operator<<( std::ostream & o, Serializer const & i );

#endif /* ****************************************************** SERIALIZER_H */