/*
euler018
bhatoresiddharth@gmail.com
sidb95
26 May 2024
*/

#include <vector>
#include <iostream>

using namespace std;    

long long int calcAnswer(vector < vector <long long int> >& V2, 
long long int n, vector<long long int>& V1) {
    long long int answer = 0;
    long long int k;
    long long int r = V2.size();
    for (long long int i = 0; i < r; i += 1) {
        int q = V2[i].size();
        for (long long int j = 0; j < q; j += 1) {
            k = V2[i][j];
            if (j == V1[i]) {
                answer += k;
            }
        }
    }
    return answer;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int n;
        vector< vector< long long int > > V2;
        vector< long long int > VA1;
        cin >> n;
        long long int k;
        for (int i = 1; i <= n; i++) {
            VA1.clear();
            for (int j = 0; j < i; j++) {
                cin >> k;
                VA1.push_back(k);
            }
            V2.push_back(VA1);
        }
        vector <long long int> V1;
        V1.push_back(0);
        V1.push_back(0);
        for (long long int i = 2; i <= n-1; i++) {
            V1.push_back(i - 1);
        }
        cout << calcAnswer(V2, n, V1) << endl;
    }
    return 0;
}
