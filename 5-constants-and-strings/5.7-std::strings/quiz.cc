#include <iostream>
#include <string>

int getAge()
{
	std::cout << "Enter your age: ";
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	std::cout << "Enter your full name: ";
	std::string name{};
	std::getline(std::cin >> std::ws, name);

	int age{ getAge() };

	int nameLength{ static_cast<int>(std::ssize(name)) };

	std::cout << "Your age + length of name is: " << nameLength + age << '\n';

	return 0;
}
