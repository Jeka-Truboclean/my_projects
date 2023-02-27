#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

void printMessage()
{
	cout << "Hello C++\n";
}

void sayHello()
{
	cout << "Hello World!\n";
}

int sum(int a, int b)
{
	return a + b;
}

int min(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}



double getPrice(int a)
{
	return a * 0, 5;
}

void showPrice(int a, double b)
{
	cout << a + b;
}

int main()
{

	double(*get)(int);
	get = getPrice;
	cout << get(10);

	void(*show)(int, double);
	show = showPrice;

	/*const int countFunction = 3;
	int(*pointerMath[countFunction])(int, int) = { sum, min, mul };

	for (size_t i = 0; i < countFunction; i++)
	{
		cout << pointerMath[i](10, 5) << endl;
	}*/

	return 0;
}