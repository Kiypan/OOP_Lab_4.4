#pragma once
#include "CArray.h"
class OrArray :public Array
{
public:
	OrArray(unsigned int count = 0, ...);

	Array* Add(Array* r) override;
	float Foreach(const unsigned int& index) override;

	std::ostream& Print(std::ostream& out) const override;
	std::istream& Insert(std::istream& in) override;
};

