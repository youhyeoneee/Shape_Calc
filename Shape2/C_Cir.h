#pragma once
#include "C_Shape.h"
class C_Cir :
	public C_Shape
{
private:
	float r;

public:
	C_Cir();
	C_Cir(float r)
	{
		this->r = r;
		calc_Area();
		calc_Circum();
	};
	~C_Cir();

	void virtual calc_Area()//���� ���
	{
		this->Area = PI*r*r;
	}
	void virtual calc_Circum()//�ѷ� ���
	{
		this->Circum = PI*r* 2;
	}

};

