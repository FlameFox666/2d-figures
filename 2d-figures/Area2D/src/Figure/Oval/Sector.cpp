#include "Figure/Oval/Sector.h"

using Area2D::Constant::Error;

namespace Area2D 
{
	Sector::Sector() : degree(-1), radian(-1.0) {}

	Sector::Sector(double radian) : radian(radian), degree(-1) 
	{
		if (radian <= 0.0) {
			throw std::invalid_argument(Error::SECTOR_IVALID_ANGLE);
		}
	}

	Sector::Sector(int degree) : degree(degree), radian(-1.0)
	{
		if (degree <= 0) {
			throw std::invalid_argument(Error::SECTOR_IVALID_ANGLE);
		}
	}

	double Sector::getAngle() const
	{
		if (degree > -1)
		{
			return degree;
		}
		else if (radian > -1.0)
		{
			return radian;
		}
		return 0.0;
	}

	void Sector::setAngle(int degree)
	{
		if (degree <= 0) {
			std::cerr << Error::SECTOR_IVALID_ANGLE;
			return;
		}
		this->degree = degree;
		radian = -1.0;
	}

	void Sector::setAngle(double radian)
	{
		if (radian <= 0) {
			std::cerr << Error::SECTOR_IVALID_ANGLE;
			return;
		}
		this->radian = radian;
		degree = -1;
	}
}