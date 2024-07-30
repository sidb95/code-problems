#include <iostream>
#include <math.h>
#include <unordered_set>

using namespace std;

unordered_set <int> S = {};
bool SET_LIMIT = false;

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

bool isPrime(long long int n) {
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
        long long int num1 = pow(n, 0.5);
        if (S.size() == 1000000000000) {
            SET_LIMIT = true;
        }
        for (long long int i = 3; i <= num1; i += 2) {
            if (S.find(i) == S.end()) {
                if ((n % i) == 0) {
                    retPropn = false;
                    break;
                }
            }
            else {
                long long int j = 2 * i;
                
                while ((!SET_LIMIT) && j <= num1) {
                    S.insert(j);
                    j += i;
                }
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
        long long int answer;
        for (long long int i = (N % 2 == 0) ? (N - 1):N; i >= 1; i -= 2) {
            if (N % i == 0) {
                if (isPrime(i)) {
                    answer = i;
                    break;
                }
            }
        }
        cout << answer << endl;
    }
}
