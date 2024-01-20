#include <iostream>

using namespace std;

int main()
{
    int value1,value2,Total,op;
    cout << "Enter value1:";
    cin >> value1;
    cout << "\nEnter value2:";
    cin >> value2;
    cout <<"\nEnter Operator:";
    cin >>op;
    switch (op)
    {
    case 1:
        Total=value1+value2;
        cout<< "\n  Added value of value1 & value2:" <<(Total);
        break;
    case 2:
        Total=value1-value2;
        cout << "\n Subtracted value of value1 & value2:" <<(Total);
        break;
    case 3:
        Total=value1*value2;
        cout <<"\n Multiplied value of value1 & value2:" <<(Total);
        break;
    case 4:
        Total=value1/value2;
        cout <<"\n Divided value of value1 & value2:" <<(Total);
        break;
    case 5:
        Total=value1%value2;
        cout <<"\n Modulus value of value1 & value2:" <<(Total);
        break;
    case 6:
        Total=value1++;
        cout <<"\nIncrement value is:\n" << Total <<"\n" << value1;
        break;
    case 7:
        Total= value1--;
        cout <<"\nThe value is:" << Total;
        cout << "\nDecrement value is:" << value1;
        break;
    }
    return 0;
}
