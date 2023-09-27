#include <iostream>
using namespace std;


bool is_numeric(string input) {
  for (char c : input) {
    if (!isdigit(c)) {
      return false;
    }
  }
  return true;
}

int main() {
  string input;
  cout << "Enter something: ";
  cin >> input;

  if (is_numeric(input)) {
    cout << "Numeric" << endl;
  } else {
    cout << "Not numeric" << endl;
  }

  return 0;
}