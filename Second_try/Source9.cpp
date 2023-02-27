#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

//void increment(int& a)
//{
//	a++;
//}

void generate(int* arr, int size);
void printArrey(int* arr, int size);
void colect(int* arr1, int* arr2, int size);

int main()
{
	/*int number = 100;
	int& refNumber = number;
	increment(refNumber);
	cout << number;*/

	srand(time(NULL));
	int M;
	cout << "Num: ";
	cin >> M;
	int* A = new int[M] {};
	int* B = new int[M] {};

	generate(A, M);

	printArrey(A, M);

	colect(A, B, M);

	printArrey(B, M);

	delete[] A;
	delete[] B;

	return 0;
}


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

void colect(int* arr1, int* arr2, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int k = 0; k < size; k++)
		{
			if (arr1[i] == arr1[k])
			{
				arr2[i] = arr1[k];
			}
		}
	}
}