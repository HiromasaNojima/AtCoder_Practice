#include <bits/stdc++.h> 
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

bool desc_asc(pair<int, int>& left, pair<int, int>& right) {
  if (left.first == right.first) {
    return left.second < right.second;
  } else {
    return left.first > right.first;
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  int n2 = 2 * n;
  vector<vector<char>> v(n2, vector<char>(m));

  rep(i, n2) {
    rep(j, m) {
      cin >> v[i][j];
    }
  }

  vector<pair<int, int>> score(n2);
  rep(i, n2) {
    score[i] = make_pair(0 ,i);
  }

  rep(i, m) {
    for(int j = 0; j < n2; j += 2) {
      char te1 = v[score[j].second][i];
      char te2 = v[score[j + 1].second][i];
      if((te1 == 'G' && te2 == 'C') || (te1 == 'C' && te2 == 'P') || (te1 == 'P' && te2 == 'G')) {
        score[j].first += 1;
      } else if((te2 == 'G' && te1 == 'C') || (te2 == 'C' && te1 == 'P')||(te2 == 'P' && te1 == 'G')) {
        score[j + 1].first += 1;
      }
    }
    sort(score.begin(), score.end(), desc_asc);
  }

  rep(i, n2) {
    cout << score[i].second + 1 << endl;
  }
  
  return 0;
}