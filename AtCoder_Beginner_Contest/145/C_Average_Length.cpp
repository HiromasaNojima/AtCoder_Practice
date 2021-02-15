#include <bits/stdc++.h> 
using namespace std;

long double kaijo(int x) {
    double answer = 1;
    for (int i = 1; i <= x; i++) {
        answer *= i;
    }

    return answer;
}

long double power(int distance) {
    return distance * distance;
}

int main() {
    int x;
    cin >> x;
    vector<pair<int, int>> vec(x + 1);
    for (int i = 1; i < x + 1; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    vector<int> towns(x);
    for (int i = 0; i < x; i++) {
        int town = i + 1;
        towns[i] = town;
    }

    long double all = kaijo(x);
    long double answer = 0;
    do {
        int pre_town = 0;
        for (int town : towns) {
            if (pre_town == 0) {
                pre_town = town;
                continue;
            }

            long double distance_x = power(vec[pre_town].first - vec[town].first);
            long double distance_y = power(vec[pre_town].second - vec[town].second);
            answer += sqrt(distance_x + distance_y) / all;
            pre_town = town;
        }
    } while (next_permutation(towns.begin(), towns.end()));
    
    cout << fixed << setprecision(10) << answer << endl;
    return 0;
}