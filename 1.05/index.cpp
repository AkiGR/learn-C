#include <bits/stdc++.h>
using namespace std;

int main() {
  int S;
  cin >> S;
  cout << S%10 + (S/10)%10 + (S/100)%10 << endl;
}
