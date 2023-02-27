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



int main()
{
	int (*pointerMath)(int, int);
	pointerMath = nullptr;
	char ch;
	cout << "Enter char(+,-,*)";
	cin >> ch;
	int a, b;
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;
	switch (ch)
	{
	case '+':
		pointerMath = sum;
		break;
	case '-':
		pointerMath = min;
		break;
	case '*':
		pointerMath = mul;
		break;
	}
	if (pointerMath != nullptr)
	{
		cout << pointerMath(a, b);
	}




	//void (*pointerFunction)(); //указатель на функцию
	//

	//pointerFunction = sayHello;

	//pointerFunction();

	//pointerFunction = printMessage;

	//pointerFunction();

	return 0;
}