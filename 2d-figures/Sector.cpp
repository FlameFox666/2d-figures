#include "Sector.h"

namespace Area2D 
{
	Sector::Sector() : degree(0), radian(0.0) {}

	Sector::Sector(double radian) : radian(radian) 
	{
		degree = radianToDegree();
	}

	Sector::Sector(int degree) : degree(degree) 
	{
		radian = degreeToRadian();
	}

	double Sector::getRadian() const
	{
		return radian;
	}

	int Sector::getDegree() const
	{
		return degree;
	}

	double Sector::degreeToRadian() const 
	{
		return degree * (Constant::Numberic::PI / 180.0);
	}

	int Sector::radianToDegree() const 
	{
		return radian * (180.0 / Constant::Numberic::PI);
	}

	void Sector::setMeasure(Measure value)
	{
		measure = value;
	}

	Sector::Measure Sector::getMeasure()
	{
		return measure;
	}
}