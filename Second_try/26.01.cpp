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
void midNum(int* arr, int size, int* mid)
{
	for (int i = 0; i < size; i++)
	{
		(*mid) += arr[i];
	}
	(*mid) /= 5;
}

int main()
{
	srand(time(NULL));
	cout << "\tNo 1\n";
	cout << "=======================\n";
	cout << "\tNo 2\n";
	int S = 5;
	int* arr = new int[S] {};
	generate(arr, S);
	printArrey(arr, S);
	int mid = 0;
	int* midN = &mid;
	midNum(arr, S, midN);
	cout << "Middle num: " << (*midN) << endl;
	cout << "\tNo 3\n";
	int* arr1 = new int[S] {};
	generate(arr1, S);
	cout << "Main: ";
	printArrey(arr1, S);

	int nega = 0;
	int posit = 0;
	int null = 0;
	findNum(arr1, S, nega, posit, null);

	return 0;
}