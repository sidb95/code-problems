
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
    long long int offset = 0;
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
        string answer = "";
        for (int i = 1; i <= m; i += 1) {
            answer += S[i - 1];
        }
        for (int i = numA1; i > m; i -= 1) {
            answer += S[i - 1];
        }
        return answer;
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

    string calcAnswer(long long int N, long long int m) {
        cout << N << ' ' << m << endl;
        return "1";
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
