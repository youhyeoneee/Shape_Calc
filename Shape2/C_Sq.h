#pragma once
#include "C_Shape.h"
class C_Sq :
	public C_Shape
{
private:
	float side;

public:
	C_Sq();
	C_Sq(float side)
	{
		this->side = side;
		calc_Area();
		calc_Circum();
	};
	~C_Sq();

	void virtual calc_Area()//���� ���
	{
		this->Area = side * side;
	}
	void virtual calc_Circum()//�ѷ� ���
	{
		this->Circum = side * 4;

	}
};

