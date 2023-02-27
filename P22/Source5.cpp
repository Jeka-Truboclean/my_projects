#include <iostream>
using namespace std;

int main()
{
	/*cout << "A: ";
	int a;
	cin >> a;
	if (a >= -10 && a <= -1 || a >= 2 && a <= 15)
	{
		cout << "Your number is between -10 and -1 or 2 and 15" << endl;
	}
	else 
	{
		cout << "Your number is not between -10 and -1 or 2 and 15" << endl;
	}
	
	int N;
	cin >> N;
	if (N % 7 == 0 && N % 11 != 0 && N % 13 != 0)
	{
		cout << "Your number is True";
	}
	else
	{
		cout << "Your number is False";
	}*/

	cout << "\tNo1" << endl;
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
		cout << "20% per annum: " << sum * 20 /100 << " UAG" << endl;
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

	return 0;
}