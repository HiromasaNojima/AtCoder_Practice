#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n, w;
  cin >> n >> w;

  vector<pair<long long, long long>> cheese(n);
  int maxw = 0;
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    cheese[i] = make_pair(a, b);
    maxw += b;
  }
  maxw = min(w, maxw);
  sort(cheese.rbegin(), cheese.rend());
  long long ans = 0;
  long long now;
  for(pair<long long, long long> che : cheese) {
    if(maxw - che.second <= 0) {
      rep(i, maxw) {
        ans+= che.first;
      }
      break;
    } else {
      maxw -= che.second;
      ans += che.first * che.second;
    }
  }

  cout << ans << endl;
  return 0;
}