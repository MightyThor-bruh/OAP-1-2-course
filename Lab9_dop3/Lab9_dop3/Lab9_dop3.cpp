﻿// Lab9_dop3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{  
    setlocale(LC_ALL, "Russian");
    int a[10], i, kol = 1, maxkol = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Введите a[" << i << "]: ";
        cin >> a[i];
    }
    for (i = 0; i < 10 - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            kol++;
            if (kol > maxkol)
                maxkol = kol;
        }
        else kol = 1;
    }
    cout << " Hаибольшее число подряд идущих одинаковых элементов= "<< maxkol;
    return 0;
}

// Найти в массиве наибольшее число подряд идущих одинаковых элементов.

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.