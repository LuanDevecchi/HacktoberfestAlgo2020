#include <iostream>

int main()
{
	unsigned int i1 { };
	std::cin >> i1;

	unsigned int i2 { };
	std::cin >> i2;

	for ( ; i1 < i2; ++i1 )
	{
		if ( i1 % 2 == 0 )
			std::cout << i1 << '\n';
	}

	return EXIT_SUCCESS;
}