/*#include <iostream>

using namespace std;
class accessspecifierdemo
{
private:
    int b=10;
protected:
    int d=100;

public:
    int a,c,x;
    void printb()
    {
        c=b;
        cout << c;
        x=d;
        cout << x;
    }
};

int main()
{
    accessspecifierdemo as;
    as.a=25;
    cout << as.a;
    as.printb();
    return 0;
}*/






#include<iostream>
using namespace std;
class salaryprint
{
private:
    int salary;
public:
    string empname;
    void setsalary (int s)
    {
        salary=s;
    }
    int getsalary ()
    {
        return salary;
    }
    int getsalaryprint ()
    {
        cout << salary;
    }
    void getsalaryprint1 ()
    {
        cout << salary;
    }
};
int main ()
{
    salaryprint sp;
    sp.setsalary(50);
    cout << sp.getsalary();
    sp.getsalaryprint();
    sp.getsalaryprint1();
    if (50==50)
    {
        cout << "\nIts a return type";
    }
    return 0;
}
