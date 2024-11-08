#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int col = 3, row = 3;
	int firstNum;
	int arr[row][col];
	//1
	std::cout << "¬ведите число: ";
	std::cin >> firstNum;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = firstNum;
			firstNum *= 2;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	//2
	firstNum = 0;

	std::cout << "\n\n\n¬ведите число: ";
	std::cin >> firstNum;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			arr[i][j] = firstNum;
			firstNum++;
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}

	return 0;
}