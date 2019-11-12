#include <iostream>
#include <numeric> // for gcd and lcm (only for C++17. Not working in the visual studio!)

int main()
{
	int value1, value2;

	std::cout << "Input two values: ";
	std::cin >> value1 >> value2;

    std::cout << "GCD(" << value1 << ", " << value2 << ") = " << std::gcd(value1, value2) << std::endl;
	std::cout << "LCM(" << value1 << ", " << value2 << ") = " << std::lcm(value1, value2) << std::endl;

	return 0;
}
