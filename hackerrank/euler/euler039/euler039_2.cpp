#include <iostream>
#include <map>

using namespace std;

bool isRTriangle(int i, int j, int k) {
    if((i + j) > k) {
        if ((j + k) > i) {
            if ((k + i) > j) {
                if (((i * i) + (j * j) == (k * k)) || 
                    ((i * i) + (k * k) == (j * j)) ||
                    ((j * j) + (k * k) == (i * i))) {
                        return true;
                    }
            }
        }
    }
    return false;
}

int calcAnswer(int N) {
    int p, i, j, k;
    pair <int, int> maxSol = make_pair(1000000, 0);
    //
    map <int, int> M1;
    map <int, int>::iterator itr;
    //
    int count = 0;
    //
    while(count != (N + 1)) {
        M1[count] = 0;
        count += 1;
    }
    for (p = 3; p <= N; p += 1) {
        for (i = 1; i <= (p - 2); i += 1) {
            k = i + 1;
            for (j = 1; k < p; j += 1) {
                k = (i + j);
                if (isRTriangle(i, j, p - k)) {
                    M1[p] += 1;
                }
            }
        }
    }
    for (int i = 3; i <= N; i += 1) {
        if (M1[i] >= maxSol.second) {
            if (M1[i] == maxSol.second) {
                maxSol = make_pair(min(i, maxSol.first), M1[i]);
            }
            else {
                maxSol = make_pair(i, M1[i]);
            }
        }
    }
    return maxSol.first;
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
