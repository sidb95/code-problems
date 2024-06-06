#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

set <long long int> S1;
vector <long long int> V1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

bool isPan(long long int j, long long int k, long long int l, int N) {
    vector <long long int> VA1;
    vector <long long int> VB1 = {j, k, l};
    bool FLAG = true;
    int m = 0;
    bool retPropn = true;
    //
    while (m != 3) {
        while (VB1[m] != 0) {
            VA1.push_back(VB1[m] % 10);
            VB1[m] /= 10;
        }
        m += 1;
    }
    if (VA1.size() != N) {
        retPropn = false;
    } 
    else {
        sort(VA1.begin(), VA1.end());
        for (int i = 0; i < N; i += 1) {
            if (V1[i] != VA1[i]) {
                retPropn = false;
                break;
            }
        }
    }
    return retPropn;
}

long long int calcAnswer(int N) {
    bool FLAG = true;
    long long int i = 100000;
    long long int l = 100;
    long long int num1, sum = 0;
    for (long long int j = 1; j <= l; j += 1) {
        for(long long int k = 1; k <= i; k += 1) {
            num1 = (j * k);
            if (isPan(j, k, num1, N)) {
                set <long long int>::iterator itr;
                itr = S1.find(num1);
                if (itr == S1.end()) {
                    S1.insert(num1);
                    sum += num1;
                }
            }
        }
    }
    return sum;
}

int main() {
    int N;
    cin >> N;
    cout << calcAnswer(N) << endl;
}
