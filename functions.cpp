#include "functions.h"

void sortListSTL(list<double> list1, list<double> list2)
{
    //  опирование и сортировка
    list2 = list1;
    list2.sort();  // —ортировка выполн€етс€ непосредственно в списке

    // ¬ывод изначального списка
    cout << "\tL1: ";
    for (double num : list1)
    {
        cout << num << " ";
    }

    // ¬ывод отсортированного списка в пор€дке возрастани€ его значений
    cout << "\n\tL2: ";
    for (double num : list2)
    {
        cout << num << " ";
    }
    cout << endl;
}