#include <iostream>
using namespace std;
unsigned int q = 0, q0, b, sum_q0 = 0;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	cout << "Введите значение: \nb = "; cin >> b;
	cout << "Все меньшие натуральные числа, квадрат суммы цифр которых равен b, представлен ниже: ";

	for (int q = 1; q < b; q++)
	{
		q0 = q;
		while (q0 != 0)
		{
			sum_q0 += q0 % 10;
			q0 /= 10;
		}
		if (pow(sum_q0, 2) == b)
		{
			cout << "\n" << q;
		}
		sum_q0 = 0;
	}
}