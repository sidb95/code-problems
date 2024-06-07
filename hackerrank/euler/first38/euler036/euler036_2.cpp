#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    bool retPropn = true;
    while (i < j) {
        if (s[i] != s[j]) {
            retPropn = false;
        }
        i += 1;
        j -= 1;
    }
    return retPropn;
}

long long int calcAnswer(long long int N, long long int K) {
    long long int answer = 0;
    long long int num1, num2;
    string s1, s2;
    for (long long int i = 1; i < N; i += 1) {
        num1 = i;
        num2 = i;
        s1 = "";
        while (num1 != 0) {
            s1 += to_string(num1 % 10);
            num1 /= 10;
        }
        if (isPalindrome(s1)) {
            s2 = "";
            while (num2 != 0) {
                s2 += to_string(num2 % K);
                num2 /= K;
            }
            if (isPalindrome(s2)) {
                answer += i;
            }
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
