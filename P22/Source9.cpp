#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    srand(time(0));
    /*
    ћассивы - это совокупность однотипных переменных или констант, которые имеют одно общее название
    и в оперативной пам€ти расположены строго последовательно.
    Ѕлагодар€ последовательному расположению по€вл€етс€ пон€тие индекса у элементов массива.
    »ндекс - это смещение относительно начала массива.
    »ндексаци€ массива начинаетс€ с нул€.
    */
    //ћассивы
    const int size = 10;
    double marks[size] = {};
    int min = 10;
    int max = 30;
    for (int i = 0; i < size; i++)
    {
        marks[i] = rand() % (max - min) + min;
        cout << marks[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        marks[i] = rand() % (max - min) + min;
        cout << marks[i] << " ";
    }

	return 0;
}