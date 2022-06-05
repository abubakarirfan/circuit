#include <iostream>

#include "PassiveResistor.h"

using namespace std;

PassiveResistor::PassiveResistor(double aBaseValue)  : ResistorBase(aBaseValue) {}

bool PassiveResistor::mustScale(double aValue) const 
{
	return aValue >= 1000.0;
}

const double PassiveResistor::getMultiplier() const
{
	return 0.001;
}

const std::string PassiveResistor::getMajorUnit() const
{
	return "Ohm";
}

const std::string PassiveResistor::getMinorUnits() const
{
	return "OkM";
}


double PassiveResistor::getReactance(double aFrequency) const
{
	return getBaseValue();
}