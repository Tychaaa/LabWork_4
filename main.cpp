#include <iostream>
#include <list>
#include <algorithm>
#include <Windows.h>

#include "functions.h"

using namespace std;

int main() 
{
    // Устанавливаем русский язык в консоль
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    list<double> L1 = { 3.1, 2.2, 5.5, 1.1, 4.4 };  // Исходный список
    list<double> L2;                                // Целевой список

    cout << "\t~~Сортировка списка STL~~" << endl;
    cout << "---------------------------------------" << endl;
    sortListSTL(L1, L2);
    cout << "---------------------------------------\n\n" << endl;

    return 0;
}
