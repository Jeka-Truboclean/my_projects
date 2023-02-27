#include <iostream>
using namespace std;

int main()
{
	// Логические операторы

	//int price1 = 100;
	//int price2 = 200;

	//cout << (price1 != 20) && (price2 == 260);
	//cout << endl;

	//bool b1 = true, b2 = false, b3 = true;

	//cout << (b1 && b2); // Логическое and

	//cout << endl;

	//cout << (b1 || b2 || b3); // Логическое or

	/*int num;
	cout << "Enter number: ";
	cin >> num;
	cout << "If you see 1 - even, else 0 - odd\n";
	cout << (num % 2 == 0);*/

	/*system("color %");
	system("color 72");*/

	/*cout << "enter number: ";
	int num;
	cin >> num;
	if (num % 2 == 0)
	{
		cout << "your number is even";
	}
	else
	{
		cout << "your number is odd";
	}

	cout << "Enter number: ";
	int num1;
	cin >> num1;
	if (num1 > 100)
	{
		cout << num1;
	}
	else if (num1 == 0)
	{
		cout << 0;
	}
	else
	{
		cout << "Pshol *$&$#@*&*$";
	}*/

	/*cout << "Give me day of week: ";
	int result;
	cin >> result;
	switch (result) {
	case 1:
		cout << "M";
		break;
	case 2:
		cout << "T";
		break;
	case 3:
		cout << "W";
		break;
	case 4:
		cout << "Th";
		break;
	case 5:
		cout << "Fr";
		break;
	case 6:
		cout << "S";
		break;
	case 7:
		cout << "Sunday";
		break;
	default:
		cout << "Error";
		break;
	}*/

	/*cout << "Enter numer: ";
	float n1;
	cin >> n1;*/
	/*cout << "Enter numer: ";
	float n2;
	cin >> n2;
	if (n1 > n2)
	{
		cout << n1 << " > " << n2;
	}
	else if (n1 < n2)
	{
		cout << n1 << " < " << n2;
	}
	else if (n1 == n2)
	{
		cout << n1 << " = " << n2;
	}
	else
	{
		cout << "ERROR";
	}*/

	cout << "Enter number: ";
	int n1;
	cin >> n1;
	cout << "Enter number: ";
	int n2;
	cin >> n2;
	if (n1 == n2)
	{
		cout << n1 << " = " << n2;
	}
	else if (n1 > n2)
	{
		cout << n1 << " " << n2;
	}
	else if (n1 < n2)
	{
		cout << n2 << " " << n1;
	}
	else
	{
		cout << "ERROR";
	}
	return 0;
}