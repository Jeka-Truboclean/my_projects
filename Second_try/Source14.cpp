#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

/*

2 3 4 7 1 10 -19 5 7

1 3

2 1 10 -19 5 7

*/

void printArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void deletePartArray(int* arr, int size, int index, int countEl)
{
	if (index >= 0 && index <= size - 1 && countEl > 0)
	{
		int* newArray = nullptr;
		int size2;
		if (size - countEl <= 0)
		{
			size2 = index;
			newArray = new int[index];
			for (int i = 0; i < index; i++)
			{
				newArray[i] = arr[i];
			}
		}
		else
		{
			newArray = new int[size - countEl];
			size2 = size - countEl;
			int k = 0;
			for (int i = 0; i < size; i++)
			{
				if (i < index || i >= index + countEl)
				{
					newArray[k] = arr[i];
					k++;
				}
			}

		}
		printArray(newArray, size2);
	}
}

int main()
{
	unsigned int size = 10;
	int* arr = new int[10] {-4, -2, 3, 5, 1, 2, 9, 7, 15, 10};
	int index, count;
	cin >> index >> count;
	deletePartArray(arr, size, index, count);
	return 0;
}