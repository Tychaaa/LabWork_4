#include "functions.h"

void sortListSTL(list<double> list1, list<double> list2)
{
    // ����������� � ����������
    list2 = list1;
    list2.sort();  // ���������� ����������� ��������������� � ������

    // ����� ������������ ������
    cout << "\tL1: ";
    for (double num : list1)
    {
        cout << num << " ";
    }

    // ����� ���������������� ������ � ������� ����������� ��� ��������
    cout << "\n\tL2: ";
    for (double num : list2)
    {
        cout << num << " ";
    }
    cout << endl;
}