#include <iostream>
#include <cmath>
#include <ctime>
#include <time.h>

using namespace std;

int main()
{
	cout << "\tNo 1\n";
	int a = 5;
	int* A = &a;
	int b = 10;
	int* B = &b;
	if ((*A) < (*B))
	{
		cout << "B is bigger\n";
	}
	else
	{
		cout << "A is bigger\n";
	}
	cout << "\tNo 2\n";
	int c;
	cout << "C: ";
	cin >> c;
	int* C = &c;
	if ((*C) >= 0)
	{
		cout << "Num +\n";
	}
	else if ((*C) < 0)
	{
		cout << "Num - \n";
	}
	else
	{
		cout << "ERROR\n";
	}
	cout << "\tNo 3\n";
	int d = 1;
	int* D = &d;
	//============
	int e = 0;
	int* E = &e;
	//============
	int f = 3;
	int* F = &f;
	//============

	//============
	(*E) = (*D);
	//============
	(*D) = (*F);
	//============
	(*F) = (*E);
	//============
	cout << "D: " << (*D) << endl;
	cout << "F: " << (*F) << endl;
	cout << "\tNo 4\n";
	int a1;
	cout << "Enter first: ";
	cin >> a1;
	int* A1 = &a1;
	//============
	char c1;
	cout << "Enter (+, -, *, /): ";
	cin >> c1;
	char* C1 = &c1;
	//============
	int b1;
	cout << "Enter second: ";
	cin >> b1;
	int* B1 = &b1;
	//============
	switch (c1)
	{
	case '+' :
		cout << (*A1) << " + " << (*B1) << " = " << (*A1) + (*B1);
		break;
	case '-':
		cout << (*A1) << " - " << (*B1) << " = " << (*A1) - (*B1);
		break;
	case '*':
		cout << (*A1) << " * " << (*B1) << " = " << (*A1) * (*B1);
		break;
	case '/':
		cout << (*A1) << " / " << (*B1) << " = " << (*A1) / (*B1);
		break;
	default:
		cout << "ERROR";
		break;
	}


	return 0;
}