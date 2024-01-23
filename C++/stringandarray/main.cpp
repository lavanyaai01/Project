/*#include <iostream>

using namespace std;
class stringclass
{
public:
    stringclass ()
    {
        cout << "Enter your name:";
        string name;
        cin >> name;
        cout << "\nHi " << name << " Welcome to string class with constructor ";
    }
};

int main()
{
    stringclass sc;
    return 0;
}
*/





/*#include<iostream>
using namespace std;
class stringclass {
public:
    stringclass ()
    {
        cout << "Enter your name:";
        string name;
        cin >> name;
        cout << "\nHi " << name << " \nWelcome to string class with constructor";
        cout << "\nEnter value for selection:";
        int n;
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Archana welcome to constructor with switch";
            break;
        case 2:
            cout << "Deepa welcome to constructor with switch";
            break;
        case 3:
            cout << "Divya welcome to constructor with switch";
            break;
        }
    }
       stringclass(string a,string b)
        {
            string c;
            c=a+b;
            cout << "\nConcatenated string value is:" << c;
        }

    };
    int main()
    {
    stringclass sc;
    stringclass sc1 ("Lavanya"," Aravind");
    return 0;
    }*/



    #include<iostream>
    using namespace std;
    class functionoverloaddemo
    {
    public:
        int welcomestring ()
        {
            string name;
            cout << "Enter your name:";
            cin >> name;
            cout << "Hi " << name;
        }

    };
    int main()
    {
        functionoverloaddemo fod;
        fod. welcomestring();
        return 0;
    }
