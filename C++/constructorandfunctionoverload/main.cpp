#include <iostream>

using namespace std;
class Addition
{
public:

    Addition (double a,double b)
    {
    double c;
    cout << "Enter the value of a:"<< a;
    cout << "\nEnter the value of b:"<< b;
    c=a+b;
    cout <<"\nAddition value is:" << c;
    }
};
class name
{
public:
    void location()
    {
        string name,location;
        cout << "\nEnter your name:";
        cin >> name;
        cout << "Enter your location:";
        cin >> location;
        cout << "The student is:"<< name << " " << location;
        cout << "\nHi " << name << " " << location;
    }
};

int main()
{

    Addition A (2.5,2.25);
    name n;
    n.location();
    return 0;
}
