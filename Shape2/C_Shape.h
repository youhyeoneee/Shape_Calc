#pragma once
#include<iostream>
#include<Windows.h>
#define PI 3.14159265358979323846

using namespace std;

class C_Shape
{
public:
	float Area; //����
	float Circum; //�ѷ�

public:
	C_Shape();
	~C_Shape();
	void virtual calc_Area() = 0;
	void virtual calc_Circum() = 0;
	void getinfo() 
	{
		int i;
			cout << "-----------------------------" << endl;
			cout << "1. �ѷ�" << endl;
			cout << "2. ����" << endl;
			cout << "-----------------------------" << endl;
			cout << "�Է� ::"; cin >> i;
			if (i == 1)
			{
				cout << "�ѷ��� ::" << Circum << "�Դϴ�";
				system("pause");
				system("cls");
			}
			else if (i == 2)
			{
				cout << "���̴� ::" << Area << "�Դϴ�";
				system("pause");
				system("cls");

			}
			else
			{
				cout << "�߸��� �Է��Դϴ�." << endl;
				system("pause");
				system("cls");

			}
	
	}


};

