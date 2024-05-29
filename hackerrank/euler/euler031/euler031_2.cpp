#include <iostream>
#include <set>
#include <math.h>

using namespace std;

class SolutionM1 {

protected:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set <long long int> Sa1 = {};
    long long int LIMIT = 100000007;
    long long int MAX_LIMIT;

public:
    SolutionM1() {
        MAX_LIMIT = Sa1.max_size();
    }
    
    ~SolutionM1() {
        Sa1.clear();
    }
    //
    // N in S1
    bool calcAnswerAuxB1(long long int N) {
        return (S1.find(N) == S1.end());
    }
    //
    long long int calcAnswerAuxC1(long long int k, long long int N, 
    set <long long int> Sb1) {
        //
        long long int n1 = Sa1.size();
        //
        long long int retAnswer = 0;
        set < long long int >::iterator itr;
        //
        long long int num1 = (N / k);
        //
        while (k < N) {
            itr = Sa1.find(N - num1);
            if (itr == Sa1.end()) {
                retAnswer += calcAnswer(N - (num1), 0);
                //
                if (MAX_LIMIT > (n1)) {
                    Sa1.insert(N - k);
                }
            }
            k += k;
        }
        return retAnswer;
    } 
    //
    long long int calcAnswerAuxB2(long long int k, long long int N, 
    set <long long int> Sb1) {
        long long int retAnswer = 0;
        //
        if (N > k) {
            retAnswer += calcAnswerAuxC1(k, N, Sb1);
        }
        //
        long long int m = (N % k);
        long long int n1 = Sa1.size();
        //
        set <long long int>::iterator itr;
        //
        itr = Sa1.find(m);
        //
        // ```N % k``` calc since not in Sa1
        //
        if (itr == Sa1.end()) {
            retAnswer += calcAnswer(m, 0);
            if (MAX_LIMIT > n1) {
                Sa1.insert(m);
            }
        }
        //
        return (retAnswer);
    }
    //
    //
    long long int calcAnswerAuxA2(long long int k, long long int N, 
    set <long long int> Sb1){
        //
        long long int retAnswer = 0;
        //
        retAnswer += calcAnswerAuxB2(k, N, Sb1);
        //
        return (retAnswer);
    }
    //
    long long int calcAnswerAuxA1(long long int N) {
        //
        long long int retAnswer = 0;
        //
        long long int k;
        //
        //
        // if (calcAnswerAuxB1(N)) {
        //     retAnswer += 1;
        // }
        //        
        //
        set <long long int>::iterator itr1;
        //
        set <long long int> Sb1;
        //
        // iterating over all coins changes
        for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
            k = (*itr1);
            Sb1.insert(k);
            retAnswer += calcAnswerAuxA2(k, N, Sb1);
        }
        //
        return (retAnswer);
    }
    //
    //
    long long int calcAnswer(long long int N, long long int answer) {
        //
        long long int retAnswer = 0;
        //
        if (N == 1) {
            Sa1.insert(N);
            return 1;
        }
        if (N == 2) {
            Sa1.insert(N);
            return 2;
        }
        //
        retAnswer += calcAnswerAuxA1(N);
        //
        return (retAnswer);
    }
};

//
int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
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
