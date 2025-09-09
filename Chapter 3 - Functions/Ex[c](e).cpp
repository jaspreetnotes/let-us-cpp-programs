// Write overloaded functions to convert a string to an int and to convert a string to a float

#include <iostream>
#include <string>
using namespace std;

int convert(string s);
float convert(string s, float dummy);

int main()
{
    string s1 = "45";
    string s2 = "45.67";

    int i = convert(s1);
    float f = convert(s2, 0.0f); // dummy argument is passed for overloading

    cout << "String " << s1 << " is converted to int: " << i << endl;
    cout << "String " << s2 << " is converted to float: " << f << endl;

    return 0;
}

int convert(string s) {
    return stoi(s);  // converting string to integer
}

float convert(string s, float dummy) {
    return stof(s);  // converting string to float
}
