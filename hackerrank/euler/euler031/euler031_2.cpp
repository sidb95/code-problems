#include <vector>
#include <iostream>
#include <set>
#include <math.h>

using namespace std;

class SolutionM1 {
protected:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set <long long int> Sa1 = {};
    long long int LIMIT = 100000007;

public:
    long long int calcAnswerAuxC1(long long int k, long long int num1, 
    long long int N, long long int answer, set <long long int> Sb1) {
        //
        while (num1 != (0)) {
            answer += this->calcAnswer(N - k, answer);
            k *= 2;
        }
        return answer;
    } 
    //
    long long int calcAnswerAuxB2(long long int k, long long int N, 
    long long int answer, set <long long int>& Sb1) {
        long long int num1 = (N / k);
        // if all of one type
        if (N % k == 0) {
            answer += 1;
        }
        else { // if there is offset
            //
            set <long long int>::iterator itr;
            //
            itr = Sa1.find(N % k);
            //
            // ```N % k``` calc since not in Sa1
            // calcs if max k taken
            if (itr == Sa1.end()) {
                Sa1.insert(N % k);
                answer += this->calcAnswer(N % k, answer);
            }
            else { // if ```N % k``` calc, incerement
                answer += (*itr);
            }
        }
        //
        answer += calcAnswerAuxC1(k, num1, N, answer, Sb1);
        //
        return (answer);
    }
    // N in S1
    bool calcAnswerAuxB1(long long int N) {
        return (S1.find(N) == S1.end());
    }
    //
    long long int calcAnswerAuxA2(long long int k, long long int N, 
    long long int answer, set <long long int>& Sb1){
        if (k == 1) {
            return answer;
        }
        else {
            answer += 1;
        }
        //
        /*
            coins = {1, 2, 3}
        */
        //
        //
        if (k != 8) {
            answer += this->calcAnswerAuxB2(k, N, answer, Sb1);
        }
        return (answer);
    }
    //
    long long int calcAnswerAuxA1(long long int N, long long int answer) {
        //
        long long int k;
        //
        if (calcAnswerAuxB1(N)) {
            answer += 1;
        }
        //
        set <long long int>::iterator itr1;
        //
        set <long long int> Sb1;
        //
        // iterating over all coins changes
        for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
            k = (*itr1);
            Sb1.insert(k);
            answer = this->calcAnswerAuxA2(k, N, answer, Sb1);
        }
        //
        return (answer);
    }
    //
    //
    long long int calcAnswer(long long int N, long long int answer) {
        //
        if (N == 0) {
            return 0;
        }
        //
        answer = this->calcAnswerAuxA1(N, answer);
        //
        return (answer);
    }
};

//
int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        SolutionM1 Sol1;
        long long int answer = 0;
        //
        long long int LIMIT = 100000007;
        //
        answer = Sol1.calcAnswer(N, answer);
        //
        cout << (answer % LIMIT) << endl;
    }
    return 0;
}
