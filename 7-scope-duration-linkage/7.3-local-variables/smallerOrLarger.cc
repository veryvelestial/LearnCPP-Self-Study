#include <iostream>

int getInt1()
{
	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;
	return x;
}// x dies here

int getInt2()
{
	std::cout << "Enter a larger integer: ";
	int x{};
	std::cin >> x;
	return x;
} // x dies here

void printSmallerOrLarger(int smaller, int larger)
{
	if (smaller > larger)
	{
		std::cout << "You idiot! Swapping values...\n";
		int fixer{ smaller };
		smaller = larger;
		larger = fixer;
	} // fixer dies here

	std::cout << "the smaller value is " << smaller << '\n';
	std::cout << "the larger value is " << larger << '\n';
} // smaller and larger dies here

int main()
{
	int int1{ getInt1() };
	int int2{ getInt2() };

	printSmallerOrLarger(int1, int2);
}// int1 and int2 dies here



