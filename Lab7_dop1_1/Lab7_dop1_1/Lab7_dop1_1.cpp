﻿// Lab7_dop1_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU");
    int arr[] = { 0 }, a, c_sum = 0, n_sum = 0;
    cout << "Введите количество цифр: ";
    cin >> a;
    for (int i = 0; i < a; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[a];
        if (arr[a] % 2 == 0) {
            c_sum += arr[a];
        }
        else {
            n_sum += arr[a];
        }
    }
    cout << "Сумма всех чётных чисел: " << c_sum << endl;
    cout << "Сумма всех нечётных чисел: " << n_sum << endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
