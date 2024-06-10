/*
euler047
bhatoresiddharth@gmail.com
sidb95
10 June 2024
*/

#include <iostream>
#include <set>
#include <math.h>

using namespace std;

set <int> calcAnswer(int N, int K);
int calcAnswerAux(int i, int j, int l, set <int>& primes);
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
    for (int i = 3; i <= n; i += 2) {
        if (isPrime(i)) {
            primes.insert(i);
        }
    }
    return primes;
}

int calcAnswerAux(int q, int j, int sum, set <int>& primes) {
    //
    for (int l = 2; l < q; l += 1) {
        if ((q % l) == 0) {
            if (primes.find(l) != primes.end()) {
                sum += 1;
            }
        }
    }
    //
    return sum;
}

/*
calculates the set of all the required numbers
*/
// function ```calcAnswer```
set <int> calcAnswer(int N, int K) {
    set <int> retAnswer = {};
    int m, sum, sumTwo;
    set <int> primes;
    //
    primes = findPrimes(primes, N + K - 1);
    //
    for (int j = 2; j <= N; j += 1) {
        sumTwo = 0;
        m = j + K - 1;
        //
        for (int q = j; q <= m; q += 1) {
            //
            sum = 0;
            sum = calcAnswerAux(q, j, sum, primes);
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
    int N, K;
    cin >> N >> K;
    set <int> primes;
    set <int> answer;
    answer = calcAnswer(N, K);
    set <int>::iterator itr;
    for (itr = answer.begin(); itr != answer.end(); itr++) {
        cout << (*itr) << endl;
    }
    return 0;
}
