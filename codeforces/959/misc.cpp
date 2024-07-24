#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool FLAG;

class Solution {
public:
    vector <vector <int>> mainM1(vector <vector <int>>& V, int n, int m) {
        if ((n == 1) && (m == 1)) {
            FLAG = true;
            return V;
        }
        for (int i = 0; i < n; i += 1) {
            reverse(V[i].begin(), V[i].end());
        }
        int i = (m / 2);
        int p = 0;
        int q = n - 1;
        if ((m % 2) == 1) {
            while (p < q) {
                int temp = V[p][i];
                V[p][i] = V[q][i];
                V[q][i] = temp;
                p += 1;
                q -= 1;
            }
        }
        int j = (n / 2);
        if ((j % 2) == 1) {
            int temp = V[j][i];
            V[j][i] = V[0][0];
            V[0][0] = temp;
        }
        return V;
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        FLAG = false;
        vector <vector <int>> V;
        int n, m;
        cin >> n >> m;
        //
        for (int i = 0; i < n; i += 1) {
            vector <int> v1 = {};
            for (int j = 0; j < m; j += 1) {
                int temp;
                cin >> temp;
                v1.push_back(temp);
            }
            V.push_back(v1);
        }
        //
        Solution S;
        V = S.mainM1(V, n, m);
        //
        if (FLAG) {
            cout << "-1" << endl;
        }
        else {
            for (int i = 0; i < n; i += 1) {
                for (int j = 0; j < m; j += 1) {
                    if (j == (m - 1)) {
                        cout << endl;
                    }
                    else {
                        cout << V[i][j] << ' ';
                    }
                }
            }
        }
    }
    //
    return 0;
}