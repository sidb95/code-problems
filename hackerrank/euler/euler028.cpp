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
    if (N == 1) {
        return 1;
    }
    long long int sum = 0;
    long long int k = (N - 1) / 2;
    sum += (4 * (((N) * (N - 1) * (N - 2)) / 6));
    sum += 6 * ((((N - 1) * (N - 1))) / 4);
    sum += 6 * (k);
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
