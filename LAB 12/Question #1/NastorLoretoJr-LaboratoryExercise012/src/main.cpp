// QUESTION #1

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int pr (int b) {
    int *a = &b;
    *a = 27496;
    return b;
}

int main () {

    int i = 654321;

    cout << "The initial value of an integer is: " << i << "." <<endl;
    cout << "The final value of an integer is: " << pr (i) << "." <<endl;

    cout << "\n\n";
    system ("pause");
    return EXIT_SUCCESS;

}