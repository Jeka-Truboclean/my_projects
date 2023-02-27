#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

int main()
{
    cout << "\tNo 1\n";
	const int SIZE_ROW = 5;
	const int SIZE_COL = 5;
	int arr[SIZE_ROW][SIZE_COL] = {};
	cout << "Enter first number: ";
	int f = 0;
	cin >> f;
    for (int i = 0; i < SIZE_ROW; i++)
    {
        for (int j = 0; j < SIZE_COL; j++)
        {
            arr[i][j] = f;
            if (arr[i][j] < 0)
            {
                arr[i][j] = 10;

            }
            cout << arr[i][j] << " ";
            f *= 2;
        }
        cout << endl;
    }

    cout << "\tNo 2\n";
    const int SIZE_ROW1 = 5;
    const int SIZE_COL1 = 5;
    int arr1[SIZE_ROW1][SIZE_COL1] = {};
    cout << "Enter first number: ";
    int f1 = 0;
    cin >> f1;
    for (int i = 0; i < SIZE_ROW1; i++)
    {
        for (int j = 0; j < SIZE_COL1; j++)
        {
            arr1[i][j] = f1;
            if (arr1[i][j] < 0)
            {
                arr1[i][j] = 10;

            }
            cout << arr1[i][j] << " ";
            f1 += 1;
        }
        cout << endl;
    }
	
    cout << "\tNo 3\n";
    srand(time(0));
    const int SIZE_ROW2 = 5; 
    const int SIZE_COL2 = 5; 

    int arr2[SIZE_ROW2][SIZE_COL2] = {};
    for (int i = 0; i < SIZE_ROW2; i++)
    {
        for (int j = 0; j < SIZE_COL2; j++)
        {
            arr2[i][j] = rand() % (10 - 0) + 0;
            if (arr2[i][j] < 0)
            {
                arr2[i][j] = 10;

            }
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}