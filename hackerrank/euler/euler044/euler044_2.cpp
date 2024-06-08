#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector <int> calcAnswer(int N, int K);
bool isPentagonal(int N);

bool isPentagonal(int N) {
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


vector <int> calcAnswer(int N, int K) {
    vector <int> V1;
    int M;
    //
    while (N >= (K + 1)) {
        int pentgl1 = (((N) * ((3 * (N)) - 1))) / 2;
        M = N - K;
        int pentgl2 = (((M) * ((3 * (M)) - 1))) / 2;
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
    int N, K;
    cin >> N >> K;
    vector <int> V1;
    V1 = calcAnswer(N, K);
    int n = V1.size();
    for (int i = 0; i < n; i += 1) {
        cout << ((3 * V1[i] - 1) * V1[i]) / 2 << endl;
    }
    return 0;
}
