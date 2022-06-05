#define _USE_MATH_DEFINES

#include "Capacitor.h"
#include <cmath>

using namespace std;


bool Capacitor::mustScale(double aValue) const
{
	return aValue < 1.0;
}

const double Capacitor::getMultiplier() const
{
	return 1000.0;
}


const std::string Capacitor::getMajorUnit() const
{
	return "F";
}

const std::string Capacitor::getMinorUnits() const
{
	return "Fmunp";
}

Capacitor::Capacitor(double aBaseValue) : ResistorBase(aBaseValue) {}


double Capacitor::getReactance(double aFrequency) const
{
	return 1.0 / (2.0 * M_PI * aFrequency * getBaseValue());
}




