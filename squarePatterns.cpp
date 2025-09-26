#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter your number : ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << j << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    char ch = 'A';
    for (int j = 0; j < n; j++) {
      cout << ch;
      ch = ch + 1;
    }
    cout << endl;
  }

  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << num << " ";
      num = num + 1;
    }
    cout << endl;
  }

  return 0;
}