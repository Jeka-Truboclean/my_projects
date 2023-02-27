#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

void help(int arr[][4], int SIZE_ROW, int SIZE_COL) // Это целочисленное выведение
{
    int min = 0;
    int max = 10;
    for (int i = 0; i < SIZE_ROW; i++)
    {
        for (int j = 0; j < SIZE_COL; j++)
        {
            arr[i][j] = rand() % (max - min) + min;
            if (arr[i][j] < 0)
            {
                arr[i][j] = 10;

            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    const int findH = 4; // Определение максимального и минимального элемента на главной диагонали матрицы;  (i==j)
    int findIJ[findH] = {};
    int maxH = 0;
    int minH = 10;
    int i = 0;
    while (i < 4)
    {
        int j = i;
        findIJ[i] = arr[i][j];
        //cout << findIJ[i] << " ";
        if (findIJ[i] > maxH)
        {
            maxH = findIJ[i];
        }
        if (findIJ[i] < minH)
        {
            minH = findIJ[i];
        }
        i++;
    }
    cout << "\nMax: " << maxH;
    cout << "\nMin: " << minH;
    cout << endl;
}

void help(double arr1[][4], int SIZE_ROW1, int SIZE_COL1) // Дробное выведение
{
    int min1 = 0.0;
    int max1 = 10.0;
    for (int i = 0; i < SIZE_ROW1; i++)
    {
        for (int j = 0; j < SIZE_COL1; j++)
        {
            arr1[i][j] = rand() % (max1 - min1) + min1;
            if (arr1[i][j] < 0)
            {
                arr1[i][j] = 10;

            }
            cout << (double)arr1[i][j] * 0.5 << " ";
        }
        cout << endl;
    }
}

void help(char arr2[][4], int SIZE_ROW2, int SIZE_COL2) // Символьное выведение 
{
    int min2 = 65;
    int max2 = 90;
    for (int i = 0; i < SIZE_ROW2; i++)
    {
        for (int j = 0; j < SIZE_COL2; j++)
        {
            arr2[i][j] = rand() % (max2 - min2) + min2;
            if (arr2[i][j] < 0)
            {
                arr2[i][j] = 10;

            }
            cout << (char)arr2[i][j] << " ";
        }
        cout << endl;
    }
}

void N11(int f)
{
    
    srand(time(NULL));
    const int SIZE = 5;
    int arr[SIZE] = {};
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % (10 - 0) + 0;
        cout << arr[i] << " ";
        if (f == arr[i])
        {
            cout << " = " << f << " <----" << endl;
        }
        else
        {
            cout << "!= " << f << " X" << endl;
        }
    }
}

void N12(int g)
{
    setlocale(LC_ALL, "");
    const int SIZE = 10;
    int arr[SIZE] = { -10, -7, 0, 3, 4, 5, 8, 19, 23, 30 };
    for (int i = 0; i < SIZE; i++)
    {
        cout << "[" << i << "]" << arr[i] << endl;
    }

    //Бинарный поиск
    int left = 0; // левая граница
    int right = SIZE - 1; // правая граница
    int middle;
    bool flag = false;
}


int main()
{
    cout << "\tNo1\n";
    cout << "================\n";
    cout << "\tNo2\n";
    srand(time(NULL));
    const int SIZE_ROW = 4;
    const int SIZE_COL = 4;
    int arr[SIZE_ROW][SIZE_COL] = {};
    help(arr, SIZE_ROW, SIZE_COL); // Это целочисленное выведение
    cout << endl;

    const int SIZE_ROW1 = 4;
    const int SIZE_COL1 = 4;
    double arr1[SIZE_ROW1][SIZE_COL1] = {};
    help(arr1, SIZE_ROW1, SIZE_COL1); // Дробное выведение
    cout << endl;

    const int SIZE_ROW2 = 4;
    const int SIZE_COL2 = 4;
    char arr2[SIZE_ROW2][SIZE_COL2] = {};
    help(arr2, SIZE_ROW2, SIZE_COL2); // Символьное выведение 
    cout << endl;

    cout << "\tNo3\n";
    cout << "Enter number: ";
    int f;
    cin >> f;
    N11(f);

    cout << "\tNo4\n";
    cout << "Enter number: ";
    int g;
    cin >> g;
    N12(g);

}