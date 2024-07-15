/*
euler061
sidb95
bhatoresiddharth@gmail.com
15 July 2024
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector <vector <int>> powerSet(vector <vector <int>>& V1, int n, int i);

vector <int> S = {3, 4, 5, 6, 7, 8};

int holdsCondition(vector <vector <int>> V1) {
    int size1 = V1.size();
    for (int i = 0; i < size1; i += 1) {
        if (isTriangle(V1[i])) {
            for (int j = 0; j < size1 && j != i; j += 1) {
                if (isSquare(V1[j])) {
                    for (int k = 0; k < size1 && k != i && k != j; k += 1) {
                        if (isPentagon(V1[k])) {
                            return (V1[i] + V1[j] + V1[k]);
                        }
                    }
                }
            }
        }
    }
}

vector <vector <int>> makeTriplets(vector <int> V1, vector <vector <int>> V) {
    vector <vector <int>> V4;
    for (int i = 0; i < 4; i += 1) {
        vector <int> V3;
        V3.push_back((V1[i]));
        V4.push_back(V3);
    }
    V4 = powerSet(V4, 2, 1);
    vector <vector <int>> V5 = V4;
    for (int i = 0; i < V1.size(); i += 1) {
        vector <int> triplet = {};
        for (int j = 0; j < V4.size(); j += 1) {
            triplet.push_back()
        }
    }
}

vector <vector <int>> powerSet(vector <vector <int>>& V1, int n, int i) {
    if (i == n) {
        return V1;
    }
    else {
        int size1 = V1.size();
        vector <vector <int>> V = V1;
        for (int j = 0; j < S.size(); j += 1) {
            for (int k = 0; k < size1; k += 1) {
                V1[k].push_back(S[j]);
            }
        }
        return powerSet(V1, n, i + 1);
    }
}

int main() {
    int T;
    vector <int> V1;
    cin >> T;
    for (int t = 0; t < T; t += 1) {
        int TEMP;
        cin >> TEMP;
        V1.push_back(TEMP);
    }
    vector <vector <int>> V2;
    for (int i = 0; i < T; i += 1) {
        vector <int> V3;
        V3.push_back(V1[i]);
        V2.push_back(V3);
    }
    V2 = powerSet(V2, V2.size(), 1);
    vector <vector <int>> V;
    vector <vector <int>> V6;
    V6 = makeTriplets(V2, V6);
    return 0;
}
