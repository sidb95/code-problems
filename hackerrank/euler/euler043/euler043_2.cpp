#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>

using namespace std;

class Divisibility {
public:
    bool divByTwo(int n) {
        int y = 1;
        return ((n & y) == 0);
    }

    bool divByThree(int n) {
        int answer = 0;
        while (n != 0) {
            answer += (n % 10);
            n /= 10;
        }
        return ((answer % 3) == 0);
    }

    bool divByFive(long long int n) {
        return ((n % 10) == 0) || ((n % 10) == 5);
    }

    bool divByK(long long int n, int k) {
        return (n % k == 0);
    }

};

class SolutionS1 {
public:
    // sorted pandigital strings
    vector <string> V;
    // primes till 17
    vector <int> P = {2, 3, 5, 7, 11, 13, 17};

    SolutionS1() {
        string str = "01";
        for (int i = 2; i <= 9; i += 1) {
            str += to_string(i);
            V.push_back(str);
        }
    }

    bool calcAnswerAux(vector <int>& digits) {
        bool retPropn = true;
        bool FLAG = true;
        int answer;
        int q = 1;
        int l = digits.size();
        int no1 = P.size();
        //
        Divisibility Div1;
        //
        while (FLAG) {
            answer = 0;
            for (int j = 1; (q + j < l) && (j < 4); j += 1) {
                answer += pow(10, j - 1) * digits[q + j];
            }
            if (Div1.divByTwo(answer) && Div1.divByThree(answer) &&
            Div1.divByFive(answer)) {
                for (int i = 3; i < no1; i += 1) {
                    if (!Div1.divByK(answer, P[i])) {
                        retPropn = false;
                        break;
                    }
                }
            }
            else {
                retPropn = false;   
            }
            q += 1;
            if (q >= (l - 1)) {
                FLAG = false;
            }
        }
        return retPropn;
    }

    bool calcAnswerAuxA1(long long int N) {
        long long int answer = 0;
        int r = V.size();
        bool retPropn = false;
        //
        string str = to_string(N);
        vector <int> digits;
        //
        while (N != 0) {
            digits.push_back(N % 10);
            N /= 10;
        }
        //
        sort(str.begin(), str.end());
        //
        for (int i = 0; i < r; i += 1) {
            if (V[i] == str) {
                retPropn = true;
            }
        }
        retPropn = calcAnswerAux(digits);
        return retPropn;
    }

    long long int calcAnswer(long long int N) {
        long long int sum = 0;
        for (long long int i = 100; i <= pow(10, N + 1) - 1; i += 1) {
            if (calcAnswerAuxA1(i)) {
                sum += i;
            }
        }
        return sum;
    }
};

int main() {
    long long int N;
    cin >> N;
    SolutionS1 Sol1;
    cout << Sol1.calcAnswer(N) << endl;
    return 0;
}
