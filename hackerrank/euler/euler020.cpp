/*
euler020
bhatoresiddharth@gmail.com
sidb95
26 May 2024
*/

#include <vector>
#include <iostream>
#include <string>

using namespace std;

string calcAnswerAux(string s, int N, int K) {
    if (K == 0) {
        return s;
    }
    string answer = "";
    int unitsDigit;
    //
    int sum, carry = 0;
    // runs K times, i = K-1 to 0
    for (int i = K - 1; i >= 0; i--) {
        sum = 0;
        // at position i
        for (int j = 0; j < N; j++) {
            sum += (s[i] - '0');
        }
        // unit place digit calculation
        unitsDigit = ((sum + carry) % 10);
        carry = ((sum + carry) / 10);
        answer = to_string(unitsDigit) + answer;
    }
    // adding carry forward to the answer
    while (carry != 0) {
        unitsDigit = (carry % 10);
        carry /= 10;
        answer = to_string(unitsDigit) + answer;
    }
    return answer;
}

int calcAnswer(int N) {
    int answer = 0;
    if (N == 0) {
        answer = 1;
    }
    else {
        string s = to_string(1);
        for (int i = 1; i <= N; i++) {
            int l = s.size();
            s = calcAnswerAux(s, i, l);
        }
        int m = s.size();
        for (int i  = 0; i < m; i++) {
            answer += (s[i] - '0');
        }
    }
    return answer;
}

int main() {
    int T, t;
    cin >> T;
    for (t = 0; t < T; t++) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    } 
    return 0;
}
