#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

int sumRecur(int num)
{
	if (num == 1)
	{
		return 1;
	}
	return num + sumRecur(num - 1);
}

int main()
{
	cout << sumRecur(3);

	return 0;
}