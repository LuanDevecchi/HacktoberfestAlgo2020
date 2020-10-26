#include <Windows.h>
#include <iostream>

int main()
{
    std::cout << "Enter the size of the array: " << std::endl;

    int length{};

    std::cin >> length;

    int* numbers_array = { new int[length] {} };

    std::cout << "Now enter " << length << " integers." << std::endl;

    for (auto i = 0; i < length; ++i)
    {
        std::cin >> numbers_array[i];
    }

    std::cout << '\n';

    for (auto i = 0; i < length; ++i)
    {
        std::cout << numbers_array[i] << '\t';
    }
  
    std::cout << '\n';

    system("pause");
    return 0;
}