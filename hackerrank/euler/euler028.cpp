/*
euler028
bhatoresiddharth@gmail.com
sidb95
28 May 2024
*/

#include <iostream>

using namespace std;

long long int LIMIT = (1000000007);

long long int calcAnswer(long long int N) {
    long long int sum = 0;
    long long int num1;
    //
    for (long long int i = 1; i < N; i += 2) {
        num1 = (i * i);
        sum += (4 * num1);
        //
        sum  += (i + 1) * (6);
    }
    sum += (N * N);
    sum = (sum % LIMIT);
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
