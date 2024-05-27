/*
euler028
bhatoresiddharth@gmail.com
sidb95
28 May 2024
*/

#include <iostream>

using namespace std

long long int calcAnswer(long long int N) {
    long long int sum = 0;
    for (long long int i = 1; i < N; i += 2) {
        long long int num1 = (i * i);
        for (long long int j = 0; j < 4; j += 1) {
            sum  += (num1 + ((i + 1) * j));
        }
    }
    return sum;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
