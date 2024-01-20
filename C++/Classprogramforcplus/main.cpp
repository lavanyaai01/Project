#include <iostream>

using namespace std;
class MyFirstClass
{
public:
    float Division ();
    void Modulus ();

    int Addition ()
{
    int a,b;
    cout << "\n ADDITION";
    cout << "\nEnter the value a:";
    cin >> a;
    cout << "\nEnter the value b:";
    cin >> b;
    cout << "\nAddition value is:";
    cout << (a+b);
    cout <<"\n";
    return 0;
}
int Subtraction ()
{
    int a,b;
    cout << "\n SUBTRACTION";
    cout << "\nEnter the value a:";
    cin >> a;
    cout << "\nEnter the value b:";
    cin >> b;
    cout << "\nSubtracted value is:";
    cout << (a-b);
    cout <<"\n";
    return 0;
}
int Multiplication ()
{
    int a,b;
    cout <<" MULTIPLICATION\n";
    cout << "Enter the value a:";
    cin >> a;
    cout << "\nEnter the value b:";
    cin >> b;
    cout << "\nMultiplication value is:";
    cout << (a*b);
    cout <<"\n";
    return 0;
}

};
float MyFirstClass :: Division ()
{
    int a,b;
    cout << " DIVISION \n";
    cout << "\n Enter the value a:";
    cin >> a;
    cout << "\n Enter the value b:";
    cin >> b;
    cout << "\n Divided value is:";
    cout << (a/b);
}
void MyFirstClass :: Modulus ()
{
    int a,b;
    cout << "\n MODULUS \n";
    cout << "Enter the value a:";
    cin >> a;
    cout << "\n Enter the value b:";
    cin >> b;
    cout << "\n Modulus value is:";
    cout << (a%b);
}
int Increment ()
{
    int a;
    cout << "\n INCREMENT\n";
    cout << "Enter the value of a:";
    cin >> a;
    for (a;a<10;a++)
    {
          cout << "\n Increment value is:" << a ;
    }
    return 0;
}
int Greater ()
{
    int a,b;
    cout << "\n GREATER OR LESS THAN\n";
    cout << "\n Enter the value of a:";
    cin >> a;
    cout << "\n Enter the value of b:";
    cin >>b;
    if (a>b)
    {
        cout << "\n a is greater than b";
    }
    else if (a<b)
    {
        cout << "\n a is less than b";
    }
    return 0;
}
int Decrement ()
{
    int a;
    cout << "\n DECREMENT \n";
    cout << "Enter the value of a:";
    cin >> a;
    for (a;a>10;a--)
    {
        cout << "\n Decrement value is:" << a;
    }
    return 0;
}
int main()
{
    MyFirstClass MFC,MFC1;
    MFC.Addition();
    MFC.Subtraction();
    MFC.Multiplication();
    MFC.Division();
    MFC.Modulus ();
    Increment ();
    Greater ();
    Decrement ();
    return 0;
}
