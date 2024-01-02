// min function

#include <bits/stdc++.h>
using namespace std;

int main() {
  int a = 10, b = 20;
  int answer = min(a, b);

  cout << answer << endl;
}


int main() {
  vector<int> v = {1, 2, 3, 4, 5};
  reverse(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    cout << v.at(i) << endl;
  }
}
