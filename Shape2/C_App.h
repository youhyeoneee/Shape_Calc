#pragma once
#include "C_Cir.h"
#include "C_Rect.h"
#include "C_Try.h"
#include "C_Shape.h"
#include "C_EqTry.h"
#include "C_Sq.h"
#include <algorithm>



class C_App
{
public:
	C_App();
	~C_App() 
	{
		delete shape;
	};
	void run(); 
	bool TryisPossible(float a, float b, float c); //�ﰢ�� �������� �Ǻ��ϴ� �Լ�

private:
	C_Shape * shape;
};

