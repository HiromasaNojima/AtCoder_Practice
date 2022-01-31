#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> vec(n);
  rep(i, n) cin >> vec[i];
  priority_queue<int, vector<int>, greater<int>> q;
  rep(i, k) q.push(vec[i]);

  cout << q.top() << endl;
  for(int i = k; i < n; i++) {
    if(q.top() < vec[i]) {
      q.pop();
      q.push(vec[i]);
    }

    cout << q.top() << endl;
  }

  return 0;
}