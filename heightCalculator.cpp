#include <iostream>

// program to calculate altitude of a ball dropped from a tower of height h (in m) after n seconds (where n = 1, 2, 3, 4, 5)
double getTowerHeight()
{
	std::cout << "Enter the height of the tower (in m): ";
	int x{};
	std::cin >> x;
	return x;
}

double distanceFallen(double seconds)
{
	return 9.8 * seconds * seconds / 2;
}


void calcAndPrint(double towerHeight, int seconds)
{
	if (towerHeight - distanceFallen(seconds) > 0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << towerHeight - distanceFallen(seconds) << '\n';
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

int main()
{
	double towerHeight{ getTowerHeight() };

	calcAndPrint(towerHeight, 0);
	calcAndPrint(towerHeight, 1);
	calcAndPrint(towerHeight, 2);
	calcAndPrint(towerHeight, 3);
	calcAndPrint(towerHeight, 4);
	calcAndPrint(towerHeight, 5);

}