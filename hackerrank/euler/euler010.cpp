/*
euler010
bhatoresiddharth@gmail.com
sidb95
21 May, 30 July 2024
*/

#include <iostream>
#include <math.h>
#include <unordered_map>

using namespace std;

unordered_map <int, bool> S;
unordered_map<int, bool> P;

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
        int num1 = pow(n, 0.5);
        for (int i = 3; i <= num1; i += 2) {
            if (S.find(i) == S.end()) {
                if ((n % i) == 0) {
                    retPropn = false;
                    break;
                }
                int j = 2 * i;
                while (j <= num1) {
                    S[j] = true;
                    j += i;
                }
            }
        }
    }
    return retPropn;
}

int calcAnswer(int n) {
    long long int retAnswer = 0;
    if (n == 1) {
        retAnswer = 0;
    }
    else if (n == 2) {
        retAnswer = 2;
    }
    else {
        retAnswer += 2;
        for (int i = 3; i <= n; i += 2) {
            if (P.find(i) == P.end()) {
                if (isPrime(i)) {
                    retAnswer += i;
                    P[i] = true;
                }    
            }
            else {
                retAnswer += i;
            }
        }
    }
    return retAnswer;
}


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long int x = n;
        cout << calcAnswer(x) << endl;
    }
    return 0;
}
