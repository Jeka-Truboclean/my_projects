#include <iostream>
using namespace std;

int main()
{
	cout << "\t\t\t\t\tNo1\n";
	cout << "====================================================================================\n";
	cout << "|\tX\t|\tY\t|       X AND Y       |       X or Y      |  NOT X |\n";
	cout << "====================================================================================\n";
	cout << "|\t0\t|\t0\t|          0          |         0         |   1    |\n";
	cout << "|\t0\t|\t1\t|          0          |         1         |   1    |\n";
	cout << "|\t1\t|\t0\t|          0          |         1         |   0    |\n";
	cout << "|\t1\t|\t1\t|          1          |         1         |   0    |\n";
	cout << "====================================================================================\n";

	cout << "\t\t\t\t\tNo2\n";
	cout << "Enter diagonal (inch): ";
	float inch;
	cin >> inch;
	cout << "-----------------------\n";
	const float xsm = 2.54;
	cout << "Diagonal (sm): " << inch * xsm << endl;

	cout << "\t\t\t\t\tNo3\n";
	cout << "Enter energy collection: ";
	float N;
	cin >> N;
	cout << "-----------------------\n";
	const float xpb = 3;
	cout << "Powerbank`s energy collection: " << N * xpb << endl;

	cout << "\t\t\t\t\tNo4\n";
	cout << "Enter weight for 1 day (g): ";
	float K;
	cin >> K;
	cout << "-----------------------\n";
	const float xgr = 30;
	cout << "Weight for 30 days (kg): " << K * xgr / 1000 << endl;

	return 0;
}