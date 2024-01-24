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






/*#include<iostream>
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
}*/





#include<iostream>
using namespace std;
class Marklist
{
private:
    int Roll_No;
    string Name;
    int English;
    int Maths;
    int Science;
    int Total;
public:

    struct variables{
    string Roll_No1;
    string Name1;

    };

    void getdetails ()
    {
        cout << "Enter your Roll_No:";
        cin >> Roll_No;
        cout << "Enter your Name:";
        cin >> Name;
    }

    string getdetails1 ()
    {
        variables va;
        cout << "Enter your Roll_No:";
        cin >> va.Roll_No1;
        cout << "Enter your Name:";
        cin >> va.Name1;
        return va;
    }
    string displaydetails ()
    {
         variables va1;




    }
    variables vb;


    /*

    int getRollNo(){
    return Roll_No;
    }
    int getName(){
    return Name;
    }
    void getvalues ()
    {
        cout << "Enter your English Mark:";
        cin >> English;
        cout << "Enter your Maths Mark:";
        cin >> Maths;
        cout << "Enter your Science Mark:";
        cin >> Science;
    }
    void setvalues ()
    {
        Total = (English+Maths+Science);
    }
    void getresult ()
    {
        displaydetails ();
        cout << "\nTotal value is:" << Total;
    }
};

*/

};
int main ()
{
    Marklist m;
   /* m.getdetails ();
    m.getvalues ();
    m.setvalues ();
    m.getresult ();
    */

    m.getdetails1 ();

    cout << m.vb.Roll_No1;
    cout << m.vb.Name1;

    return 0 ;
}
