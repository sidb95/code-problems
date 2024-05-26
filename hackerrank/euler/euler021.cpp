/*
euler021
bhatoresiddharth@gmail.com
sidb95
May 26 2024
*/

#include <vector>
#include <iostream>
using namespace std;

long long int sumAmicablePairsAux(long long int N) {
    
}

long long int sumAmicablePairs(long long int N, long long int sum) {
    set <long long int> primes;
    set <long long int> nonprimes;
    set <long long int> S1;
    if (N == 1) {
        // pass
    }
    else {
        int n1 = N;
        long long int sum = 0;
        while (n1 != 1) {
            long long int sumA = sumAmicablePairsAux(n1)
            for (long long int i = 1; i <= n1 - 1; i++){
                long long int sumB = sumAmicablePairsAux(i);
                if (sumA == sumB) {
                    if (S1.find(sumA) == S1.end()) {
                        S1.insert(sumA);
                        sum += sumA;
                    }
                    if (S1.find(sumB) == S1.end()) {
                        S1.insert(sumB);
                        sum += sumB;
                    }
                }
            }
            n1 -= 1;
        }
    }
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << sumAmicablePairs(N, sum) << endl;
    }
    return 0;
}
