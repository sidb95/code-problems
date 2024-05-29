#include <vector>
#include <iostream>
#include <set>

using namespace std;

class Solution {
private:
    set <int> C1 = {1, 2, 5, 10, 20, 50};
    set <int> P1 = {100, 200};

protected:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set <long long int> Sa1 = {};

    long long int calcAnswerAuxC1(long long int k, long long int num1, 
    long long int N, long long int answer, set <long long int>& Sb1);

public:
    int LIMIT = 1000000007;

    bool calcAnswerAuxB1(long long int N) {
        return (S1.find(N) == S1.end());
    }

    long long int calcAnswerAuxB2(long long int k, long long int N, long long int answer, 
    set <long long int>& Sb1) {
        if (k == 2) {
            // pass
        }
        else {
            long long int num1 = (N / k);
            // if all of one type
            if (N % k == 0) {
                answer += 1;
            }
            else { // if there is offset
                //
                set <int>::iterator itr;
                //
                itr = Sa1.find(N % k);
                //
                // ```N % k``` calc since not in Sa1
                // calcs if max k taken
                if (itr == Sa1.end()) {
                    Sa1.insert(N % k);
                    this->calcAnswer(N % k, answer);
                }
                else { // if ```N % k``` calc, incerement
                    answer += (*itr);
                }
                //
                CalcAnswer CalcA1 = new CalcAnswer(k, num1, N, answer, Sb1);
                answer = CalcA1.calculate();
                //
            }
        }
        return answer;
    }
    
    void calcAnswer(long long int N, long long int& answer) {
        //
        if (N == 0) {
            return;
        }
        //
        this->calcAnswerAuxA1(N, answer);
       //
        return;
    }
    
    void calcAnswerAuxA1(long long int N, long long int& answer) {
        //
        long long int k;
        //
        if (calcAnswerAuxB1(N)) {
            answer += 1;
        }
        //
        set <long long int>::iterator itr1;
        //
        set <long long int>:: Sb1;
        //
        for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
            k = (*itr1);
            Sb1.insert(k);
            this->calcAnswerAuxA2(k, N, answer, Sb1);
        }
        //
        return;
    }
    
    void calcAnswerAuxA2(long long int k, long long int N, long long int &answer, 
    set <long long int>& Sb1){
        if (k == 1) {
            // pass
        }
        else {
            answer += 1;
        }
        //
        if (k == 1) {
            return;
        }
        //
        /*
            coins = {1, 2, 3}
        */
        //
        answer = this->calcAnswerAuxB2(k, N, answer, Sb1);
        //
        if (k == 8) {
            return;
        }
    }
};

class SolutionHelper: public Solution {
protected:
    long long int m = pow(2, 8);
public:

    SolutionHelper() {
        // pass
    }

    ~SolutionHelper() {
        // pass
    }
    /*
    Calculates all the remaining possibilities with that k
    */
    // 
    long long int calcAnswerAuxC1(long long int k, long long int num1, 
    long long int N, long long int answer, set <long long int> Sb1) {
        //
        while (num1 != (0)) {
            num1 -= 1;
            answer += calcAnswer(N - (k * num1));
        }
        return answer;
    }
};

class CalcAnswer {
private:
    long long int k;
    long long int num1;
    long long int N;
    long long int answer;
    set <long long int> Sb1;
public:
    CalcAnswer(long long int k, long long int num1, long long int N, 
    long long int answer, set <long long int> Sb1) {
        //
        this->k = k;
        this->num1 = num1;
        this->N = N;
        this->answer = answer;
        this->Sb1 = Sb1;
    }

    long long int calculate() {
        SolutionHelper SH1;
        return SH1.calcAnswerAuxC1(long long int k, long long int num1, 
        long long int N, long long int answer, set <long long int> Sb1);
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        int N;
        cin >> N;
        Solution Sol1;
        long long int answer = 0;
        //
        Sol1.calcAnswer(N, answer);
        //
        cout << (answer % LIMIT) << endl;
    }
    return 0;
}
