#include "task3.h"
#include <stdio.h>
#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleCP(1251);		// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);	// ��������� ������� �������� win-cp 1251 � ����� ������
	std::cout << "\n		�������������� �������� � ������� � ������o \n";
	
    float angle = 0;
    char type = '0';
	std::cout << "������� �������� ���� � � ������� '__d'- � �������� ��� '__r'- � ��������: ";
    scanf("%f%c", &angle, &type);
    char buf[100] = { 0 };
    printf("%s\n", convert(buf, angle, type));
    return 0;
} 