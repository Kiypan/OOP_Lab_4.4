#pragma once
#include <iostream>

class Array abstract
{
protected:
	int* _set = nullptr;
	unsigned int _size = 0;
	void AddItem(const int& val);
public:

	bool HasItem(const int& val) const;
	const int* GetSet() const;
	unsigned int GetSize() const;
	~Array();

	virtual Array* Add(Array* r) = 0;
	virtual float Foreach(const unsigned int& index) = 0;

	virtual std::ostream& Print(std::ostream& out) const = 0;
	virtual std::istream& Insert(std::istream& in) = 0;
};

