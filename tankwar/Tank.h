#include "pch.h"
#ifndef _TANK_H_
#define _TANK_H_

#include "Graphic.h"

enum Dir{UP,DOWN,LEFT,RIGHT};

class Tank
{
public:
	virtual void Display() = 0;
	virtual void Move() = 0;
protected:
	int m_x;
	int m_y;
	COLORREF m_color;

	Dir m_dir;
	int m_step;
};

#endif // !_TANK_H_

