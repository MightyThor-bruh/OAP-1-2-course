﻿// Lab15_dop3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

float func(float x) // функция и ее производная 
{ 
 return 2 - pow(x, 2) + x; 
} 
float f1(float x) 
{ 
 return 1 - 2 * x; 
} 

void main() // 3 метод 
{ 
 float e = 1e-4, a = 1, b = 3, z=0, h, x=0, x1=0; 
 if (func(a) * f1(a) > 0) 
 { 
 x1 = a; 
 } 
 else 
 { 
 x1 = b; 
 } 
 while ((x1 - x) > 2 * e) 
 { 
 x = x1; 
 x1 = x - func(x) / f1(x); 
 } 
 printf("x1 = %f\n", x1); 
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
