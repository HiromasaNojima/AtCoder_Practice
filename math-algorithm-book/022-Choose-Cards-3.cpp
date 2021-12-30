#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int n;
  cin >> n;
  vector<long long> nums(100100, 0);
  rep (i, n) {
    long long num;
    cin >> num;
    nums[num]++;
  }

  long long ans = 0;
  for (int i = 1; i <= 50000; i++) {
    if (i == 50000) {
      ans += (nums[i] * (nums[i] - 1)) / 2;
      break;
    }
    ans += nums[i] * nums[100000 - i];
  }

  cout << ans << endl; 
  return 0;
}