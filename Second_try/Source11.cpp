#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

void generate(int* const arr, unsigned int size)
{
	srand(time(0));
	int min = 0, max = 120;
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min) + min;
	}
}

void show(int* const arr, unsigned int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void test(int* arr)
{
	//arr = new int[5] {};
	arr[0] = 1000;
}

int main()
{
	//int n = 100;
	//int* const ptrN = &n; // константный указатель - нельзя перенаправить

	int* nArr = new int[10] {};
	nArr[0] = 500;
	test(nArr);
	show(nArr,10);
	cout << endl;
	cout << "===================\n";

	unsigned int size = 10U;
	int* arr = new int[size];
	generate(arr, size);
	show(arr, size);

	return 0;
}