#include <vector>
#include <iostream>

using namespace std;

class Solution {
protected:
    vector <int> pence = {1, 2, 5, 10, 20, 50};
    vector <int> pound = {1, 2};

public:
    int LIMIT = 1000000007;
    
    void calcAnswer(int N, long long int& answer) {
        //
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
            answer += 1;
       }
       else if (N == 10 || N == 20 || N == 50 || N == 100 || N == 200) {
            answer = this->calcAnswerAuxA1(N);
            answer += 1;
       }
       else {
            answer = this->calcAnswerAuxA1(N);
       }
        return;
    }
    
    void calcAnswerAuxA1(long long int N, long long int& answer) {
        long long int answer = 0;
        long long int sum1, sum2;
        for (int i = 1; i < N - 1; i += 1) {
            for (int j = i; j < N; j += 1) {
                if ((i + j) == N) {
                    sum1 = calcAnswer(i);
                    if (i == j) {
                        answer += sum1 * 2;
                    }
                    else {
                        sum2 = calcAnswer(j);
                        answer += sum1 + sum2;
                    }
                }
            }
        }
        return;
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        Solution Sol1;
        cout << Sol1.calcAnswer(N, 0) << endl;
    }
    return 0;
}
