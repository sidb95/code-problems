/*
euler025
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <iostream>
#include <vector>
#include <map>

using namespace std;

// returns sum of digits of ```N```
int noOfDigits(long long int N) {
    int answer = 0;
    while (N != 0) {
        answer += 1;
        N /= 10;
    }
    if (answer == 0) {
        return 1;
    }
    return answer;
}

// returns Nth term of fibonacci series
long long int fib(int N) {
    if (N == 1) {
        return 1;
    }
    else if (N == 2) {
        return 1;
    }
    else {
        long long int a = 1, b = 1;
        for (int i = 3; i <= N; i += 1) {
            a = b;
            b = a + b;
        }
        return b;
    }
}


//
int calcAnswer(int N, map <int, long long int>& M1) {
    int retAnswer;
    bool FLAG = false;
    long long int a1;
    for (int i = 1; !FLAG; i += 1) {
        if (M1.find(i) != M1.end()) {
            a1 = M1[i];
        }
        else {
            a1 = fib(i);
            M1[i] = a1;
        }
        FLAG = (noOfDigits(a1) == N);
        if (FLAG) {
            retAnswer = i;
        }
    }
    return retAnswer;
}

// main function
int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        map <int, long long int> M1;
        cout << calcAnswer(N, M1) << endl;
    }
    return 0;
}
