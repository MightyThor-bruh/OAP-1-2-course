﻿// Lab12_dop1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    const int max = 100;
    char s[max], s1[max], A[max];
    setlocale(LC_CTYPE, "Russian");
    cout << "Введите строку: " << endl;
    gets_s(s);
    cout << "Введите окончание: " << endl;
    gets_s(s1);
    int d = 0, b;
    for (int i = 0; i < 10; i++)
    	A[i] = 0;
    int i = 0;
    char *p = s - 1;
    while (d++ < strlen(s))
    {
    	p++;
    	b = 0;
    	i = 0;
    	while (*p != ' ' && *p)
    	{
    		A[i] = *p;
    		i++; // подсчёт символов всего
    		p++;
    		d++;
    	}
    for (int j = i - 1, k = 0; j > 0, k < strlen(s1); j--, k++)
    if (s1[k] == A[j]) // подсчёт количества одинаковых символов
    {
    		b++;
    }
    if (b >= strlen(s1))
    for (int j = 0; j < i; j++)
    	cout << A[j]; 
    cout << " ";
    }
    cout << endl;
    return 0;
}

//1.	В заданной последовательности слов найти все слова, имеющие заданное окончание.
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
