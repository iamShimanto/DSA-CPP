#include <iostream>
using namespace std;

int main() {
  int n = 4;

  for (int i = 0; i < n; i++) {
    int num = 1;
    for (int j = 0; j < i + 1; j++) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << "* ";
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << i + 1;
    }
    cout << endl;
  }

  char ch = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cout << ch << " ";
    }
    ch = ch + 1;
    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << j << " ";
    }
    cout << endl;
  }

  int num = 1;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << num << " ";
      num++;
    }
    cout << endl;
  }

  char cha = 'A';
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j > 0; j--) {
      cout << cha << " ";
      cha = cha + 1;
    }
    cout << endl;
  }

  return 0;
}