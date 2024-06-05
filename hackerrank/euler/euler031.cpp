/*
euler031
bhtoresiddharth@gmail.com
sidb95
ITER1 29 May 2024
ITER2 4 June 2024
*/

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int LIMIT = 1000000007;
    vector <int> pence = {1, 2, 5, 10, 20, 50};
    vector <int> pound = {1, 2};
};

class CalcSolution::Solution {
public:
    CalcSolution() {
        // pass
    }

    long long int calcAnswer(int N) {
        long long int answer = 0;
        /*
            pence 1(pence N C 1) + (pence N-1 C 1 + calc 1) + 
            pence N-2 C 1
        */
       if (N == 1) {
            answer = 1;
       }
       else if (N == 2) {
            answer = 2;
       }
       else if (N == 5) {
            answer = (calcAnswer(N - 2) + calcAnswer(N - 3)) +
                    (calcAnswer(N - 1) + calcAnswer(1));
            answer += 1
       }
       else if (N == 10) {
            for (int i = 0; i < 9; i += 1) {
                for (int j = i + 1; j < 10; j += 1) {
                    if ((i + j) == 10) {
                        answer += calcAnswer
                    }
                }
            }
       }

    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        cout << calcAnswer(N) << endl;
    }
    return 0;
}
