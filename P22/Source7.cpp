#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	enum pricespizza { cheese = 265, Margarita = 165, Carbonara = 255, Marinara = 200 };
	cout << "Menu:\n 4 cheese(1), Margarita(2), Carbonara(3), Marinara(4)\n";
	int choicep;
	int hmp;
	int totalp = 0;
	cout << "Choose pizza: ";
	cin >> choicep;
	switch (choicep)
	{
	case 1:
		totalp += cheese;
		break;
	case 2:
		totalp += Margarita;
		break;
	case 3:
		totalp += Carbonara;
		break;
	case 4:
		totalp += Marinara;
		break;
	default:
		cout << "There is not this pizza(" << endl;
		break;
	}
	cout << "How much: ";
	cin >> hmp;
	int sale = 0;
	for (int i = hmp; i % 5 == 0 && i > 0; i -= 5)
	{
		sale += 1;
	}
	totalp *= (hmp - sale);
	//cout << totalp << endl;



	enum pricesdrink { Pepsi = 23, Sprite = 26, Fanta = 25 };
	cout << "Menu:\n Pepsi(1), Sprite(2), Fanta(3)\n";
	int choiced;
	float hmd;
	float totald = 0;
	cout << "Choose drink: ";
	cin >> choiced;
	switch (choiced)
	{
	case 1:
		totald += Pepsi;
		break;
	case 2:
		totald += Sprite;
		break;
	case 3:
		totald += Fanta;
		break;
	default:
		cout << "There is not this drink(" << endl;
		break;
	}
	cout << "How much (0.5, 0.7, 1, 1.5, 2, 2.5 ...): ";
	cin >> hmd;
	totald *= hmd;
	if (hmd > 3)
	{
		totald -= totald * 15 / 100;
	}
	//cout << totald << endl;
	float total = totald + totalp;
	if (total >= 1845)
	{
		total -= total * 20 / 100;
	}


	switch (choicep)
	{
	case 1:
		cout << "4 cheese - " << hmp << " - " << totalp << " GRN " << endl;
		break;
	case 2:
		cout << "Margarita - " << hmp << " - " << totalp << " GRN " << endl;
		break;
	case 3:
		cout << "Carbonara - " << hmp << " - " << totalp << " GRN " << endl;
		break;
	case 4:
		cout << "Marinara - " << hmp << " - " << totalp << " GRN " << endl;
		break;
	default:
		cout << "There is not this pizza(" << endl;
		break;
	}
	switch (choiced)
	{
	case 1:
		cout << "Pepsi - " << hmd << " - " << totald << " GRN " << endl;
		break;
	case 2:
		cout << "Sprite - " << hmd << " - " << totald << " GRN " << endl;
		break;
	case 3:
		cout << "Fanta - " << hmd << " - " << totald << " GRN " << endl;
		break;
	default:
		cout << "There is not this drink(" << endl;
		break;
	}
	cout << "Total: " << total << " GRN" << endl;

	

	return 0;
}