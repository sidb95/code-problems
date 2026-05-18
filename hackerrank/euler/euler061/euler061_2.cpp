#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

vector <vector <int>> powerSet(vector <vector <int>>& V1, int n, int i);
void isTriangle();
void isSquare();
void isPentagon();

vector <int> S = {3, 4, 5, 6, 7, 8};
set <long long int> S1 = {};
set <long long int> S2 = {};
set <long long int> S3 = {};
set <long long int> S4 = {};

void isTriangle() {
    for (int i = 0; i < 100000; i += 1) {
        S2.insert(((i) * (i + 1)) / 2);
    }
}

void isSquare() {
    for (int i = 0; i < 100000; i += 1) {
        S3.insert(i * i);
    }
}

void isPentagon(vector<int> V) {
    for (int i = 0; i < 100000; i += 1) {
        S4.insert((i * (3 * i - 1) / 2));
    }
}

void makeTriplets(vector <int> V1, vector <vector <int>> V) {
    vector <vector <int>> V4, V5;
    for (int i = 0; i < 4; i += 1) {
        vector <int> V3;
        V3.push_back((V1[i]));
        V4.push_back(V3);
        V5.push_back(V3);
    }
    V4 = powerSet(V4, 2, 1);
    V5 = powerSet(V5, 4, 1);
    for (int i = 0; i < V5.size(); i += 1) {
        vector <vector <int>> triplet = {};
        if (S4.find(accumulate(V5[i].begin(), V5[i].end(), 0)) != S4.end()) {
            triplet.push_back(V5[i]);
            vector <int> t1 = {}, t2 = {};
            t2.push_back(V5[i][2]);
            t2.push_back(V5[i][3]);
            for (int j = 0; j < V4.size(); j += 1) {
                t2.insert(t2.end(), V4[j].begin(), V4[j].end());
                if (S2.find(accumulate(t2.begin(), t2.end(), 0)) != S2.end()) {
                    triplet.push_back(t2);
                    for (int k = 0; k < V4.size(); k += 1) {
                        t1.insert(t1.end(), V4[k].begin(), V4[k].end());
                        t1.push_back(V5[i][0]);
                        t1.push_back(V5[i][1]);
                    }
                    if (S3.find(accumulate(t2.begin(), t2.end(), 0)) != S3.end()) {
                        triplet.push_back(t1);
                        int sum = 0;
                        for (int k = 0; k < triplet.size(); k += 1) {
                            sum += std::accumulate(triplet[k].begin(), triplet[k].end(), 0);
                        }
                        S1.insert(sum);
                    }
                    
                }
            }
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
    V6 = makeTriplets(V1, V6);
    set <int>::iterator itr;
    for (itr = V6.begin(); itr != V6.begin(); itr++) {
        cout << *(itr) << ' ';
    }
    cout << endl;
    return 0;
}
