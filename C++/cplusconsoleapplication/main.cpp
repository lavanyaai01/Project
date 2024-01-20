/*#include <iostream>

using namespace std;
class Addition
{
public:
    Addition ()
    {
    int a,b,Total;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "\n Enter the value of b:";
    cin >> b;
    Total = a + b;
    cout << "\nThe value is:" << Total;
    }

    void add ()
    {
        cout << "\nExample of Addition";
    }
};

int main()
{
    Addition a;
    a.add ();
    return 0;
}*/





#include<iostream>
using namespace std;
class Datatypes
{
public:

        void Types (int i)
        {
            cout << "The interger value is:" << i;
        }

        void Types (double k)
        {
            cout << "\nThe double value is:" << k;
        }


};
int main ()
{
    Datatypes d;
    d.Types (4);

    d.Types (2.504);
    return 0;
}
