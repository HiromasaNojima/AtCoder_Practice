#include <bits/stdc++.h> 
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    map<string, int> times;
    for (int i = 1; i <= n; i++) {
        string stringi = to_string(i);
        for (int j = 1; j <= n; j++) {
            string stringj = to_string(j);
            int time;
            cin >> time;
            times[stringi + stringj] = time;
        }
    }

    vector<int> cities;
    for (int i = 2; i <= n; i++) {
        cities.push_back(i);
    }

    int answer = 0;
    do {
        int time = 0;
        string pre_city = "1";
        for(int i = 0; i < cities.size(); i++) {
            if (i == cities.size() - 1) {
                time += times[to_string(cities[i]) + "1"];
            } 

            time += times[pre_city + to_string(cities[i])];
            pre_city = to_string(cities[i]);
        }

        if (time == k) {
            answer++;
        }
    } while (next_permutation(cities.begin(), cities.end()));

    cout << answer << endl;
    return 0;
}