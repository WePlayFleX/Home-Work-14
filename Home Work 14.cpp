#include <iostream>

using namespace std;

const int Month = 12;
int main()
{
    int Month_1, Month_2, Profit_max, Profit_min;
    int aArray[Month];
    cout << "Enter profit for each month " << endl;
    for (int i = 0; i < Month; i++)
    {
        cout << "Month " << i + 1 << " - ";
        cin >> aArray[i];
    }
    cout << "Enter two months to view profit " << endl;
    cin >> Month_1 >> Month_2;
    Profit_max = Profit_min = Month_1 - 1;
    for (int i = Month_1; i < Month_2; i++)
    {
        if (aArray[i] > aArray[Profit_max]) Profit_max = i;
        if (aArray[i] < aArray[Profit_min]) Profit_min = i;
    }
    cout << "Maximum profit - month " << Profit_max + 1 << endl;
    cout << "Minimum profit - month " << Profit_min + 1 << endl;
    system("pause");
    return 0;
}