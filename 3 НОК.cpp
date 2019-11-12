// через НОД
// НОК = |a * b| / gcd(a, b)

#include <iostream>
#include <cmath>

unsigned bingcd(const unsigned a, const unsigned b);
unsigned lcm(const int a, const int b);


int main()
{
	int value1, value2, result;

	std::cout << "Input two values: ";
	std::cin >> value1 >> value2;

	result = lcm(value1, value2);

	std::cout << "LCM(" << value1 << ", " << value2 << ") = " << result << std::endl;
	return 0;

}


unsigned bingcd(const unsigned a, const unsigned b) {
	if (a == 0 || b == 0 || a == b)
		return (a > b) ? a : b;
	if (a == 1 || b == 1)
		return 1;

	if (~a & 1 && ~b & 1)
		return bingcd(a >> 1, b >> 1) << 1;
	if (~a & 1 && b & 1)
		return bingcd(a >> 1, b);
	if (~b & 1 && a & 1)
		return bingcd(a, b >> 1);
	if (a & 1 && b & 1 && a > b)
		return bingcd((a - b) >> 1, b);


	return bingcd((b - a) >> 1, a);

}

unsigned lcm(const int a, const int b)
{
	unsigned val1 = std::abs(a);
	unsigned val2 = std::abs(b);

	return (a * b) / bingcd(val1, val2);
}
