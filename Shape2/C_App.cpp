#include "C_App.h"

C_App::C_App()
{
}



void C_App::run()
{

	int ipt;
	
	while (true)
	{
		system("cls");
		cout << "���� ����" << endl;
		cout << "-----------------------------" << endl;
		cout << "1. ���簢��" << endl;
		cout << "2. ���簢��" << endl;
		cout << "3. �ﰢ��" << endl;
		cout << "4. ���ﰢ��" << endl;
		cout << "5. ��" << endl;
		cout << "0. ����" << endl;
		cout << "-----------------------------" << endl;
		cout << "�Է� :: "; cin >> ipt;
		system("cls");

		if (ipt == 1) //���簢��
		{
			float garo, sero;
			cout << "���� ���� :: ���簢��" << endl;
			cout << "-----------------------------" << endl;
			cout << "���� ���� �Է� ::"; cin >> garo;
			cout << "���� ���� �Է� ::"; cin >> sero; cout << endl;
			shape = new C_Rect(garo, sero);

			system("cls");
			cout << "���� ���� :: ���簢��" << endl;
			cout << "���� ���� ::" << garo << endl;
			cout << "���� ���� ::" << sero << endl;
			shape->getinfo();

		}
		else if (ipt == 2) //���簢��
		{
			float side;
			cout << "���� ���� :: ���簢��" << endl;
			cout << "-----------------------------" << endl;
			cout << "�� ���� ���� �Է� ::"; cin >> side; cout << endl;
			shape = new C_Sq(side);

			system("cls");
			cout << "���� ���� :: ���簢��" << endl;
			cout << "�� ���� ���� ::" << side << endl;
			shape->getinfo();

		}
		else if (ipt == 3) //�ﰢ��
		{

			float a, b, c;
			cout << "���� ���� :: �ﰢ��" << endl;
			cout << "-----------------------------" << endl;
			cout << "ù��° �� ���� �Է� ::"; cin >> a;
			cout << "�ι�° �� ���� �Է� ::"; cin >> b;
			cout << "����° �� ���� �Է� ::"; cin >> c; cout << endl;
			shape = new C_Try(a, b, c);

			if (TryisPossible(a, b, c)) //�ﰢ�� ��������� �ִ��� �Ǻ�
			{
				system("cls");

				cout << "���� ���� :: �ﰢ��" << endl;
				cout << "ù��° �� ���� ::" << a << endl;
				cout << "�ι�° �� ���� ::" << b << endl;
				cout << "����° �� ���� ::" << c << endl;
				shape->getinfo();
			}
			else
			{
				cout << "�ﰢ���� �ƴմϴ�" << endl;;
				system("pause");
			}
			}
		else if (ipt == 4) //���ﰢ��
		{
			float side;
			cout << "���� ���� :: ���ﰢ��" << endl;
			cout << "-----------------------------" << endl;
			cout << "�� ���� ���� �Է� ::"; cin >> side; cout << endl;
			shape = new C_EqTry(side);

			system("cls");
			cout << "���� ���� :: ���ﰢ��" << endl;
			cout << "�� ���� ���� ::" << side << endl;
			shape->getinfo();

		}
		else if (ipt == 5) //��
		{
			float r;
			cout << "���� ���� :: ��" << endl;
			cout << "-----------------------------" << endl;
			cout << "�� ���� �Է� ::"; cin >> r; cout << endl;
			shape = new C_Cir(r);

			system("cls");
			cout << "���� ���� :: ��" << endl;
			cout << "������ ���� ::" << r << endl;
			shape->getinfo();
		}
		else if (ipt == 0) //����
		{
			system("pause");
			break;
		}
		else
			cout << "�߸��� �Է��Դϴ�." << endl;
		
	}
	
}

bool C_App::TryisPossible(float a, float b, float c) //�ﰢ�� ���� �Ǻ� �Լ�
{
	if (max(a, b) == a && max(a,c) ==a) //a�� ���� ũ��
	{
		if (a < b + c)
			return true;
		else
			return false;
	}
	else if (max(a, b) == b && max(b, c) == b) //b�� ���� ũ��
	{
		if (b < a + c)
			return true;
		else
			return false;
	}
	else if (max(a, c) == c && max(b, c) == c) //c�� ���� ũ��
	{
		if (c < a + b)
			return true;
		else
			return false;
	}

}
