#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  long long a=0, b=0, c=0, d=0;
  rep(i, n) {
    int price;
    cin >> price;
    if (price == 100) {
      a++;
    } else if (price == 200) {
      b++;
    } else if (price == 300) {
      c++;
    } else if (price == 400) {
      d++;
    }
  }

  cout << a * d + b * c << endl;
  return 0;
}