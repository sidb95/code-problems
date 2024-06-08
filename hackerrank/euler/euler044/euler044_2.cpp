#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

vector <long long int> calcAnswer(long long int N, long long int K);
bool isPentagonal(long long int N);

bool isPentagonal(long long int N) {
    bool retPropn = false;
    double a = pow(1 + (24 * N), 0.5);
    long long int b = pow(1 + (24 * N), 0.5);
    double c = a - b;
    if (c == 0) {
        if ((1 + b) % 6 == 0) {
            retPropn = true;
        }
        if ((1 - b) > 0) {
            if ((1 - b) % 6 == 0) {
                retPropn = true;
            }
        }
    }
    return retPropn;
}


vector <long long int> calcAnswer(long long int N, long long int K) {
    vector <long long int> V1;
    long long int M;
    //
    N -= 1;
    //
    while (N >= (K + 1)) {
        long long int pentgl1 = (((N) * ((3 * (N)) - 1))) / 2;
        M = N - K;
        long long int pentgl2 = (((M) * ((3 * (M)) - 1))) / 2;
        if (isPentagonal((pentgl1 - pentgl2))) {
            V1.push_back(N);
        }
        else if (isPentagonal(pentgl1 + pentgl2)) {
            V1.push_back(N);
        }
        N -= 1;
    }
    return V1;
}

int main() {
    long long int N, K;
    cin >> N >> K;
    vector <long long int> V1;
    V1 = calcAnswer(N, K);
    sort(V1.begin(), V1.end());
    long long int n = V1.size();
    long long int retValue;
    for (long long int i = 0; i < n; i += 1) {
        retValue = (((3 * V1[i]) - 1) * V1[i]) / 2;
        cout << retValue << endl;
    }
    return 0;
}
