#include "List constant.h"
#include <iostream>
using namespace std;

void foo(int a, int b)
{
	cout << "foo()";
}

int main()
{
	{
		int i = 10;
		cout << i << endl;
	}

	return 0;
}
