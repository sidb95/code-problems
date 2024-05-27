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

string calcAnswer(long long int N) {
    int m = S.size();
    long long int num1 = factorial(m);
    string s = S;
    int count = 0;
    //
    bool FLAG = true;
    //
    int j, k = 0;
    int i = 0;
    //
    while (FLAG) {
        for (j = i; j < m - 1; j += 1) {
            //
            count++;
            if (count == N) {
                FLAG = false;
                break;
            }
            //
            s = calcAnswerAux(s, j, j + 1);
        }
        //
        if (k == (m - 1)) {
            k = 0;
            i = 0;
        }
        //
        else if (FLAG) {
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
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
