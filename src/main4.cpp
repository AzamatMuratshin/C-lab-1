#include "task4.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
	SetConsoleCP(1251);		// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);	// ��������� ������� �������� win-cp 1251 � ����� ������
	cout << "\n  �������������� ����� ����->��  \n";

    int feet = 0;
    int inches = 0;
	cout << "������� ��� ���� � ������, �������� 5'11:  \n";
    scanf("%i'%i", &feet, &inches);
	cout << ("%f.1\n", convert(feet, inches));
}