#include "Base.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	std::srand(time(NULL));
	int n = rand() % 3;

	switch(n)
	{
		case 0 :
			std::cout << "Created an A class object" << std::endl;
			return (new A);
		case 1 :
			std::cout << "Created a B class object" << std::endl;
			return (new B);
		case 2 :
			std::cout << "Created a C class object" << std::endl;
			return (new C);
	}
	std::cout << "something went wrong" << std::endl;
	return (NULL);
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A class was dientified" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B class was dientified" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C class was dientified" << std::endl;
	else
		std::cout << "unidentified class niether A , B or C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "Class A was identifed" << std::endl;
		return;
	}
	catch (const std::exception &e) {}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void) b;
		std::cout << "Class B was identified" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void) c;
		std::cout << "Class C was identified" << std::endl;
		return;
	}
	catch(const std::exception& e){}
	std::cout << "Class is neither A, B or C" << std::endl;
}