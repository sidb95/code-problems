#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class SolutionM1 {
public:
    string str = "abcdefghijklm";
    vector<long long int> numV1 = {0};
    long long int offset;

    void insertNumerics() {
        for (int i = 1; i <= 13; i += 1) {
            numV1.push_back(factorial(i));
        }
    }

    SolutionM1() {
        insertNumerics();
    }
    
    string swap(string str, int i, int j) {
        char TEMP;
        TEMP = str[i];
        str[i] = str[j];
        str[j] = TEMP;
        return str;
    }

    long long int factorial(long long int N)  {
        if (N == 0) {
            return 1;
        }
        else {
            return N * factorial(N-1);
        }
        return 0;
    }

    pair< int, long long int > offsetCalc(long long int N) {
        int iVal = 0;
        for (int i = 13; i >= 1; i -= 1) {
            if (N >= numV1[i]) {
                iVal = 13 - i;
                return make_pair(iVal, N - numV1[i]);
            }
        }
        return make_pair(0, 0);
    }
    //
    /*
    str = abc
    */
   //
    string calcAnswer(long long int N) {
        int m = 13;
        int count = 0;
        pair<int, long long int> p1 = offsetCalc(N);
        offset = p1.second;
        string answer = "";
        for (int i = 0; i < p1.first; i += 1) {
            answer += str[i];
        }
        string strRem = "";
        for (int i = p1.first; i < 13; i += 1) {
            strRem += str[i];
        }
        cout << offset << endl << endl << p1.first << endl;
        if (offset == 0) {
            reverse(strRem.begin(), strRem.end());
            return answer + strRem;
        }
        bool FLAG = true;
        
        int i = 1;
        
        return (answer + strRem);
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionM1 SolM1A;
        cout << SolM1A.calcAnswer(N) << endl;
    }
    return 0;
}
