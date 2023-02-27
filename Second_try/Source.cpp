#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
#pragma once

using namespace std;

//void - пустой 

/*int getMax(int a, int b)
{
   
    if (a > b)
    {
        cout << "\nMax: " << a;
    }
    else if (b > a)
    {
        cout << "\nMax: " << b;
    }

    return 0;
}

int getMax(int a, int b, int c)
{
    if (a > b and a > c)
    {
        cout << "\nMax: " << a;
    }
    else if (b > a and b > c)
    {
        cout << "\nMax: " << b;
    }
    else if (c > a and c > b)
    {
        cout << "\nMax: " << c;
    }

    return 0;
}
*/


const float TEMPERATURE = 36.6;
void sum(int a, int b);


/*Шаблонные функции*/

//void sum(int a, int b)
//{
//    cout << a + b;
//}
//
//void sum(double a, double b)
//{
//    cout << a + b;
//}
//
//void sum(bool a, bool b)
//{
//    cout << a + b;
//}

/*
template <typename T, typename T1, typename T2>
void sum(T a, T1 b, T2 c)
{
    T1 max = 0, min = 0;
    if (a > b and a > c)
    {
        max = a;
    }
    else if (b > a and b > c)
    {
        max = b;
    }
    else if (c > b and c > a)
    {
        max = c;
    }
    if (a < b and a < c)
    {
        min = a;
    }
    else if (b < a and b < c)
    {
        min = b;
    }
    else if (c < b and c < a)
    {
        min = c;
    }
    cout << "\nMax: " << max;
    cout << "\nMin: " << min;
}

int main()
{
    sum(10, 8.5, 11.1);

*/
/*
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



int main()
{
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
    */

    /*cout << "First: ";
    int a;
    cin >> a;
    cout << "Second: ";
    int b;
    cin >> b;
    cout << "Third: ";
    int c;
    cin >> c;
    getMax(a, b);
    getMax(a, b, c);*/



    /*int a, b;
    cout << "Enter number: ";
    cin >> a;
    cout << "Enter degree: ";
    cin >> b;
    one(a, b);*/


    /*cout << "\tNo1" << endl;
    cout << "Enter price: ";
    int price;
    cin >> price;
    if (price > 400 && price < 600)
    {
        cout << "Discount 5%: ";
        cout << price - (price * 5 / 100) << endl;
    }
    else if (price > 600 && price < 1000)
    {
        cout << "Discount 10%: ";
        cout << price - (price * 10 / 100) << endl;
    }
    else
    {
        cout << "Without discount: ";
        cout << price << endl;
    }

    cout << "\tNo2" << endl;
    cout << "Enter sum: ";
    int sum;
    cin >> sum;
    cout << "1 - UAG\n2 - USD\n3 - EURO\nEnter currency: ";
    int cur;
    cin >> cur;
    if (sum > 0 && sum < 5000 && cur == 1)
    {
        cout << "20% per annum: " << sum * 20 / 100 << " UAG" << endl;
    }
    else if (sum > 0 && sum < 5000 && cur == 2)
    {
        cout << "12% per annum: " << sum * 12 / 100 << " USD" << endl;
    }
    else if (sum > 0 && sum < 5000 && cur == 3)
    {
        cout << "10% per annum: " << sum * 10 / 100 << " EURO" << endl;
    }

    cout << "\tNo3" << endl;
    cout << "A: ";
    int A;
    cin >> A;
    cout << "B: ";
    int B;
    cin >> B;
    cout << "C: ";
    int C;
    cin >> C;
    cout << "D: ";
    int D;
    cin >> D;
    if (A % 5 == 0)
    {
        cout << A << " divide by 5;" << endl;
    }
    else if (B % 5 == 0)
    {
        cout << B << " divide by 5;" << endl;
    }
    else if (C % 5 == 0)
    {
        cout << C << " divide by 5;" << endl;
    }
    else if (D % 5 == 0)
    {
        cout << D << " divide by 5;" << endl;
    }
    if (A % 2 == 0)
    {
        cout << A << " is strictly;" << endl;
    }
    else if (B % 2 == 0)
    {
        cout << B << " is strictly;" << endl;
    }
    else if (C % 2 == 0)
    {
        cout << C << " is strictly;" << endl;
    }
    else if (D % 2 == 0)
    {
        cout << D << " is strictly;" << endl;
    }

    cout << "\tNo4" << endl;
    cout << "Enter first: ";
    int f;
    cin >> f;
    cout << "Enter second: ";
    int s;
    cin >> s;
    if (f * f - s * s > f * f - 2 * f * s + s * s)
    {
        cout << "Difference of squares is bigger;";
    }
    else if (f * f - s * s < f * f - 2 * f * s + s * s)
    {
        cout << "Modulus of the squared difference is bigger;";
    }
    else if (f * f - s * s == f * f - 2 * f * s + s * s)
    {
        cout << "They both are the same;";
    }

    cout << "\tNo5" << endl;
    cout << "Number between 1 & 365: ";
    int day;
    cin >> day;
    if (day >= 1 and day <= 365)
    {
        
    }
    else
    {
        cout << "ERROR";
    }*/

    /*setlocale(LC_ALL, "");
    srand(time(0));*/

    

    /*int N, K;
    cout << "Height: ";
    cin >> N;

    cout << "Width: ";
    cin >> K;*/




    /*
    Массивы - это совокупность однотипных переменных или констант, которые имеют одно общее название
    и в оперативной памяти расположены строго последовательно.
    Благодаря последовательному расположению появляется понятие индекса у элементов массива.
    Индекс - это смещение относительно начала массива.
    Индексация массива начинается с нуля.
    */
    //Массивы
    /*const int size = 10;
    double marks[size] = {};
    double reverseMarks[size] = {};
    int min = 10;
    int max = 30;
    for (int i = 0; i < size; i++)
    {
        marks[i] = rand() % (max - min) + min;
        cout << marks[i] << " ";
    }
    for (int i = 0, j = size - 1; i < size; i++, j--)
    {
        reverseMarks[j] = marks[i];
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << reverseMarks[i] << " ";
    }*/

    /*const int ns = 6;
    double size[ns] = {};
    int P = 0;
    for (int i = ns - 1; i > 0; i--)
    {
        cin >> size[i];
        P += size[i];
    }
    cout << "P: " << P << endl;*/

    //Есть массив найти максимальное значение
   /* const int SIZE = 12;
    int arr[SIZE] = {};
    cout << "Enter profit: ";
    int profit;
    cin >> profit;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % profit + 0;
        cout << arr[i] << " ";



    }

    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "\nMax: " << max;
    cout << "\nMin: " << min;

    cout << "Enter symbol: ";
	char sym;
	cin >> sym;
	cout << "Enter their number: ";
	int num;
	cin >> num;
	cout << "Enter delay(ms): ";
	int del;
	cin >> del;
	cout << "Enter direction (1 - Horizontal, 2 - Vertical): ";
	int dir;
	cin >> dir;
	switch (dir)
	{
	case 1:
		while (num > 0)
		{
			cout << sym;
			num--;
			Sleep(del);
		}
	case 2:
		while (num > 0)
		{
			cout << sym << endl;
			num--;
			Sleep(del);
		}
	}*/




    /*cout << "\tNo1" << endl;
    cout << "Enter symbol: ";
    char sym;
    cin >> sym;
    cout << "Enter their number: ";
    int num;
    cin >> num;
    cout << "Enter delay(ms): ";
    int del;
    cin >> del;
    cout << "Enter direction (1 - Horizontal, 2 - Vertical): ";
    int dir;
    cin >> dir;
    switch (dir)
    {
    case 1:
        while (num > 0)
        {
            cout << sym;
            num--;
            Sleep(del);
        }
    case 2:
        while (num > 0)
        {
            cout << sym << endl;
            num--;
            Sleep(del);
        }
    }
    cout << endl;

    cout << "\tNo2" << endl;
    int number;
    cout << "Wellcome to the full random and a little gambling game!\nRoll the dice if you wana play!\n(1 - play, 2 - I have more important things to do)" << endl;
    int ch;
    cin >> ch;
    if (ch == 1)
    {
        int sumPC = 0;
        int sumY = 0;
        int MIN = 2;
        int MAX = 12;
        cout << "=============1=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "=============2=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "=============3=============" << endl;
        number = rand() % (MAX - MIN) + MIN;
        cout << "PC: " << number << endl;
        sumPC += number;
        number = rand() % (MAX - MIN) + MIN;
        cout << "Yours: " << number << endl;
        sumY += number;
        cout << "============Sum============" << endl;
        cout << "PC: " << sumPC << endl;
        cout << "Yours: " << sumY << endl; 
    }
    else if (ch == 2)
    {
        cout << "Okay, bye." << endl;
    }
    else
    {
        cout << "We don't have this variant.";
    }*/

    //HM 17.11

 /*   cout << "\tHW 8 2" << endl;
    
    cout << "\tNo1" << endl;
    const int SIZE = 12;
    int arr[SIZE] = {};
    cout << "Enter profit: ";
    int profit;
    cin >> profit;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % profit + 0;
        cout << arr[i] << " ";
    }

    int max1 = arr[0];
    int min1 = arr[0];
    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i] > max1)
        {
            max1 = arr[i];
        }
        if (arr[i] < min1)
        {
            min1 = arr[i];
        }
    }
    cout << "\nMax: " << max1;
    cout << "\nMin: " << min1;
    
    cout << endl;

    cout << "\tNo2" << endl;
    const int SIZE1 = 12;
    int arr1[SIZE1] = {};
    cout << "Enter profit: ";
    int profit1;
    cin >> profit1;
    for (int i = 0; i < SIZE1; i++)
    {
        arr1[i] = rand() % profit1 + 0;
        cout << arr1[i] << " ";
    }
    cout << endl;
    int sum1 = 0;
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr1[i] < profit1)
        {
            sum1 += arr1[i];
        }
    }
    cout << "Sum = " << sum1 << endl;

    cout << "\tNo3" << endl;
    int const n = 12;
    int profi[n];
    int start, end, minPrMonth, maxPrMonth;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter your profit for " << i + 1;
        cout << " month:\n";
        cin >> profi[i];
    }
    cout << "Enter the start of the range "
        "interested for you:\n";
    cin >> start;
    cout << "Enter the end of the range interested "
        "for you:\n";
    cin >> end;
    minPrMonth = start - 1;
    maxPrMonth = start - 1;
    for (int i = start; i <= end - 1; i++)
    {
        if (profi[i] > profi[maxPrMonth])
        {
            maxPrMonth = i;
        }
        if (profi[i] < profi[minPrMonth])
        {
            minPrMonth = i;
        }
    }
    cout << "You got the min. profit in "
        << minPrMonth + 1 << " month.\n";
    cout << "You got the max. profit in "
        << maxPrMonth + 1 << " month.\n";
    
    cout << "\tNo4" << endl;
    srand(time(0));
    const int N = 10;
    int nsum = 0;
    int mult = 1;
    int mult2 = 1;
    int sum = 0;
    int fni;
    int lni;
    int num[N] = {};
    for (int i = 0; i < N; i++)
    {
        num[i] = rand() % 100 - 50;
        cout << num[i] << " ";
    }
    int max = num[0];
    int min = num[0];
    int maxi = 0;
    int mini = 0;
    for (int i = 0; i < N; i++)
    {
        if (max < num[i])
        {
            max = num[i];
            maxi = i;
        }
        if (min > num[i])
        {
            min = num[i];
            mini = i;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (num[i] < 0)
        {
            nsum += num[i];
        }
    }
    for (int i = mini; i < maxi; i++)
    {
        mult *= num[i];
    }
    for (int i = 0; i < N; i++)
    {
        if ((i + 1) % 2 == 0) 
        {
            mult2 *= num[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (num[i] < 0)
        {
            fni = i;
            break;
        }
    }
    for (int i = N - 1; i >= 0; i--)
    {
        if (num[i] < 0)
        {
            lni = i;
            break;
        }
    }
    for (int i = fni + 1; i < lni; i++)
    {
        sum += num[i];
    }
    cout << "\nNegative sum = " << nsum << endl;
    cout << "Multiply between min & max = " << mult << endl;
    cout << "Multiply even digits = " << mult2 << endl;
    cout << "Sum between first and last negative digits = " << sum << endl;*/

    //setlocale(LC_ALL, "");
    //const int SIZE = 10;
    //int arr[SIZE] = { -10, -7, 0, 3, 4, 5, 8, 19, 23, 30 };
    //for (int i = 0; i < SIZE; i++)
    //{
    //    cout << "[" << i << "]" << arr[i] << endl;
    //}

    ////Бинарный поиск
    //int search;
    //cin >> search;
    //int left = 0; // левая граница
    //int right = SIZE - 1; // правая граница
    //int middle;
    //bool flag = false;



    //while ((left <= right) && (flag != true))
    //{
    //    middle = (left + right) / 2; // считываем срединный индекс отрезка [left,right]



    //    if (arr[middle] == search)
    //    {
    //        flag = true; //проверяем ключ со серединным элементом
    //    }
    //    if (arr[middle] > search)
    //    {
    //        right = middle - 1; // проверяем, какую часть нужно отбросить
    //    }
    //    else
    //    {
    //        left = middle + 1;
    //    }
    //}



    //if (flag) cout << "Индекс элемента " << search << " в массиве равен: " << middle;
    //else cout << "Извините, но такого элемента в массиве нет";

    //setlocale(LC_ALL, "");

    //cout << "\tTheme 1" << endl;
    //cout << "\tNo1" << endl;
    //cout << "Enter six-digit number: ";
    //int fn;
    //cin >> fn;
    //if (fn >= 100000 && fn <= 999999)
    //{
    //    int sn = fn / 1000;
    //    //cout << sn << endl;
    //    int ssn = fn - (sn * 1000);
    //    //cout << ssn << endl;
    //    int ffin = sn / 100;
    //    int sfin = (sn - (ffin * 100)) / 10;
    //    int tfin = sn - (ffin * 100 + sfin * 10);
    //    //cout << tfin;
    //    int fin = ffin + sfin + tfin;
    //    //cout << fin;
    //    int fsin = ssn / 100;
    //    int ssin = (ssn - (fsin * 100)) / 10;
    //    int tsin = ssn - (fsin * 100 + ssin * 10);
    //    int sen = fsin + ssin + tsin;
    //    //cout << sen;
    //    if (fin == sen)
    //    {
    //        cout << "Your number is lucky!" << endl;
    //    }
    //    else
    //    {
    //        cout << "Your number is not lucky!" << endl;
    //    }
    //}
    //else
    //{
    //    cout << "ERROR" << endl;
    //}

    //cout << "\tNo2" << endl;
    //cout << "Enter four-digit number: ";
    //int fdn;
    //cin >> fdn;
    //if (fdn >= 1000 && fdn <= 9999)
    //{
    //    int fidn = (fdn % 10000) / 1000;
    //    int sedn = (fdn % 1000) / 100;
    //    int thdn = (fdn % 100) / 10;
    //    int fodn = (fdn % 10) / 1;
    //    cout << fodn << thdn << fidn << sedn << endl;
    //}
    //else
    //{
    //    cout << "ERROR" << endl;
    //}

    //cout << "\tNo3" << endl;
    //cout << "Enter number: ";
    //int a;
    //cin >> a;
    //cout << "Enter number: ";
    //int b;
    //cin >> b;
    //cout << "Enter number: ";
    //int c;
    //cin >> c;
    //cout << "Enter number: ";
    //int d;
    //cin >> d;
    //cout << "Enter number: ";
    //int e;
    //cin >> e;
    //cout << "Enter number: ";
    //int f;
    //cin >> f;
    //cout << "Enter number: ";
    //int g;
    //cin >> g;
    //if (a > b && a > c && a > d && a > e && a > f && a > g)
    //{
    //    cout << a << " is bigest" << endl;
    //}
    //else if (b > a && b > c && b > d && b > e && b > f && b > g)
    //{
    //    cout << b << " is bigest" << endl;
    //}
    //else if (c > a && c > b && c > d && c > e && c > f && c > g)
    //{
    //    cout << c << " is bigest" << endl;
    //}
    //else if (d > a && d > b && d > c && d > e && d > f && d > g)
    //{
    //    cout << d << " is bigest" << endl;
    //}
    //else if (e > a && e > b && e > c && e > d && e > f && e > g)
    //{
    //    cout << e << " is bigest" << endl;
    //}
    //else if (f > a && f > b && f > c && f > d && f > e && f > g)
    //{
    //    cout << f << " is bigest" << endl;
    //}
    //else if (g > a && g > b && g > c && g > d && g > e && g > f)
    //{
    //    cout << g << " is bigest" << endl;
    //}
    //else
    //{
    //    cout << "ERROR" << endl;
    //}

    //cout << "\tNo4" << endl;
    //int toplivo = 300;
    //float ves, ab, bc;
    //cout << "введите вес в кг:\n";
    //cin >> ves;
    //cout << "введите расстяоние от точки А до точки Б:\n";
    //cin >> ab;
    //cout << "введите расстояние от точки Б до точки С:\n";
    //cin >> bc;
    //if (ves > 2000 || ab > 300 || bc > 300) {
    //    cout << "простите, мы не можем совершить этот полет";
    //}
    //else if (ves <= 500 && ab <= 150 && bc <= 150) {
    //    cout << "вам не будет нужна дозаправка топлива";
    //}
    //else if (ves <= 500 && ab <= 300 && bc <= 300) {
    //    cout << "вам нужно будет дозаправить " << toplivo - ab - bc << " литров топлива";
    //}
    //else if (ves <= 1000 && ab <= 75 && bc <= 75) {
    //    cout << "вам нужно будет дозаправить" << toplivo - ab - bc << "литров топлива";
    //}
    //else if (ves <= 1000 && ab <= 37.5 && bc <= 37.5) {
    //    cout << "вам не будет нужна дозаправка";
    //}
    //else if (ves <= 1500 && ab <= 42 && bc <= 42) {
    //    cout << "вам нужно будет дозаправить " << toplivo - ab - bc << " литров топлива";
    //}
    //else if (ves <= 1500 && ab <= 21 && bc <= 21) {
    //    cout << "вам не будет нужна дозаправка";
    //}
    //else if (ves <= 2000 && ab <= 33 && bc <= 33) {
    //    cout << "вам нужно будет дозаправить" << toplivo - ab - bc << "литров топлива";
    //}
    //else if (ves <= 2000 && ab <= 16.5 && bc <= 16.5) {
    //    cout << "вам не будет нужна дозаправка";
    //}
    //else {
    //    cout << "простите, мы не можем совершить этот полёт";
    //}

    //cout << "\n\tNo2" << endl;
    //int manager1, manager2, manager3;
    //double zp1, zp2, zp3;
    //const int baza = 200;
    //cout << "введите продажи первого менеджера: ";
    //cin >> manager1;
    //cout << "введите продажи второго менеджера: ";
    //cin >> manager2;
    //cout << "введите продажи третьего менеджера: ";
    //cin >> manager3;
    //if (manager1 <= 500)
    //{
    //    zp1 = baza + (manager1 * 0.03);
    //}
    //else if (manager1 > 500 && manager1 < 1000)
    //{
    //    zp1 = baza + (manager1 * 0.05);
    //}
    //else
    //{
    //    zp1 = baza + (manager1 * 0.08);
    //}
    //if (manager2 <= 500)
    //{
    //    zp2 = baza + (manager2 * 0.03);
    //}
    //else if (manager2 > 500 && manager2 < 1000)
    //{
    //    zp2 = baza + (manager2 * 0.05);
    //}
    //else
    //{
    //    zp2 = baza + (manager2 * 0.08);
    //}
    //if (manager3 <= 500)
    //{
    //    zp3 = baza + (manager3 * 0.03);
    //}
    //else if (manager3 > 500 && manager3 < 1000)
    //{
    //    zp3 = baza + (manager3 * 0.05);
    //}
    //else
    //{
    //    zp3 = baza + (manager3 * 0.08);
    //}
    ////best = zp1;
    ////if (zp2 > zp1)
    ////{
    ////  best = zp2;
    ////}
    ////if (zp3 > zp2)
    ////{
    ////  best = zp3;
    ////}
    //if (zp1 > zp2 && zp1 > zp3)
    //{
    //    cout << "первый менеджер работал лучще всех и поэтому получает + 200$ к зарплате\n"
    //        "итого: " << zp1 + 200 << "$";
    //}
    //else if (zp2 > zp1 && zp2 > zp3)
    //{
    //    cout << "второй менеджер работал лучще всех и поэтому получает + 200$ к зарплате\n"
    //        "итого: " << zp2 + 200 << "$";
    //}
    //else if (zp3 > zp1 && zp3 > zp2)
    //{
    //    cout << "третий менеджер работал лучще всех и поэтому получает + 200$ к зарплате\n"
    //        "итого: " << zp2 + 200 << "$";
    //}
    //else if (zp1 == zp2 && zp2 == zp3)
    //{
    //    cout << "у всех менеджеров одинаковый уровень продаж, получается премия не достанется никому";
    //}
    //else if (zp1 == zp2)
    //{
    //    cout << "у первого и второго менеджера уровень продаж одинаковый, получается премия не достанется никому";
    //}
    //else if (zp1 == zp3)
    //{
    //    cout << "у первого и третьего менеджера уровень продаж одинаковый, получается премия не достанется никому";
    //}
    //else if (zp2 == zp3)
    //{
    //    cout << "у второго и третьего менеджера уровень продаж одинаковый, получается премия не достанется никому";
    //}
    
   /* cout << "\tNo1\n";
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
    const int SIZE2 = SIZE1;
    int arr1[SIZE2] = {};
    int arr3[SIZE1] = {0,3,-7,-6,5};
    int arr4[SIZE1] = {-9,9,13,-30,0};
    int k1 = 0;
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr3[i] > 0)
        {
            arr1[k1] = arr2[i];
            k++;
        }
    }
    for (int i = 0; i < SIZE1; i++)
    {
        if (arr4[i] > 0)
        {
            arr1[i] = arr4[i];
        }
    }*/



    //Массив двумерный 3*4
    
    



    /*int arr[SIZE_ROW][SIZE_COL] = {
         {1,5,6,7},
         {-8,0,4,7},
         {5,3,100,-45}
     };*/

     /*int arr[SIZE_ROW][SIZE_COL];
     arr[0][0] = 1;
     arr[0][1] = 5;
     arr[0][2] = 6;
     arr[0][3] = 7;
     arr[1][0] = -8;
     arr[1][1] = 0;
     arr[1][2] = 4;
     arr[1][3] = 7;
     arr[2][0] = 5;
     arr[2][1] = 3;
     arr[2][2] = 100;
     arr[2][3] = -45;*/
    
    //srand(time(0));
    //const int SIZE_ROW = 5; //кол-во строк
    //const int SIZE_COL = 5; //кол-во столбцов

    //int arr[SIZE_ROW][SIZE_COL] = {};
    //for (int i = 0; i < SIZE_ROW; i++)
    //{
    //    for (int j = 0; j < SIZE_COL; j++)
    //    {
    //        arr[i][j] = rand() % (10 - -10) + -10;
    //        if (arr[i][j] < 0)
    //        {
    //            arr[i][j] = 10;

    //        }
    //        cout << arr[i][j] << " ";
    //    }
    //    cout << endl;
    //}
    
    /*cout << "\tNo1" << endl;
    cout << "Enter: ";
    int lcode;
    char l;
    cin >> l;
    lcode = (int)l;

    if (lcode >= 65 && lcode <= 90 || lcode >= 97 && lcode <= 122)
    {
        cout << "You entered letter" << endl;
    }
    else if (lcode == 63 || lcode == 59 || lcode == 58 || lcode >= 44 && lcode <= 46 || lcode == 33)
    {
        cout << "You entered punctuation mark" << endl;
    }
    else if (lcode >= 48 && lcode <= 57)
    {
        cout << "You entered digit" << endl;
    }
    else
    {
        cout << "You entered other sympol" << endl;
    }

    cout << "\tNo2" << endl;
    cout << "Enter min: ";
    int min;
    cin >> min;
    cout << "1.Kiyvstar\n2.Vodafone\n3.Lifecell" << endl;
    short ch;
    cin >> ch;

    const float K = 0.40;
    const float V = 0.60;
    const float L = 0.30;

    if (ch == 1)
    {
        cout << "Pay " << min * K << " GRN" << endl;
    }
    else if (ch == 2)
    {
        cout << "Pay " << min * V << " GRN" << endl;
    }
    else if (ch == 3)
    {
        cout << "Pay " << min * L << " GRN" << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    cout << "\tNo3" << endl;
    cout << "\t1" << endl;
    cout << "Enter income: ";
    float cashn;
    cin >> cashn;
    cout << "Enter lateness: ";
    float late;
    cin >> late;
    if (late >= 3)
    {
        cout << "Vasia need to write " << (cashn + (late / 3 * 20)) / 0.5 << " lines" << endl;
    }
    else if (late < 3)
    {
        cout << "Vasia need to write " << cashn / 0.5 << " lines" << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    cout << "\t2" << endl;
    cout << "Enter number of lines: ";
    float nol;
    cin >> nol;
    cout << "Enter income: ";
    float cashw;
    cin >> cashw;
    float lates;

    if (nol / 100 * 50 <= 0 || nol / 100 * 50 < cashw)
    {
        cout << "Vasia can not be late or he can not income money" << endl;
    }
    else if (nol / 100 * 50 >= cashw)
    {
        cout << "Vasia can be late " << nol / 100 * 50 / cashw << endl;
    }*/
    
    
    
    
    return 0;
}