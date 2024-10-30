#include "Span.hpp"

Span::~Span()
{
	// std::cout << "Destructor called" << std::endl;
}
Span::Span(const Span&other)
{
	_tab = other._tab;
	_N = other._N;
	_index = other._index;
	// std::cout << "Recopy constructor called" << std::endl;
}
Span& Span::operator=(const Span &other)
{
	_tab = other._tab;
	_N = other._N;
	_index = other._index;
	// std::cout << "Assignment operator called" << std::endl;
	return *this;
}


Span::Span(unsigned int N)
{
	_N = N;
	_index = 0;
}

void Span::addNumber(int n)
{
	// std::cout << "index : " << _index << std::endl;
	// std::cout << "max : " << _N << std::endl;
	if (_index == _N)
		throw std::overflow_error("Unable to add other elements");
	_tab.push_back(n);
	_index++;
}

int Span::shortestSpan()
{
	if (_index == 0 || _index == 1) {
		throw Span::NotEnoughElement();
	}
	std::sort(_tab.begin(), _tab.end());

	int min = _tab[1] - _tab[0];
	for (size_t i = 1; i < _tab.size(); ++i) {
        if (min > _tab[i] - _tab[i - 1])
			min = _tab[i] - _tab[i - 1];
    }
	return min;
}
int Span::longestSpan()
{
	if (_index == 0 || _index == 1) {
		throw Span::NotEnoughElement();
	}
	std::sort(_tab.begin(), _tab.end());
	return (_tab.back() - _tab.front());
}