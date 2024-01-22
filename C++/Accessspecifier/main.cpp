#include <iostream>

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
}
