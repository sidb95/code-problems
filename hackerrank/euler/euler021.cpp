/*
euler021
bhatoresiddharth@gmail.com
sidb95
May 26 2024
*/

#include <vector>
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

long long int sumAmicablePairsAux(long long int N) {
    long long int sum = 0;
    for (long long int i = 1; i < N; i += 1) {
        if ((N % i) == 0) {
            sum += i;
        }
    }
    return sum;
}

long long int sumAmicablePairs(long long int N, set <long long int>& S1, 
long long int sum) {
    //
    if (N == 1) {
        return sum;
    }
    else {
        //
        long long int sumA = sumAmicablePairsAux(N);
        //
        for (long long int i = 1; i <= N - 1; i++) {
            long long int sumB = sumAmicablePairsAux(i);
            if (sumA == sumB) {
                if (S1.find(sumA) == S1.end()) {
                    S1.insert(sumA);
                    sum += N;
                }
                if (S1.find(sumB) == S1.end()) {
                    S1.insert(sumB);
                    sum += i;
                }
            }
        }
        return (sum) + sumAmicablePairs(N - 1, S1, sum);
    }
    return sum;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        set <long long int> S1;
        cout << sumAmicablePairs(N, S1, 0) << endl;
    }
    return 0;
}
