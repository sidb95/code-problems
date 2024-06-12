#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome(int L) {
    string s = to_string(L);
    string str = s;
    reverse(s.begin(), s.end());
    return (s == str);
}

int calcAnswer(int N) {
    int num1 = 101101, i = 999, j, maxNum = 0;
    while ((i >= 100)) {
        j = 100;
        while ((j <= 999) && (j < i)) {
            if (num1 < N) {
                if (isPalindrome(num1)) {
                    maxNum = max(maxNum, num1);
                }
            }
            num1 = (i * j);
            j += 1;
        }
        i -= 1;
    }
    return maxNum;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
}
