#include "Calculator.h"
#include <iostream>

Number Calculator::add(Number a, Number b)
{
	std::cout  << a.getValue() << "+" << b.getValue() << std::endl;
	return Number(a.getValue() + b.getValue());
}

Number Calculator::mltp(Number a, Number b)
{
	std::cout << a.getValue() << "*" << b.getValue() << std::endl;
	return  Number(a.getValue() * b.getValue());
}

Number Calculator::divide(Number a, Number b)
{
	std::cout << a.getValue() << ":" << b.getValue() << std::endl;
	return  Number(a.getValue() / b.getValue());
}

Number Calculator::mns(Number a, Number b)
{
	std::cout << a.getValue() << "-" << b.getValue() << std::endl;
	return  Number(a.getValue() - b.getValue());
}