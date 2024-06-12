#include <iostream>

using namespace std;

long long int gcd(long long int a, long long int b) {
    long long int t, r;
    if (a < b) {
        t = a;
        a = b;
        b = t;
    }
    r = (a % b);
    if (r == 0) {
        return b;
    }
    else {
        a = b;
        b = r;
    }
    return gcd(a, b);
}

bool isPrime(int n) {
    bool retPropn = true;
    if (n == 1) {
        retPropn = false;
    }
    else if (n == 2) {
        retPropn = true;
    }
    else if ((n % 2) == 0) {
        retPropn = false;
    }
    else {
        for (int i = 3; i <= pow(n, 0.5); i += 2) {
            if ((n % i) == 0) {
                retPropn = false;
                break;
            }
        }
    }
    return retPropn;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        long long int answer, num1;
        for (long long int i = N; i >= 1; i -= 1) {
            num1 = gcd(N, i);
            if (num1 == i) {
                if (isPrime(num1)) {
                    answer = i;
                    break;
                }
            }
        }
        cout << answer << endl;
    }
}
