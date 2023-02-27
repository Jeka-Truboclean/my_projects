#include <iostream>
using namespace std;

int main()
{
	//cout << 5 << endl;
	//cout << 5.0f << endl;
	//cout << false - true - true << endl;

	//int a = 10;
	//cout << a++ << endl;
	//cout << a-- << endl;

	//bool val1, val2;
	//val1 = true;
	//val2 = true;
	//int val3 = (val1 && val2) ? -10 : 10;
	//cout << val3 << endl;

	//cout << 21 % 3 << endl;
	//cout << 3 % 21 << endl;

	//int a = 8;
	//cout << a << endl;
	//a++;
	//cout << a << endl;
	//a--;
	//cout << a << endl;
	//int r;
	//cout << "Write radious: "; // Вписывуем радиус
	//cin >> r;
	//const float p = 3.14; // Число п
	//float A = r * p * p;
	//cout << "Area: " << A << endl; // Площадь
	//float C = 2 * p * r;
	//cout << "Circumference: " << C << endl; // Периметр

	cout << "\tTheme 1" << endl;
	cout << "\tNo1" << endl; // Это для обозначения задания 
	float R1; // Мои переменные
	float R2;
	float R3;
	cout << "R1 = "; // Первое число
	cin >> R1;
	cout << "R2 = "; // Второе число
	cin >> R2;
	cout << "R3 = "; // Третье число
	cin >> R3;
	cout << "1/R0 = 1/R1+1/R2+1/R3 = " << 1/R1 + 1/R2 + 1/R3 << endl; // Окончательное выражение

	cout << "\tNo2" << endl;
	float R;
	const float pi = 3.14;
	cout << "R = ";
	cin >> R;
	cout << "L = 2 * pi * R = " << 2 * pi * R << endl;
	cout << "S = pi * R2 = " << pi * R * R << endl;

	cout << "\tNo3" << endl;
	float V;
	float t;
	float a;
	cout << "V = ";
	cin >> V;
	cout << "t = ";
	cin >> t;
	cout << "a = ";
	cin >> a;
	cout << "S = v * t + (a * t2) / 2 = " << (V * t + (a * t * t)) / 2 << endl;\

	cout << "\tTheme 2" << endl;
	cout << "\tNo1" << endl;
	int sec;
	cout << "sec = ";
	cin >> sec;
	cout << "min = " << sec / 60 << endl;
	cout << "hour = " << sec / 3600 << endl;

	cout << "\tNo2" << endl;
	float mon;
	cout << "Money = ";
	cin >> mon;
	int m = mon;
	float k = (mon - m) * 100;
	cout << m << " grn " << k << " cop";

	cout << "\tNo3" << endl;
	float mi;
	float t1;
	const float km = 3.6;
	cout << "Write distance (M) = ";
	cin >> mi;
	cout << "Write time (min. sec) = ";
	cin >> t1;
	int t2 = t1;
	float t3 = (t1 - t2) * 100;
	float ti = t2 * 60 + t3;
	cout << "Time: " << t2 << " min " << t3 << " sec = " << ti << " sec" << endl;
	float v = (mi / ti) * km;
	cout << "Your speed = " << v << " km/hour" << endl;

	cout << "\tNo4" << endl;
	cout << "Enter count of days: ";
	int d;
	cin >> d;
	int unc = d / 7;
	float lessd = (d - unc * 7);
	cout << unc << " weeks " << lessd << " days.";

	return 0;
}