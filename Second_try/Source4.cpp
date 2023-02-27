#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

void N1(int a, int b)
{
	int c = 0;
	for (int i = 0; i <= b; i++)
	{
		if (i == 0)
		{
			c += a;
			i++;
			continue;
		}
		c *= a;
	}
	cout << "Your number: " << c << endl;
}

void N2(int a, int b)
{
	int sum = 0;
	if (a < b)
	{
		int i = a + 1;
		while (i < b)
		{
			sum += i;
			i++;
		}
		cout << "Sum: " << sum << endl;
	}
	else if (a > b)
	{
		int i = b + 1;
		while (i < a)
		{
			sum += i;
			i++;
		}
		cout << "Sum: " << sum << endl;
	}
	else
	{
		cout << "Sum: " << sum << endl;
	}
}

void N5(int fn)
{
	if (fn >= 100000 && fn <= 999999)
	{
		int sn = fn / 1000;
		//cout << sn << endl;
		int ssn = fn - (sn * 1000);
		//cout << ssn << endl;
		int ffin = sn / 100;
		int sfin = (sn - (ffin * 100)) / 10;
		int tfin = sn - (ffin * 100 + sfin * 10);
		//cout << tfin;
		int fin = ffin + sfin + tfin;
		//cout << fin;
		int fsin = ssn / 100;
		int ssin = (ssn - (fsin * 100)) / 10;
		int tsin = ssn - (fsin * 100 + ssin * 10);
		int sen = fsin + ssin + tsin;
		//cout << sen;
		if (fin == sen)
		{
			cout << "Your number is lucky!" << endl;
		}
		else
		{
			cout << "Your number is not lucky!" << endl;
		}
	}
	else
	{
		cout << "ERROR" << endl;
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



	while ((left <= right) && (flag != true))
	{
	    middle = (left + right) / 2; // считываем срединный индекс отрезка [left,right]



	    if (arr[middle] == g)
	    {
	        flag = true; //проверяем ключ со серединным элементом
	    }
	    if (arr[middle] > g)
	    {
	        right = middle - 1; // проверяем, какую часть нужно отбросить
	    }
	    else
	    {
	        left = middle + 1;
	    }
	}



	if (flag) cout << "Индекс элемента " << g << " в массиве равен: " << middle;
	else cout << "Извините, но такого элемента в массиве нет";
}

int main() 
{
	cout << "\tNo1\n";
	cout << "Number: ";
	int a;
	cin >> a;
	cout << "Degree: ";
	int b;
	cin >> b;
	N1(a, b);

	cout << "\tNo2\n";
	cout << "Number: ";
	int c;
	cin >> c;
	cout << "Degree: ";
	int d;
	cin >> d;
	N2(c, d);

	cout << "\tNo3\n";
	cout << "===================" << endl;
	cout << "\tNo4\n";
	cout << "===================" << endl;
	cout << "\tNo5\n";
	cout << "Enter six-digit number: ";
	int fn;
	cin >> fn;
	N5(fn);

	cout << "\tNo1.1\n";
	cout << "Enter number: ";
	int f;
	cin >> f;
	N11(f);

	cout << "\tNo1.2\n";
	cout << "Enter number: ";
	int g;
	cin >> g;
	N12(g);



	

	return 0;
}