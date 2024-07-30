#include <iostream>
#include <math.h>
#include <unordered_set>

using namespace std;

unordered_set <long long int> S = {};
bool SET_LIMIT = false;


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
        for (long long int i = 3; i <= num1; i += 2) {
            if (S.find(i) == S.end()) {
                if ((n % i) == 0) {
                    retPropn = false;
                    break;
                }
                long long int j = 2 * i;
                
                while (j <= num1) {
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
            if ((N % i) == 0) {
                if (isPrime(i)) {
                    answer = i;
                    break;
                }
            }
        }
        cout << answer << endl;
    }
}
