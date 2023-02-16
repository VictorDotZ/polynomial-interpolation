#include "CoreFunction.hpp"

#include <cmath>

double F(double x)
{
	return 1 + 2 * x + 3 * std::pow(x, 2) + 4 * std::pow(x, 3) + 5 * std::pow(x, 4);
}