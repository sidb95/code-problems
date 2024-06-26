#include <iostream>
#include <set>
#include <map>
#include <math.h>

using namespace std;

long long int INT_MAX_LLI = 1000000000000000000;

bool isPrime(long long int N) {
    if (N == 2) {
        return true;
    }
    for (long long int i = 3; i <= pow(N, 0.5); i += 2) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}

class SolutionM1 {
public:
    map <int, long long int> M1;

    SolutionM1() {
        calcAnswerAux();
    }

    void calcAnswerAux() {
        M1[1] = 2;
        int count = 2;
        for (long long int i = 3; i < 1000000; i += 2) {
            if (isPrime(i)) {
                M1[count] = i;
                count += 1;
            }
        }
    }

    long long int calcAnswer(int N) {
        int m = M1.size();
        if (M1.find(N) != M1.end()) {
            return M1[N];
        }
        else {
            for (long long int i = (INT32_MAX % 2)? (INT32_MAX + 1) : (INT32_MAX); 
            i <= INT64_MAX; 
            i += 1) {
                if (isPrime(i)) {
                    M1[m] = i;
                    m += 1;
                    if (m == N) {
                        return i;
                    }
                }
            }
        }
        return M1[N];
    }
};

int main() {
    int t, T;
    SolutionM1 Sol1;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << Sol1.calcAnswer(N) << endl;
    }
}
