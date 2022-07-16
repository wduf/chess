#include <iostream>
#include <cstdlib>
#include "production.hpp"

int main()
{
	Production* prod = new Production();
	prod->runProduction();
	return EXIT_SUCCESS;
}
