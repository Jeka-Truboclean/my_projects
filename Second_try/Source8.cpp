#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

void generate(int* arr, int size);
void printArrey(int* arr, int size);
void colect(int* arr3, int* arr1, int* arr2, int size1, int size2);

int main()
{
	/*int n = 5;
	int* a = new int[n] {3, 4, 7, 2, 5};
	for (int i = 0; i < n; i++)
	{
		cout << a + i << ":" << *(a + i) << endl;
	}
	cout << "--------------------------------\n";
	bool* b = new bool[n] { 1, 0, 1, 0, 1 };
	for (int i = 0; i < n; i++)
	{
		cout << b + i << ":" << *(b + i) << endl;
	}
	cout << "--------------------------------\n";
	double* c = new double[n] { 3.5, 2, 1, 1.4, 3 };
	for (int i = 0; i < n; i++)
	{
		cout << c + i << ":" << *(c + i) << endl;
	}*/

	srand(time(NULL));
	int M;
	cin >> M;
	int* A = new int[M] {};
	int N;
	cin >> N;
	int* B = new int[N] {};
	int* C = new int[M + N] {};
	generate(A, M);
	generate(B, N);

	printArrey(A, M);
	printArrey(B, N);

	colect(C, A, B, M, N);

	printArrey(C, M + N);

	delete(A, B, C);

	return 0;
}

void generate(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (10 - -10) + -10;
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

void colect(int* arr3, int* arr1, int* arr2, int size1, int size2)
{
	for (int i = 0; i < size1; i++)
	{
		if (arr1[i] < 0)
		{
			arr3[i] = arr1[i];
		}
	}
	for (int i = size1, k = 0; i < size2 + size1; i++, k++)
	{
		if (arr2[k] < 0)
		{
			arr3[i] = arr2[k];
		}
	}
}