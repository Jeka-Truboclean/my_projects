#include <iostream>
using namespace std;

int main()
{
	cout << "\tTheme 1" << endl;
	cout << "\tNo1" << endl;
	cout << "Enter six-digit number: ";
	int fn;
	cin >> fn;
	if (fn >= 100000 && fn <= 999999)
	{
		int sn = fn / 1000;
		cout << sn << endl;
		int ssn = fn - (sn * 1000);
		cout << ssn << endl;
		int ffin = sn / 100;
		int sfin = (sn - (ffin * 100)) / 10;
		int tfin = sn - (ffin * 100 + sfin *10);
		cout << tfin;
		int fin = ffin + sfin + tfin;
		cout << fin;
		int fsin = ssn / 100;
		int ssin = (ssn - (fsin * 100)) / 10;
		int tsin = ssn - (fsin * 100 + ssin * 10);
		int sen = fsin + ssin + tsin;
		cout << sen;
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

	cout << "\tNo2" << endl;
	cout << "Enter four-digit number: ";
	int fdn;
	cin >> fdn;
	if (fdn >= 1000 && fdn <= 9999)
	{
		int fidn = (fdn % 10000) / 1000;
		int sedn = (fdn % 1000) / 100;
		int thdn = (fdn % 100) / 10;
		int fodn = (fdn % 10) / 1;
		cout << fodn << thdn << fidn << sedn << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

	cout << "\tNo3" << endl;
	cout << "Enter number: ";
	int a;
	cin >> a;
	cout << "Enter number: ";
	int b;
	cin >> b;
	cout << "Enter number: ";
	int c;
	cin >> c;
	cout << "Enter number: ";
	int d;
	cin >> d;
	cout << "Enter number: ";
	int e;
	cin >> e;
	cout << "Enter number: ";
	int f;
	cin >> f;
	cout << "Enter number: ";
	int g;
	cin >> g;
	if (a > b && a > c && a > d && a > e && a > f && a > g)
	{
		cout << a << " is bigest" << endl;
	}
	else if (b > a && b > c && b > d && b > e && b > f && b > g)
	{
		cout << b << " is bigest" << endl;
	}
	else if (c > a && c > b && c > d && c > e && c > f && c > g)
	{
		cout << c << " is bigest" << endl;
	}
	else if (d > a && d > b && d > c && d > e && d > f && d > g)
	{
		cout << d << " is bigest" << endl;
	}
	else if (e > a && e > b && e > c && e > d && e > f && e > g)
	{
		cout << e << " is bigest" << endl;
	}
	else if (f > a && f > b && f > c && f > d && f > e && f > g)
	{
		cout << f << " is bigest" << endl;
	}
	else if (g > a && g > b && g > c && g > d && g > e && g > f)
	{
		cout << g << " is bigest" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

	cout << "\tNo4" << endl;
	cout << "Distance between A and B: ";
	int fd;
	cin >> fd;
	cout << "Distance between B and C: ";
	int sd;
	cin >> sd;
	cout << "Cargo weight: ";
	int cw;
	cin >> cw;
	if (cw > 2000)
	{
		cout << "It is imposible!";
	}
	if (cw < 500)
	{
		int fid = fd * 1;
		if (fid < 300)
		{
			cout << "It is imposible!";
		}
	}
	if (cw >= 500 && cw < 1000)
	{
		int fid = fd * 4;
		if (fid < 300)
		{
			cout << "It is imposible!";
		}
	}

	cout << "\tNo1" << endl;

	return 0;
}