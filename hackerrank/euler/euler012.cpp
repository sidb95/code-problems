/*
euler012
bhatoresiddharth@gmail.com
sidb95
25 May 2024
*/

#include <set>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long int calcAnswer(vector<long long int> V1, 
vector< long long int > VS1, long long int n) {
    for (int i = 0; i < VS1.size(); i++) {
        if (VS1[i] > n) {
            return V1[i];
        }
    }
    return 0;
}

int main() {
    long long int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int n;
        cin >> n;
        vector<long long int> V1 = {0};
        vector< long long int > VS1;
        for (long long int i = 1; i <= 1000; i++) {
            V1.push_back(V1[i-1] + i);
        }
        long long int m = V1.size();
        bool FLAG = true;
        for (long long int i = 1; i < m; i++) {
            int count = 0;
            for (long long int j = 1; j <= V1[i]; j++) {
                if ((V1[i] % j) == 0) {
                    count++;
                }
                if (count > n) {
                    cout << V1[i] << endl;
                    FLAG = false;
                    break;
                }
            }
            if (!FLAG) {
                break;
            }
            VS1.push_back(count);
        }
    }
    return 0;
}
