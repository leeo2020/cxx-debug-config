#include <iostream>
#include <vector>
using namespace std;
int main() {
  cout << "Hello Cxx!" << endl;
  vector<int> v;
  int week = 7;
  while (week-- > 0) {
    v.push_back(week);
  }
  for (auto val = v.begin(); val < v.end(); val++) {
    cout << *val << endl;
  }

  for (int c : v) {
    cout << c << endl;
  }
  return 0;
}