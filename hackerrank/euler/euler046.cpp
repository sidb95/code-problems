/*
euler046
bhatoresiddharth@gmail.com
sidb95
08 June 2024
*/

#include <iostream>
#include <set>
#include <math.h>

using namespace std;

int MAX_LIMIT = 10000;

bool isPrime(int n, set <int>& vis) {
    bool retPropn = true;
    if (vis.find(n) != vis.end()) {
        retPropn = false;
    }
    if (n == 1) {
        vis.insert(1);
        retPropn = false;
    }
    else if (n == 2) {
        retPropn = true;
    }
    else if ((n % 2) == 0) {
        vis.insert(n);
        retPropn = false;
    }
    else {
        int powerN1 = pow(n, 0.5);
        for (int i = 3; i <= powerN1; i += 2) {
            int m = vis.size();
            if ((n % i) == 0) {
                vis.insert(n);
                retPropn = false;
                break;
            }
            if (MAX_LIMIT > m) {
                for (int j = 2 * i; j <= powerN1; j += 2) {
                    vis.insert(j);
                }
            }
        }
    }
    return retPropn;
} 

int calcAnswer(int N) {
    int sum = 0;
    set <int> vis;
    for (int i = 1; i <= N - 2; i += 1) {
        if(isPrime(i, vis)) {
            int a = (N - i) / 2;
            int b = pow(a, 0.5);
            if ((b * b) == a) {
                sum += 1;
            }
        }
    }
    return sum;
}

int main () {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
