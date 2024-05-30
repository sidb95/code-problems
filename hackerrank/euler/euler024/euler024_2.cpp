
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
    vector <long long int> offsetV1 = {};
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
    
    void calcOffset(long long int N, int m) {
        for (int i = 1; i <= m; i += 1) {
            offsetV1.push_back(numV1[m] - N);
        }
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
    //
    // Calculate the string for offset;
    string calcAnswerAuxA1(long long int N, long long int offset, long long int n1) {
        // for (int i = 1; i <= n1; i += 1) {
            
        // }
        return "1";
    }

    string calcAnswer(long long int N, long long int m) {
        if (N == 1) {
            return S;
        }
        string str1;
        calcOffset(N, m);
        //
        str1 = calcAnswerAuxA1(N);
        cout << offsetV1[m - 1] << endl;
        return str1;
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
