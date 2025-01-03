#include <iostream>
#include <string>
#include <string_view>

// version 2 of my program which creates the getName part of the program its own function

std::string getName(int ID)
{
	std::cout << "Enter the name of Person #" << ID << ": ";
	std::string person{};
	std::getline(std::cin >> std::ws, person);
	return person;
}


int getAge(std::string_view person)
{
	std::cout << "Enter the age of " << person << ": ";
	int age;
	std::cin >> age;
	return age;
}

void printOlder(std::string_view person1, int person1age, std::string_view person2, int person2age)
{
	if (person1age > person2age)
		std::cout << person1 << " (age " << person1age << ") is older than " << person2 << " (age " << person2age << ").\n";
	else
		std::cout << person2 << " (age " << person2age << ") is older than " << person1 << " (age " << person1age << ").\n";
}

int main()
{
	int ID{};
	ID = 1;

	std::string person1{ getName(ID) };
	int person1age{ getAge(person1) };

	ID = ID + 1;

	std::string person2{ getName(ID) };
	int person2age{ getAge(person2) };

	printOlder(person1, person1age, person2, person2age);
}
