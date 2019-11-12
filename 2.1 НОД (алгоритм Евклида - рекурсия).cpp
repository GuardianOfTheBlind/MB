// Наибольший общий делитель
// рекурсия

#include <iostream>


unsigned gcd(const unsigned a, const unsigned b);

int main()
{
	unsigned value1, value2, result;

	std::cout << "Input two values: ";
	std::cin >> value1 >> value2;

	result = gcd(value1, value2);

	std::cout << "GCD(" << value1 << ", " << value2 << ") = " << result << std::endl;
	return 0;
}

unsigned gcd(const unsigned a, const unsigned b) {
	if (b == 0)
		return a;
	else
		return gcd(b, a % b);
}
