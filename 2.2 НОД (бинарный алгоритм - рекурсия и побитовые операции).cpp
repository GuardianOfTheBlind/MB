// Наибольший общий делитель - бинарный алгоритм
// рекурсия

/*
НОД(0, n) = n; НОД(m, 0) = m; НОД(m, m) = m;
НОД(1, n) = 1; НОД(m, 1) = 1;
Если m, n чётные, то НОД(m, n) = 2 * НОД(m / 2, n / 2);
Если m чётное, n нечётное, то НОД(m, n) = НОД(m / 2, n);
Если n чётное, m нечётное, то НОД(m, n) = НОД(m, n / 2);
Если m, n нечётные и n > m, то НОД(m, n) = НОД((n - m) / 2, m);
Если m, n нечётные и n < m, то НОД(m, n) = НОД((m - n) / 2, n);
*/

#include <iostream>


unsigned bingcd(const unsigned a, const unsigned b);

int main()
{
	unsigned value1, value2, result;

	std::cout << "Input two values: ";
	std::cin >> value1 >> value2;

	result = bingcd(value1, value2);

	std::cout << "GCD(" << value1 << ", " << value2 << ") = " << result << std::endl;
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
