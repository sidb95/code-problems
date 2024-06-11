#include <iostream>

using namespace std;

set <long long int> digits(int n) {
    set <long long int> S1;
    while (n != 0) {
        S1.insert(n % 10);
        n /= 10;
    }
    return S1;
}

vector <vector <long long int>> calcAnswer(long long int N, long long int K) {
    bool retPropn;
    vector <vector <long long int>> V;
    vector <long long int> V1;
    long long int i, j;
    //
    for (i = 1; i <= N; i += 1) {
        set <long long int> S1 = digits(i);
        V1.clear();
        retPropn = true;
        //
        for (j = i; j <= (i * K); j += i) {
            if (S1 != digits(j)) {
                retPropn = false;
            }
            else {
                V1.push_back(j)
            }
        }
        if (retPropn) {
            V.push_back(V1);
        }
    }
    //
    return V;
}

int main() {
    long long int N, K;
    cin >> N >> K;
    vector <vector <long long int>> V;
    V = calcAnswer(N, K);
    vector <long long int> V1;
    int i, j;
    for (i = 0; i < V.size() - 1; i += 1) {
        V1 = V[i];
        for (j = 0; j < V1.size() - 1; j += 1) {
            cout << V1[j] << " ";
        }
        cout << V1[j] << endl;
    }
    return 0;
}
