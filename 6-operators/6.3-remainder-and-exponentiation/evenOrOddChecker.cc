#include <iostream>

int getInt()
{
	std::cout << "Enter an integer: ";
	int num{};
	std::cin >> num;
	return num;
}

constexpr bool getEven(int num)
{
		return (num % 2) == 0;
}

constexpr void evenOrOdd(int num)
{
	if ( getEven(num) )
		std::cout << num << " is " << "even.\n";
	else
		std::cout << num << " is " << "odd.\n";
}

int main()
{
	int num{ getInt() };

	evenOrOdd(num);
}
