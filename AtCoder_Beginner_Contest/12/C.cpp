#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int origin = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            origin += i * j;
        }
    }
     
    int diff = origin - n;

    queue<pair<int, int>> answer;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i * j == diff) {
                answer.push(make_pair(i,j));
                break;
            }
        }
    }

    while (!answer.empty()) {
        cout << answer.front().first << " x " << answer.front().second << endl;
        answer.pop();
    }

    return 0;
}