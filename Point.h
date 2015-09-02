#pragma once


class Point
{
public:
	Point();
	Point(unsigned int CoordX, unsigned int CoordY, unsigned int CoordZ);
	Point(unsigned int CoordX, unsigned int CoordY, unsigned int CoordZ, bool DebrisPresents);
	~Point();
	unsigned int GetCoordX();
	unsigned int GetCoordY();
	unsigned int GetCoordZ();
	bool GetDebrisPresents();
	void SetCoordX(unsigned int NewCoordX);
	void SetCoordY(unsigned int NewCoordY);
	void SetCoordZ(unsigned int NewCoordZ);
	void SetDebrisPresents(bool NewDebrisPresents);
protected:
	unsigned int CoordX;
	unsigned int CoordY;
	unsigned int CoordZ;
	bool DebrisPresents;
};

