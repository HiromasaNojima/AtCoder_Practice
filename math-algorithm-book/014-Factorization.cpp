#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool first = true;

bool isPrime(long long num) {
  for (long long i = 2; i * i <= num; i++) {
    if (num % i == 0) return false;
  }

  return true;
}

void print(long long num) {
  if (first) {
    cout << num;
    first = false;
  } else {
    cout << " " << num;
  }
}

int main() {
    long long n;
    cin >> n;
    
    while(true) {
      for (long long i = 2; i * i <= n; i++) {
        if (isPrime(i) && n % i == 0) {
          print(i);
          n /= i;
          break;
        }
      }

      if (isPrime(n)) {
        print(n);
        break;
      } 
    }
    return 0;
}

