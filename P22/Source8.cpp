#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
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



	/*srand(time(0));
	cout << rand() << endl;

	const int size = 10;
	int marks[size] = { 10, 12, 7, 6, 11, 8, 9, 0, 5, 12};*/

	return 0;
}