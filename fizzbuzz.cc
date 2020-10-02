#include <iostream>
#include <map>

std::map<bool, std::string> lookuptablefizz
{
	{true, "Fizz"},
	{false, ""},
};

std::map<bool, std::string> lookuptablebuzz
{
	{true, "Buzz"},
	{false, ""},
};

int main()
{
	for (int i{ 0 }; i < 100; ++i)
	{
		const bool fizz_flag = i % 3 == 0;
		const bool buzz_flag = i % 5 == 0;
		
		if ( fizz_flag || buzz_flag )
			std::cout << lookuptablefizz[fizz_flag] << lookuptablebuzz[buzz_flag] << std::endl;
		else
			std::cout << i << std::endl;
	}

	return EXIT_SUCCESS;
}
