<<<<<<< HEAD
=======
#include <iostream>
#include <math.h>
#include <string>
#include <vector>

using namespace std;

class SolutionHelper {
public:
    vector <char> charV1 = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'}; 
    vector <long long int> numV1 = {};
    vector <string> strV1 = {};
    long long int numA1 = 13;
    string S = "abcdefghijklm";
    string Y = "mlkjihgfedcba";

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
        for (long long int i = 0; i <= m; i += 1) {
            numV1.push_back(factorial(i));
        }
        return;
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
    SolutionA1() {
        calcNumS(numA1);
        calcStrS(numA1);
    }
    
    long long int calcOffsetAux(long long int m) {
        return numV1[m - 1];
    }

    long long int calcOffset(long long int N, int m) {
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

    string calcAnswer(long long int N, long long int m) {
        if (N == 1) {
            return S;
        }
        string str1;
        long long int offset = calcOffset(N, m);
        long long int n1 = calcAnswerAux(offset);
        //
        return to_string(offset);
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionA1 SolA1;
        cout << SolA1.calcAnswer(N, 13) << endl;
    }
}
>>>>>>> 6c2617befffd51e2361a678947fd518a270716a6
