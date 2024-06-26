/*
euler053
bhatoresiddharth@gmail.com
sidb95
11 June 2024
*/

#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<long long int, long long int> UM = {};

long long int MAX_LIMIT;

long long int calcAnswer(long long int N, long long int K);

long long int factorial(long long int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return (n * factorial(n - 1));
    }
}

long long int nCr(long long int n, long long int r) {
    long long int a, b, c;
    if (UM.find(n) != UM.end()) {
        a = UM[n];
    }
    else {
        a = (factorial(n));
        UM[n] = a;
    }
    if (UM.find(r) != UM.end()) {
        b = UM[r];
    }
    else {
        b = factorial(r); 
        UM[r] = b;
    }
    if (UM.find(n - r) != UM.end()) {
        c = UM[n - r];
    }
    else {
        c = factorial(n - r);
        UM[n - r] = c;
    }
    return ((a) / (b)) * c;
}

long long int calcAnswer(long long int N, long long int K) {
    long long int sum = 0;
    for (long long int n = 1; n <= N; n += 1) {
        for (long long int r = 1; r <= n - 1; r += 1) {
            if (n > K) {
                sum += n - 1;
            }
            else {
                if (nCr(n, r) > K) {
                    if ((n % 2) == 0) {
                        if (r == (n / 2)) {
                            sum += 1;
                        }
                        else {
                            sum += n - (2 * r) + 1;
                        }
                    }
                    else {
                        if (r == ((n / 2) - 1)) {
                            sum += 2;
                        }
                        else {
                            sum += n - (2 * r) + 1;
                        }
                    }
                }
            }
        }
    }
    return sum;
}


int main() {
    long long int N, K;
    cin >> N >> K;
    MAX_LIMIT = UM.max_size() - 2;
    cout << calcAnswer(N, K) << endl;
    return 0;
}
