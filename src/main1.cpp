#include "task1.h"
#include <stdio.h>
#include <Windows.h>


int main()

{
	SetConsoleCP(1251);		// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251);	// ��������� ������� �������� win-cp 1251 � ����� ������
    char gender = 'g';
    float height = 0;
    float weight = 0;
    printf("������� ��� ������ q-������� w-������� e-����\n");
    scanf("%c", &gender);
    printf("������� ��� ���� � ��:\n");
    scanf("%f", &height);
    printf("������� ��� ��� � ��:\n");
    scanf("%f", &weight);
    int recommendation = getRecommendation(gender, height, weight);
    switch (recommendation)
    {
        case 1:
            printf("��� ��� ���������\n");
            break;
        case -1:
            printf("��� ��� ������������\n");
            break;
        case 0:
            printf("��� ��� �������\n");
    }
    return 0;
} 