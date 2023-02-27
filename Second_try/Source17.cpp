#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

void quickSort(int arr[], int start, int finish)
{
	if (start < finish)
	{
		int left = start;
		int right = finish;		
		do
		{
			int middle = arr[(left + right) / 2]; // находим серединный елемент
			while (arr[left] < middle)
			{
				left++;
			}

			while (arr[right] > middle)
			{
				right--;
			}
			
			if (left <= right)
			{
				int temp = arr[left];
				arr[left] = arr[right];
				arr[right] = temp;
			}
			left++;
			right--;

		} while (left < right);
		quickSort(arr, start, right);
		quickSort(arr, left, finish);
	}
	return;
}

int main()
{
	const int SIZE = 10;
	int arr[] = { -1, 8, 2, 7, 12, -3, 10, 4, 0, 5 };
	quickSort(arr, 0, SIZE-1);
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}