#include <iostream>

using namespace std;

int main()
{
<<<<<<< HEAD
    int a=5, b=8;
=======
    int a=4, b=8;
>>>>>>> b697fa7156c141125258e5c62382eb8b3e04bf30
    cout << "Value of a:" << a;
    cout << "\nAddress of a:" << &a ;
    cout << "\nValue of b:" << b;
    cout << "\nAddress of b:" << &b ;
    cout << "\nSize of int:" << sizeof (int);
    int *p=&a;
    cout << "\n\nValue of p:" << p;
    cout << "\nAddress of p:" << &p;
    cout << "\nValue stored in the address of p:" << *p;
    int **q=&p;
<<<<<<< HEAD
    cout << "\n\nValue of q:" << q;
    cout << "\nAddress of q:" << &q;
    cout << "\nValue stored in the address of q in the address of p:" << **q;
=======
    cout << "\n\nValue of q:"  << q;
    cout << "\nAddress of q:" << &q;
    cout << "\nValue stored in the address of q to the address of p:" << **q;
>>>>>>> b697fa7156c141125258e5c62382eb8b3e04bf30
    int ***r=&q;
    cout << "\n\nValue of r:" << r;
    cout << "\nAddress of r:" << &r;
    cout << "\nValue stored in the address of r to the address of q in the address of p:" << ***r;
    void *s=&a;
    cout << "\n\nValue of s:" << s;
    cout << "\nAddress of s:" << &s;
<<<<<<< HEAD
    cout << "\nValue stored in the address of the s to the address of r in the address of q in the address of p:" << *(int *)s;
=======
    cout << "\nValue stored in the address of s to the address of r in the address of q to the address of p:" << *(int *)s;
>>>>>>> b697fa7156c141125258e5c62382eb8b3e04bf30
    return 0;
}
