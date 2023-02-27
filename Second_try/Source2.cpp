#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

int main()
{
     cout << "\tNo1\n";
    const int SIZE = 10;
    int arr[SIZE] = {6, 7, 8, 9, 0, 4, 0, 5, 0, 2};
    int arr2[SIZE] = {};
    int countZero = 0;
    int k = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] == 0)
        {
            countZero++;
        }
        else
        {
            arr2[k] = arr[i];
            k++;
        }
    }
    for (int i = SIZE - countZero; i < SIZE; i++)
    {
        arr2[i] = -1;
    }
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = arr2[i];
        cout << arr2[i] << " ";
    }
    cout << endl;
    cout << "\tNo2\n";
    const int SIZE1 = 5;
    const int SIZE2 = 10;
    int arr1[SIZE2] = {};
    int arr3[SIZE1] = {0,3,-7,-6,5};
    int arr4[SIZE1] = {-9,9,13,-30,0};
    int k1 = 0;
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr3[i] > 0)
        {
            arr1[k1] = arr3[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr4[i] > 0)
        {
            arr1[k1] = arr4[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr3[i] == 0)
        {
            arr1[k1] = arr3[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr4[i] == 0)
        {
            arr1[k1] = arr4[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr3[i] < 0)
        {
            arr1[k1] = arr3[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr4[i] < 0)
        {
            arr1[k1] = arr4[i];
            k1++;
        }
    }
    for (int i = 0; i < SIZE2; i++)
    {
        cout << arr1[i] << " ";
    }

	return 0;
}