// Write overloaded functions to convert an int to a string and to convert a float to a string

#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

string convert(int&);
string convert(float&);

int main()
{
    int x{10};
    float y{20.5};

    cout << "Before conversion:" << endl;
    cout << "Type of x: " << typeid(x).name() << endl;
    cout << "Type of y: " << typeid(y).name() << endl << endl;

    cout << "After conversion:" << endl;
    cout << "Type of x: " << typeid(convert(x)).name() << endl;
    cout << "Type of y: " << typeid(convert(y)).name() << endl;
    return 0;
}

string convert(int &a) {
    return to_string(a);
}

string convert(float &b) {
    return to_string(b);
}
