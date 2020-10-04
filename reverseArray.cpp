#include <vector>
#include <iostream>

std::vector<int> gArray = { 0 , 1 , 2, 3 , 4 };

std::vector<int> ReverseArray(std::vector<int>& arr)
{
    std::vector<int> reverse{};

    for (int i{ static_cast<int>(arr.size()) - 1 }; i >= 0; --i) 
    {
        reverse.push_back((arr.at(i)));
    }

    return reverse;
}

int main()
{
    auto reverse = ReverseArray(gArray);

    for (const auto& entry : reverse)
    {
        std::cout << entry;
    }
}