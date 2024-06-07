/*
euler041
bhatoresiddharth@gmail.com
sidb95
07 June 2024
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <set>

using namespace std;

long long int MAX_LENGTH;
//
set <long long int> vis;
//
bool isPrime(long long int n);

bool isPrime(long long int n) {
    bool retPropn = true;
    if (vis.find(n) != vis.end()) {
        retPropn = false;
    }
    else {
        if (n == 1) {
            retPropn = false;
        }
        else if (n == 2) {
            retPropn = true;
        }
        else if (n % 2 == 0) {
            retPropn = false;
        }
        else {
            long long int powerN1 = pow(n, 0.5);
            for (long long int i = 3; i <= powerN1; i += 2) {
                long long int l = vis.size();
                if (n % i == 0) {
                    retPropn = false;
                    break;
                }
                else {
                    if (MAX_LENGTH > l) {
                        for (long long int j = (2 * i); j < powerN1; j += i) {
                            vis.insert(j);
                        }
                    }
                }
            }
        }
    }
    return retPropn;
}
class SolutionS1 {
public:
    vector <string> V;

    SolutionS1() {
        string str = "1";
        for(int i = 2; i <= 9; i += 1) {
            str += to_string(i);
            V.push_back(str);
        }
        MAX_LENGTH = vis.max_size() - 2;
    }

    bool isPandigitalPrime(long long int n) {
        string str = to_string(n);
        int l = V.size();
        bool retPropn = false;
        sort(str.begin(), str.end());
        for (int i = 0; i < l; i += 1) {
            if (str == V[i]) {
                if (isPrime(n)) {
                    retPropn = true;
                    break;
                }
            }
        }
        return retPropn;
    }

    long long int calcAnswer(long long int N) {
        long long int answer = -1;
        for (long long int i = N; i >= 10; i -= 1) {
            if (isPandigitalPrime(i)) {
                answer = i;
                break;
            }
        }
        return answer;
    }
};

int main() {
    int t, T;
    cin >> T;
    for (int t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionS1 Sol1;
        cout << Sol1.calcAnswer(N) << endl;
    }
    return 0;
}
