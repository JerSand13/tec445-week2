#include <iostream>
#include <vector>
#include <string>
using namespace std;


int
main ()
{

  int num;

  cout << "Enter a number between 1 and 20 inclusive!" << endl;
  cin >> num;

  if (num == 13) {
    cout << "You guess the magic number" << endl;
  }

  else if (num < 13) {
    cout << "your guess is too low" << endl;
  }

  else if (num > 13) {
    cout << "your guess is too high" << endl;
  }

  return 0;
}
