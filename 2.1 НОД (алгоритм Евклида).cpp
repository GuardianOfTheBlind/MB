// Наибольший общий делитель
// цикл

#include <iostream>


unsigned gcd(unsigned a, unsigned b);

int main()
{
	unsigned value1, value2, result;

	std::cout << "Input two values: ";
	std::cin >> value1 >> value2;

	result = gcd(value1, value2);

	std::cout << "GCD(" << value1 << ", " << value2 << ") = " << result << std::endl;
	return 0;
}

unsigned gcd(unsigned a, unsigned b) {
	unsigned c;

	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

