/*
euler024
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string S = "abcdefghijklm";

long long int factorial(int n) {
    int answer = 1;
    for (int i = 2; i <= n; i += 1) {
        answer *= i;
    }
    return answer;
}

string swap(string s, int i, int j) {
    char c = s[i];
    s[i] = s[j];
    s[j] = c;
    return s;
}

string calcAnswerAux(string s, int i, int j) {
    s = swap(s, i, j);
    return s;
}

pair<string, int> calcAnswer(string s, long long int N, int count) {
    int m = S.size();
    long long int num1 = factorial(m);
    //
    bool FLAG1 = true;
    bool FLAG2 = true;
    bool FLAG3 = true;
    //
    pair <string, int> p = {S, -1};
    //
    int j, k = 0;
    int i = 0;
    //
    while (FLAG1) {
        for (j = i; j < m - 1; j += 1) {
            //
            count++;
            if (count == N) {
                FLAG1 = false;
                break;
            }
            //
            s = calcAnswerAux(s, j, j + 1);
        }
        //
        if (k == (m - 1)) {
            FLAG2 = false;  
        }
        //
        else if (FLAG1) {
            s = S;
        }
        //
        if (i == m - 1) {
            i = k + 1;
            k += 1;
        }
        else {
            i += 1;
        }
        //
    }
    if (!FLAG1) {
        return make_pair(s, count);
    }
    if (!FLAG2) {
        string s1 = "";
        int l = 0;
        while (FLAG3) {
            for (int r = 0; r < (m); r += 1) {
                s1[l] = S[r];
                for (int q = 1; q < m; q += 1) {
                    s1[q] = S[q];
                }
                p = calcAnswer(s1, N, count);
                if (p.second >= N) {
                    FLAG3 = false;
                    break;
                }
            }
            l += 1;
            if (l == m) {
                FLAG3 = false;
            }
        }
        if (!FLAG3) {
            return p;
        }
    }
    //
    return p;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int N;
        cin >> N;
        cout << calcAnswer(S, N, 0).first << endl;
    }
    return 0;
}
