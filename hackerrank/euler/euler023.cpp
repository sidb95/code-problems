/*
euler023
bhatoresiddharth@gmail.com
sidb95
27 May 2024
*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <set>

using namespace std;

long long int AB_LIMIT = 28123;

bool isAbundant(long long int N, set <long long int>& S1) {
    if (S1.find(N) != S1.end()) {
        return true;
    }
    long long int sum = 0;
    for (long long int i = 1; i < N; i += 1) {
        if ((N % i) == 0) {
            sum += i;
        }
    }
    if (sum > N) {
        return true;
    }
    return false;
}

string calcAnswerAux(long long int N, 
unordered_map <long long int, string>& ul1, set <long long int>& S1) {
    if (ul1.find(N) != ul1.end()) {
        return ul1[N];
    }
    for (long long int i = 0; i < N; i += 1) {
        for (long long int j = i + 1; j < N; j += 1) {
            //
            if ((i + j) == N) {
                bool propn1 = isAbundant(i, S1);
                bool propn2 = isAbundant(j, S1);
                //
                if (propn1 && propn2) {
                    ul1[N] = "YES";
                    return "YES";
                }
                if (propn1) {
                    S1.insert(i);    
                }
                if (propn2) {
                    S1.insert(j);
                }
            }
        }
    }
    ul1[N] = "NO";
    return "NO";
}

string calcAnswer(long long int N, 
unordered_map< long long int, string >& ul1) {
    if (N > AB_LIMIT) {
        return "YES";
    }
    else {
        set <long long int> S1;
        return calcAnswerAux(N, ul1, S1);
    }
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int N;
        cin >> N;
        unordered_map<long long int, string> ul1;
        cout << calcAnswer(N, ul1) << endl;
    }
    return 0;
}
