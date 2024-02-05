/*#include <iostream>

using namespace std;

namespace student
{
    string Name = "Lavanya";
}
namespace student1
{
    string Name1 = "\nLavanya";
}
using namespace student;
using namespace student1;
int main ()
{
    cout << Name;
    cout << Name1;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main ()
{
    string Name;
    cout << "Enter your Name:";
    cin >> Name;
    cout << Name;
    fflush (stdin);
    cout << "\nEnter your Name:";
    getline (cin,Name);
    cout << Name ;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main ()
{
    string firstname;
    string lastname;
    cout << "Enter your firstname:";
    cin >> firstname;
    cout << "Enter your lastname:";
    cin >> lastname ;
    cout << firstname + "  " + lastname << endl ;
    string fullname = firstname.append (lastname);
    cout << fullname << endl;
    lastname.push_back ('l');
    cout << lastname << endl;
    firstname.push_back ('pp');
    cout <<firstname << endl;
    return 0;
}

fflush(stdin);
cout << fullname.length() << endl;
cout << fullname.size ()  << endl;
return 0;
}*/



#include<iostream>
using namespace std;
namespace number1
{
    int x=5;
    void sample ()
    {
        cout << "  this is sample of number1" << "\n";
    }
}
namespace number2
{
    int x=10;
    void sample ()
    {
        cout << "  this is sample of number2";
    }
}
int main ()
{
    cout << number1::x;
    number1::sample();
    cout << number2::x;
    number2::sample ();
    return 0;
}
