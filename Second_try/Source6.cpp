#include <iostream>
#include <cmath>
#include <Windows.h>
#include <ctime>
#include <time.h>
using namespace std;

int main()
  {
	// ��������� //


 	int num = 100;
	int* address = &num;
	cout << "Adress: " << address << endl; // �������� ������ ������
	
	cout << *address << endl; // �������� ������������� ��������� 

	/*
	�������� ���������� � ������� �������� 3-�� ��������� 3-�� ��������� 
	1) 
	*/

	int size;
	cout << "Enter size: ";
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << endl;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	delete arr;

	return 0;
}