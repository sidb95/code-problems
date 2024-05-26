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
#include <unordered_map>

using namespace std;

long long int SET_LIMIT = 10000;

long long int sumAmicablePairsAux(long long int N, 
unordered_map <long long int>& summation) {
    if (summation.find(N) != summation.end()) {
        return summation[N];
    }
    long long int sum = 0;
    for (long long int i = 1; i < N; i += 1) {
        if ((N % i) == 0) {
            sum += i;
        }
    }
    summation[N] = sum;
    return sum;
}

long long int sumAmicablePairs(long long int N, set <long long int>& S1, 
unordered_map <long long int>& summation, long long int sum) {
    //
    if (N == 0) {
        return sum;
    }
    //
    else {
        long long int sum1 = sumAmicablePairsAux(N);
        if (sumAmicablePairsAux(sum1) == N) {
            if (sum1 != N) {
                if (S1.find(sum1) == S1.end()) {
                    sum += sum1;
                    S1.insert(sum1);
                }
                if (S1.find(N) == S1.end()) {
                    sum += N;
                    S1.insert(N);
                }
            }
        }
        return sumAmicablePairs(N-1, S1, summation, sum);
    }
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        set <long long int> S1;
        unordered_map <long long int, long long int> ul1;
        cout << sumAmicablePairs(N, S1, ul1, 0) << endl;
    }
    return 0;
}
