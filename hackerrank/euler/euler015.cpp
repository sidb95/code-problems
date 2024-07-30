/*
euler015
bhatoresiddharth@gmail.com
sidb95
25 May, 30 July 2024
*/

#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string, int> S1;
int SET_INT = 1000000007;
int numWays;

// recursive solution
int calcAnswer(short int n, short int m, int i, int j) {
    int a, b;
    //
    if ((i == n) && (j == m)) {
        S1[to_string(n) + " " + to_string(m)] = numWays + 1;
        return numWays + 1;
    }
    if ((i >= n) && (j >= m)) {
        S1[to_string(i) + " " + to_string(j)] = numWays;
        return numWays;
    }
    else if (i > n) {
        return numWays;
    }
    else if (i == n) {
        return numWays + 1;
    }
    else if (j > m) {
        return numWays;
    }
    else if (j == m) {
        return numWays + 1;
    }
    else {
        unordered_map < string, int >::iterator itr1;
        itr1 = S1.find(to_string(i + 1) + " " + to_string(j));
        if (itr1 != S1.end()) {
            a = itr1->second;
        }
        else {
            a = calcAnswer(n, m, i + 1, j);
            S1[to_string(i + 1) + " " + to_string(j)] = a;
        }
        itr1 = S1.find(to_string(i) + " " + to_string(j+1));
        if (itr1 != S1.end()) {
            b = itr1->second;
        }
        else {
            b = calcAnswer(n, m, i, j + 1);
            S1[to_string(i) + " " + to_string(j + 1)] = b;

        }        
        return (((a) % (SET_INT)) + ((b) % SET_INT)) % SET_INT ;
    }
}

int main() {
    int T, t;
    cin >> T;
    for (int i = 1; i < 500; i++) {
        S1[to_string(i) + " " + to_string(1)] = (i + 1);
    }
    //
    for (int j = 1; j < 500; j++) {
        S1[to_string(1) + " " + to_string(j)] = (j + 1);
    }
    for (t = 0; t < T; t++) {
        S1.clear();
        int N, M;
        cin >> N >> M;
        numWays = 0;
        //
        //
        int answer = calcAnswer(N, M, 0, 0);
        S1[to_string(N) + " " + to_string(M)] = answer;
        cout << answer << endl;
    }
    return 0;
}
