#include "COrArray.h"

OrArray::OrArray(unsigned int count, ...) {
	if (count == 0)
		return;

	_set = new int[_size = count];
	for (size_t i = 0; i < _size; i++)
		_set[i] = (&count + 1)[i];
}

Array* OrArray::Add(Array* r)
{
	OrArray* tmp = new OrArray();
	for (unsigned int i = 0; i < _size; i++)
		tmp->AddItem(_set[i]);

	for (unsigned int i = 0; i < r->GetSize(); i++)
		if (!tmp->HasItem(r->GetSet()[i]))
			tmp->AddItem(r->GetSet()[i]);
	return tmp;
}
float OrArray::Foreach(const unsigned int& index)
{
	return log(_set[index]);
}

std::ostream& OrArray::Print(std::ostream& out) const
{
	for (size_t i = 0; i < _size; i++)
		out << _set[i] << ' ';
	out << std::endl;
	return out;
}
std::istream& OrArray::Insert(std::istream& in)
{
	int tmp;
	char is_cnt;
	do
	{
		std::cout << "Input " << _size + 1 << " item of array: ";
		in >> tmp;

		if (!HasItem(tmp))
			AddItem(tmp);
		else
			std::cout << "This num already in array!" << std::endl;

		std::cout << "continue(y/n): ";
		in >> is_cnt;
	} while (is_cnt != 'n');
	return in;
}
