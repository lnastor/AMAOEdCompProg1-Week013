// QUESTION #3

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "_pause.h"

using namespace std;

string ptr (string x) {
  string *y = &x;
  *y = "This is it!";
  return x;
}

int main() {

  string x;

  cout << ptr(x) << endl;

cout << "\n\n";
system ("pause");
return EXIT_SUCCESS;

}