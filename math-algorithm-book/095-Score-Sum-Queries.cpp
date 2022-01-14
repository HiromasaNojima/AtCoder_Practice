#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;

  vector<int> one_class(n + 10, 0);
  vector<int> two_class(n + 10, 0);
  for (int i = 1; i <=n; i++) {
    int c, p;
    cin >> c >> p;
    if (c == 1) {
      one_class[i] = one_class[i - 1] + p;
      two_class[i] = two_class[i - 1];
    } else {
      one_class[i] = one_class[i - 1];
      two_class[i] = two_class[i - 1] + p;
    }
  }

  int q;
  cin >> q;
  vector<int> lq(q);
  vector<int> rq(q);
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    --l;
    lq[i] = l;
    rq[i] = r;
  }

  rep(i, q) {
    cout << one_class[rq[i]] - one_class[lq[i]] << " " << two_class[rq[i]] - two_class[lq[i]] << endl;
  }


  return 0;
}