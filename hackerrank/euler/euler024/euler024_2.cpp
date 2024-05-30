#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class SolutionHelper {
public:
    vector <char> charV1 = {'a', 'b', 'c', 'd', 'e', 'g', 'h', 'i', 'j', 'k', 'l', 'm'}; 
    vector <long long int> numV1 = {};
    vector <string> strV1 = {};
    int numA1 = 13;

    long long int factorial(int n) {
        if (n == 0) {
            return 1;
        }
        else {
            return n * factorial(n - 1); 
        }
        return -1;
    }

    void calcNumS(int m = 13) {
        for (int i = 1; i <= 13; i += 1) {
            numV1.push_back(factorial(i));
        }
        return;
    }

    long long int calcOffsetAux(int m) {
        return numV1[m];
    }

    string calcStrAux(int m) {
        string retStrA1 = "";
        for (int i = 12; i >= m; i -= 1) {
            retStrA1 = charV1[i] + retStrA1;
        }
        for (int i = m - 1; i >= 0; i -= 1)
    }

    void calcStrS(int m = 13) {
        for (int i = 1; i <= 13; i += 1) {
            strV1.push_back(calcStrSAux(i));
        }
        return;
    }
};

class SolutionA1::SolutionHelper {
public:
    long long int calcOffset(long long int N, int m) {
        long long int offset;
        offset = N - calcOffsetAux(m);
    }

    long long int calcAnswer(long long int N) {
        // pass
    }
};
