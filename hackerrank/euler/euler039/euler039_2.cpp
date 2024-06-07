#include <iostream>
#include <map>

using namespace std;

map <int, int> M1;

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
    map <int, int>::iterator itr;
    int count = 0;
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
    for (itr = M1.begin(); itr != M1.end(); itr++) {
        if (itr->second > maxSol.second) {
            maxSol = make_pair(itr->first, itr->second);
        }
        else if (itr->second == maxSol.second) {
            maxSol = make_pair(max(itr->first, maxSol.first), itr->second);
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
