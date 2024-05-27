/*
euler024
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <iostream>
#include <string>
#include <math.h>
#include <set>

using namespace std;

string S = "abcdefghijklm";

/*
long long int factorial(int n) {
    long long int answer = 1;
    for (int i = 2; i <= n; i += 1) {
        answer *= i;
    }
    return answer;
}
*/

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

void calcAnswer(string s, set <string>& S1, long long int N, int count) {
    int m = S.size();
    // long long int num1 = factorial(m);
    //
    bool FLAG2 = true;
    bool FLAG3 = true;
    //
    if (!FLAG2) {
        string s1 = S;
        int l = 0;
        while (FLAG3) {
            for (int r = 0; r < m; r += 1) {
                char c1 = s1[l];
                char c2 = S[r];
                s1[l] = c2;
                for (int q = 0; q < m; q += 1) {
                    if (q != l) {
                        s1[q] = S[q];
                    }
                    else {
                        s1[r] = c1; 
                    }
                }
                for (int i = 0; i < m; i += 1) {
                    if (i != r) {
                        if (s1[i] > s1[l]) {
                            char c =  s1[i];
                            s1[i] = s1[l];
                            if (l != (m - 1)) {
                                s1[i + 1] = c;
                            }
                            else {
                                for (int j = i + 1; j < l; j += 1) {
                                    if (j != (m - 1)) {
                                        s1 = swap(s1, j, j + 1);
                                    }
                                }
                            }
                        }
                    }
                }
                calcAnswer(s1, S1, N, count);
                count += 1;
                //
                if (count >= N) {
                    S1.insert(s1);
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
            return;
        }
    }
    //
    return;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int N;
        cin >> N;
        set <string> S1;
        calcAnswer(S, S1, N, 0);
        //
        bool FLAG = true;
        //
        int count = 0;
        string str1 = S;
        set <string>::iterator itr1;
        while (FLAG) {
            for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
                str1 = (*itr1);
                count++;
                if (count == N) {
                    FLAG = false;
                    break;
                }
            }
        }
        cout << str1 << endl;
    }
    return 0;
}
