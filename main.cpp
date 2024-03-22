#include <iostream>
#include <list>
#include <algorithm>
#include <Windows.h>

#include "functions.h"

using namespace std;

int main() 
{
    // ������������� ������� ���� � �������
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    list<double> L1 = { 3.1, 2.2, 5.5, 1.1, 4.4 };  // �������� ������
    list<double> L2;                                // ������� ������

    cout << "\t~~���������� ������ STL~~" << endl;
    cout << "---------------------------------------" << endl;
    sortListSTL(L1, L2);
    cout << "---------------------------------------\n\n" << endl;

    return 0;
}
