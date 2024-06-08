#include <iostream>

using namespace std;

vector <int> calcAnswer(int N, int K);

vector <int> calcAnswer(int N, int K) {
    vector <int> V1;
    //
    return V1;
}

int main() {
    int N, int K;
    cin >> N >> K;
    vector <int> V1;
    V1 = calcAnswer(N, K);
    int n = V1.size();
    for (int i = 0; i < n; i += 1) {
        cout << V1[i] << endl;
    }
    return 0;
}
