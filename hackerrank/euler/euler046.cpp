/*
euler046
bhatoresiddharth@gmail.com
sidb95
08 June 2024
*/

#include <iostream>

using namespace std;

bool isPrime(int n, set <int>& vis) {
    bool retPropn = true;
    if (vis.find(n) != vis.end()) {
        retPropn = false;
    }
    else if (n == 1) {
        retPropn = false;
    }
    else if (n == 2) {
        retPropn = true;
    }
    else if ((n % 2) == 0) {
        retPropn = false;
    }
    else {
        int powerN1 = pow(n, 0.5);
        for (int i = 3; i <= powerN1; i += 2) {
            int m = vis.size();
            if ((n % i) == 0) {
                retPropn = false;
            }
            if (SET_LIMIT > m) {
                if (int j = 2 * i; j <= powerN1; j += i) {
                    vis.insert(j);
                }
            }
        }
    }
    return retPropn;
} 

int calcAnswer(int N) {
    long long int sum = 0;
    set <int> vis = {};
    for (int i = 1; i <= N - 2; i += 2) {
        if(isPrime(i, vis)) {
            if (((N - i) % 2) == 0) {
                int a = pow((N - i) / 2, 0.5);
                float b = pow((N - i) / 2, 0.5);
                float c = (b * b);
                if (c == a) {
                    sum += 1;
                }
            }
        }
    }
    return sum;
}

int main () {
    int t, T;
    cin >>T;
    for (t = 0; t < T; t += 1) {
        int N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
