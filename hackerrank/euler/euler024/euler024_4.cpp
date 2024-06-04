#include <iostream>
#include <string>

using namespace std;

class SolutionM1:
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
        for (int i = 13; i >= 0; i += 1) {
            if (N >= numV1[i]) {
                iVal = i;
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
    long long int calcAnswer(long long int N) {
        int m = 13;
        int count = 0;
        pair<int, long long int> p1 = offsetCalc(N);
        offset = p1.second;
        answer = "";
        for (int i = 0; i < p1.first - 1; i += 1) {
            answer += str[i];
        }
        string strRem = "";
        for (int i = p1.first; i < 13; i += 1) {
            strRem += str[i];
        }
        if (count == offset) {
            return answer + reverse(strRem.begin(), strRem.end());
        }
        bool FLAG = true;
        while (FLAG) {
            for (int i = m - 1; i >= 1; i -= 1) {
                for (int j = i - 1; j >= 0; j -= 1) {
                    swap(strRem, i, j);
                    count += 1;
                    if (count == offset) {
                        FLAG = false;
                        break;
                    }
                }
                if (!FLAG) {
                    break;
                }
            }
        }
        return answer + strRem;
    }

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