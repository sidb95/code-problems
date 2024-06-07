#include <iostream>
#include <vector>

using namespace std;

bool isPandigitalPrime(long long int n);

long long int calcAnswer(long long int N) {
    for (int i = N; i >= 10; i += 1) {
        if (isPandigitalPrime(i)) {
            return i;
        }
    }
    return -1;
}

int main() {
    int t, T;
    cin >> T;
    for (int t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}