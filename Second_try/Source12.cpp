#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

void generate(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (10 - 0) + 0;
	}
}

void printArrey(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void personGen(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Enter digit: ";
		cin >> arr[i];
	}
}

void collect(int* arr, int* arr1, int* Arr, int size, int s)
{
	for (int i = 0; i < size; i++)
	{
		if (i < s)
		{
			Arr[i] = arr[i];
		}
		else
		{
			Arr[i] = arr1[i - s];
		}
	}
}

int main()
{
	srand(time(NULL));
	int S = 5;
	int* arr = new int[S] {};
	generate(arr, S);
	printArrey(arr, S);

	int S2;
	cout << "Num: ";
	cin >> S2;
	int* arr1 = new int[S2] {};
	personGen(arr1, S2);
	printArrey(arr1, S2);

	int Size = S + S2;
	int* Arr = new int[Size] {};
	collect(arr, arr1, Arr, Size, S);
	printArrey(Arr, Size);

	return 0;
}