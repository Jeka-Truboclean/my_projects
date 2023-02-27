#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

int main()
{
	int rows = 3, cols = 4;
	int** arr = new int* [rows];
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % (10 - 0) + 0;
		}
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int sum;
	for (int i = 0; i < rows; i++)
	{
		sum = 0;
		for (int j = 0; j < cols; j++)
		{
			sum += arr[i][j];
		}
		cout << "Sum: " << sum << endl;
	}

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}