// QUESTION #2

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "_pause.h"

using namespace std;

int main() {

    float a;
    float &refa = a;

    cout << "The value of 1st variable is: " << a <<  "." << endl;
    cout << "The address of 1st variable is: " << &a << "." << endl;
    cout << "The value of the another variable is: " << refa << "." << endl;
    cout << "The address of the another variable is: " << &refa << "." << endl;

    cout << "\n\n";
    system ("pause");
    return EXIT_SUCCESS;

}