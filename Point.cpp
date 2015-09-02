#include "Point.h"

Point::Point()
{
}

Point::Point(unsigned int CoordXInit, unsigned int CoordYInit, unsigned int CoordZInit) :
	CoordX(CoordXInit),
	CoordY(CoordYInit),
	CoordZ(CoordZInit),
	DebrisPresents(false)
{
}

Point::Point(unsigned int CoordXInit, unsigned int CoordYInit, unsigned int CoordZInit, bool DebrisPresentInit) :
	CoordX(CoordXInit),
	CoordY(CoordYInit),
	CoordZ(CoordZInit),
	DebrisPresents(DebrisPresentInit)
{
}

Point::~Point()
{
}

unsigned int Point::GetCoordX()
{
	return CoordX;
}

unsigned int Point::GetCoordY()
{
	return CoordY;
}

unsigned int Point::GetCoordZ()
{
	return CoordZ;
}

bool Point::GetDebrisPresents()
{
	return DebrisPresents;
}

void Point::SetCoordX(unsigned int NewCoordX)
{
	CoordX = NewCoordX;
}

void Point::SetCoordY(unsigned int NewCoordY)
{
	CoordY = NewCoordY;
}

void Point::SetCoordZ(unsigned int NewCoordZ)
{
	CoordZ = NewCoordZ;
}

void Point::SetDebrisPresents(bool NewDebrisPresents)
{
	DebrisPresents = NewDebrisPresents;
}