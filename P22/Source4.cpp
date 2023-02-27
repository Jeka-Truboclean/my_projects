#include <iostream> 
using namespace std;
int main() {
	/*enum sym {
		MIN = 1, PLU, MUL, DIV
	};
	cout << "Enter first number: ";
	int fin;
	cin >> fin;
	cout << "Enter second number: ";
	int sen;
	cin >> sen;
	cout << "Choose symbol: 1 - (-), 2 - (+), 3 - (*), 4 - (/)" << endl;
	int sym;
	cin >> sym;
	switch (sym)
	{
	case MIN:
		cout << fin << " - " << sen << " = " << fin - sen << endl;
		break;
	case PLU:
		cout << fin << " + " << sen << " = " << fin + sen << endl;
		break;
	case MUL:
		cout << fin << " * " << sen << " = " << fin * sen << endl;
		break;
	case DIV:
		cout << fin << " / " << sen << " = " << fin / sen << endl;
		break;
	default:
		cout << "ERROR" << endl;
	}*/

	cout << "\tNo1" << endl;
	cout << "Enter: ";
	int lcode;
	char l;
	cin >> l;
	lcode = (int)l;

	if (lcode >= 65 && lcode <= 90 || lcode >= 97 && lcode <= 122)
	{
		cout << "You entered letter" << endl;
	}
	else if (lcode == 63 || lcode == 59 || lcode == 58 || lcode >= 44 && lcode <= 46 || lcode == 33)
	{
		cout << "You entered punctuation mark" << endl;
	}
	else if (lcode >= 48 && lcode <= 57)
	{
		cout << "You entered digit" << endl;
	}
	else
	{
		cout << "You entered other sympol" << endl;
	}

	cout << "\tNo2" << endl;
	cout << "Enter min: ";
	int min;
	cin >> min;
	cout << "1.Kiyvstar\n2.Vodafone\n3.Lifecell" << endl;
	short ch;
	cin >> ch;

	const float K = 0.40;
	const float V = 0.60;
	const float L = 0.30;

	if (ch == 1)
	{
		cout << "Pay " << min * K << " GRN" << endl;
	}
	else if (ch == 2)
	{
		cout << "Pay " << min * V << " GRN" << endl;
	}
	else if (ch == 3)
	{
		cout << "Pay " << min * L << " GRN" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

	cout << "\tNo3" << endl;
	cout << "\t1" << endl;
	cout << "Enter income: ";
	float cashn;
	cin >> cashn;
	cout << "Enter lateness: ";
	float late;
	cin >> late;
	if (late >= 3)
	{
		cout << "Vasia need to write " << (cashn + (late / 3 * 20)) / 0.5 << " lines" << endl;
	}
	else if (late < 3)
	{
		cout << "Vasia need to write " << cashn / 0.5 << " lines" << endl;
	}
	else
	{
		cout << "ERROR" << endl;
	}

	cout << "\t2" << endl;
	cout << "Enter number of lines: ";
	float nol;
	cin >> nol;
	cout << "Enter income: ";
	float cashw;
	cin >> cashw;
	float lates;

	if (nol / 100 * 50 <= 0 || nol / 100 * 50 < cashw)
	{
		cout << "Vasia can not be late or he can not income money" << endl;
	}
	else if (nol / 100 * 50 >= cashw)
	{
		cout << "Vasia can be late " <<  << endl;
	}

	return 0;
}