/*
euler045
bhatoresiddharth@gmail.com
sidb95
08 June 2024
*/

#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

double powK(long long int n, long long int k);
bool isShapeful(long long int n, long long int k);
vector <long long int> calcAnswer(long long int N, 
long long int a, long long int b);

double powK(long long int n, long long int k) {
    if ((k == 3) || (k == 6)) {
        return (pow((1 + (8 * n)), 0.5));
    }
    else if (k == 5) {
        return (pow((1 + (24 * n)), 0.5));
    }
    return 0;
}

bool isShapeful(long long int n, long long int k) {
    bool retPropn = false;
    long long int a = powK(n, k);
    double b = a * powK(n, k);
    double c = a * a;
    if (c == b) {
        if (k == 3) {
            if (((a - 1) % 2) == 0) {
                if (a > 1) {
                    retPropn = true;
                }
            }
        }
        else if (k == 5) {
            if (((1 - a) % 6) == 0) {
                if (a < 1) {
                    retPropn = true;
                }
            }
            if (((1 + a) % 6) == 0) {
                retPropn = true;
            }
        }
        else {
            if (((1 - a)) % 4 == 0) {
                if (a < 1) {
                    retPropn = true;
                }
            }
            if (((1 + a) % 4) == 0) {
                retPropn = true;
            }
        }
    }
    return retPropn;
}

vector <long long int> calcAnswer(long long int N, 
long long int a, long long int b) {
    vector <long long int> V1;
    for (long long int i = 1; i < N; i += 1) {
        if (isShapeful(i, a)) {
            if (isShapeful(i, b)) {
                V1.push_back(i);
            }
        }
    }
    return V1;
}

int main() {
    long long int N, a, b;
    cin >> N >> a >> b;
    vector <long long int> V1;
    V1 = calcAnswer(N, a, b);
    sort(V1.begin(), V1.end());
    long long int m = V1.size();
    for (long long int i = 0; i < m; i += 1) {
        cout << V1[i] << endl;
    }
    return 0;
}
