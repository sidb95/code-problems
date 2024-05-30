#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

class SolutionHelper {
public:
    vector <char> charV1 = {'a', 'b', 'c', 'd', 'e', 'g', 'h', 'i', 'j', 'k', 'l', 'm'}; 
    vector <long long int> numV1 = {};
    vector <string> strV1 = {};
    long long int numA1 = 13;

    long long int factorial(long long int n) {
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n - 1); 
        }
        return -1;
    }

    void calcNumS(long long int m) {
        for (long long int i = 1; i <= m; i += 1) {
            numV1.push_back(factorial(i));
        }
        return;
    }

    long long int calcOffsetAux(long long int m) {
        return numV1[m];
    }

    string calcStrSAux(long long int m) { // m no of digits
        string retStrA1 = "";
        for (long long int i = 0; i < m; i += 1) {
            retStrA1 = charV1[i] + retStrA1;
        }
        if (m == numA1) {
            return retStrA1;
        }
        else {
            for (long long int i = m; i <= numA1 - 1; i += 1) {
                retStrA1 += charV1[numA1 - i];
            }
            return retStrA1;
        }
    }

    void calcStrS(long long int m) {
        for (long long int i = 1; i <= m; i += 1) {
            strV1.push_back(calcStrSAux(i));
        }
        return;
    }
};

class SolutionA1: public SolutionHelper {
public:
    long long int calcOffset(long long int N, long long int m) {
        long long int offset;
        offset = N - calcOffsetAux(m);
        return offset;
    }

    long long int calcAnswerAux(long long int offset) {
        for (long long int i = 1; i <= numA1; i += 1) {
            if (factorial(i) > offset) {
                return (i - 1);
            }
        }
        return numA1;
    }

    string calcAnswer(long long int N) {
        long long int offset = calcOffset(N, numA1);
        long long int m = calcAnswerAux(offset);
        return strV1[m];
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionA1 SolA1;
        cout << SolA1.calcAnswer(N) << endl;
    }
}
