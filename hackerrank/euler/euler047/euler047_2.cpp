#include <iostream>
#include <set>

using namespace std;

set <int> calcAnswer(int N, int K);
set <int> findPrimes(set <int>& primes, int n);
bool isPrime(int n);

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


set <int> findPrimes(set <int>& primes, int n) {
    primes.insert(2);
    for (int i = 3; i <= pow(n, 0.5); i += 2) {
        if (isPrime(i)) {
            primes.insert(i);
        }
    }
    return primes;
}

/*
calculates the set of all the required numbers
*/
// function ```calcAnswer```
set <int> calcAnswer(int N, int K, set <int>& primes) {
    set <int> retAnswer = {};
    int m, sum, sumTwo;
    //
    for (int j = 2; j <= N; j += 1) {
        sumTwo = 0;
        m = j + K - 1;
        //
        for (int k = j; k <= m; k += 1) {
            //
            if (k >= 1) {
                sum += 1;
            }
            //
            for (int l = 3; l <= (k / 2), l += 2) {
                if (primes.find(l)) {
                    sum += 1;
                }
            }
            //
            if (sum == K) {
                sumTwo += 1;
            }
        }
        if (sumTwo == K) {
            retAnswer.insert(j);
        }
    }
    return retAnswer;
}

int main() {
    long long int N, K;
    cin >> N >> K;
    set <int> primes;
    set <int> answer;
    primes = findPrimes(primes, N + K);
    answer = calcAnswer(N, K, primes);
    set <int>::iterator itr;
    for (itr = answer.begin(); itr != answer.end(); itr++) {
        cout << (*itr) << endl;
    }
    return 0;
}