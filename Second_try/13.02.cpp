#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

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

void SUM(int* arr, int* sum, int size)
{
	for (int i = 0; i < size; i++)
	{
		(*sum) += arr[i];
	}
}

void MUL(int* arr, int* mul, int size)
{
	for (int i = 0; i < size; i++)
	{
		(*mul) *= arr[i];
	}
}

void findNum(int* arr, int size, int nega, int posit, int null)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			nega += 1;
		}
		else if (arr[i] > 0)
		{
			posit += 1;
		}
		else if (arr[i] == 0)
		{
			null += 1;
		}
	}
	cout << "Positive: " << posit << endl;
	cout << "Negative: " << nega << endl;
	cout << "Null: " << null << endl;
}

void deleteNum(int* arr, int* arr1, int size, int k)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			arr1[k] = arr[i];
			k += 1;
		}
	}
}

void findDigit(int* arr, int size, int* S1)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] >= 0)
		{
			(*S1) += 1;
		}
	}
}

int main()
{
	srand(time(NULL));

	cout << "\tNo 1\n";
	int sum = 0;
	int* sumA = &sum;
	int mul = 1;
	int* mulA = &mul;
	int S = 5;
	int* arr = new int[S] {};
	generate(arr, S);
	cout << "Main: ";
	printArrey(arr, S);

	SUM(arr, sumA, S);
	MUL(arr, mulA, S);

	cout << "Sum: " << sum;
	cout << endl;
	cout << "Mul: " << mul;
	cout << endl;

	cout << "\tNo 2\n";
	int* arr1 = new int[S] {};
	generate(arr1, S);
	cout << "Main: ";
	printArrey(arr1, S);

	int nega = 0;
	int posit = 0;
	int null = 0;
	findNum(arr1, S, nega, posit, null);

	cout << "\tNo 3\n";
	int* arr2 = new int[S] {};
	int S1 = 0;
	int* Size = &S1;
	int* arrC = new int[S1] {};
	generate(arr2, S);
	cout << "Main: ";
	printArrey(arr2, S);

	findDigit(arr2, S, Size);
	//cout << "\n" << S1;
	int k = 0;
	deleteNum(arr2, arrC, S, k);
	cout << "Shorted: ";
	printArrey(arrC, S1);

	return 0;
}