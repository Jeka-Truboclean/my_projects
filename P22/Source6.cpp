#include<iostream>
using namespace std;

int main()
{
	/*int i = 1;
	while (i <= 7)
	{
		cout << "I see you!" << i << endl;
		i++;
	}

	int s = 0;
	for (int i = 1; i <= 10; i++)
	{
		s = s + i;
	}
	cout << s;*/

	/*int money;
	int ice;
	int sum = 0;
	cout << "Enter money: ";
	cin >> money;
	cout << "Enter ice cost: ";
	cin >> ice;
	while (money >= ice)
	{
		money = money - ice;
		sum++;
	}
	cout << "You bought " << sum << " ice";*/

	/*int money;
	int ice;
	cout << "Enter money: ";
	cin >> money;
	cout << "Enter ice cost: ";
	cin >> ice;
	int sum = 1;
	for (money >= ice; money -= ice;)
	{
		sum++;
	}
	cout << "You bought " << sum << " ice";*/

	/*int A;
	int B;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	int N = 0;
	while (A >= B)
	{
		N++;
		cout << A-- << endl;
	}
	cout << "All num: " << N << endl;*/

	/*long long i = 11;
	while (i < 100)
	{
		cout << i * i << endl;
		i++;
	}*/

	cout << "\tNo1" << endl;
	cout << "Enter A: ";
	int A;
	cin >> A;
	int sum = 0;
	for (int i = A; i <= 500; i++)
	{
		//cout << i << endl;
		if (i % 2 == 0)
		{
			sum += i;
		}
	}
	cout << "Sum of the numbers: " << sum << endl;

	cout << "\tNo2" << endl;
	cout << "X: ";
	int X;
	cin >> X;
	cout << "Y: ";
	int Y;
	cin >> Y;
	int res = 1;
	for (int i = Y; i > 0; i--)
	{
		//cout << X << " " << i << endl;
		res = res * X;
	}
	cout << res << endl;

	cout << "\tNo3" << endl;
	float resalt = 0;
	float i = 0;
	while (i <= 1000)
	{
		//cout << resalt << " " << i << endl;
		resalt += i;
		i++;
	}
	cout << resalt / 1000 << endl;

	cout << "\tNo4" << endl;
	cout << "A: ";
	int a1;
	cin >> a1;
	long long r = 1;
	while (a1 <= 20)
	{
		r *= a1;
		//cout << a1 << " " << r << endl;
		a1++;
	}
	cout << r << endl;

	cout << "\tNo5" << endl;
	cout << "Number: ";
	int k;
	cin >> k;
	int i1 = 1;
	while (i1 <= 10)
	{
		cout << k << " x " << i1 << " = " << k * i1 << endl;
		i1++;
	}

	return 0;
}