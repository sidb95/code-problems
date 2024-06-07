/*
euler036
bhatoresiddharth@gmail.com
sidb95
07 June 2024
*/

#include <iostream>
#include <string>

using namespace std;

set <long long int> S1 = {};

bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
    }
    return true;
}

long long int calcAnswer(long long int N, long long int K) {
    long long int answer = 0;
    long long int num1, num2;
    bool FLAG = true;
    string s = "";
    if (S1.find(N) != S1.end()) {
        return answer;
    }
    for (int i = 0; i < N; i += 1) {
        num1 = i;
        num2 = i;
        while (num1 != 0) {
            s += to_string(num1 % 10);
            num1 /= 10;
        }
        if (isPalindrome(s)) {
            s = "";
            while (num2 != 0) {
                s += to_string(num2 % K);
                num2 /= K;
            }
            if (isPalindrome(s)) {
                FLAG = false;
            }
        }
        if (!FLAG) {
            S1.insert(i);
            answer += i;
        }
    }
    return answer;
}

int main() {
    long long int N, K;
    cin >> N >> K;
    cout << calcAnswer(N, K) << endl;
    return 0;
}
