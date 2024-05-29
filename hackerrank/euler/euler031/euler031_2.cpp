#include <iostream>
#include <set>
#include <math.h>

using namespace std;

class SolutionM1 {

protected:
    set <int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set < int > Sa1 = {};
    int LIMIT = 100000007;
    int MAX_LIMIT;

public:
    SolutionM1() {
        MAX_LIMIT = Sa1.max_size();
    }
    
    ~SolutionM1() {
        Sa1.clear();
    }
    //
    // N in S1
    bool calcAnswerAuxB1(int N) {
        return (S1.find(N) == S1.end());
    }
    //
    long long int calcAnswerAuxC1(int k, int N, set <int> Sb1) {
        //
        int n1 = Sa1.size();
        //
        long long int retAnswer = 0;
        set < int >::iterator itr;
        //
        int i = 1;
        int num1 = (N / k);
        int numA1;
        //
        while (k < N) {
            numA1 = N - (num1 * i);
            //
            itr = Sa1.find(numA1);
            if (itr == Sa1.end()) {
                retAnswer += calcAnswer(numA1, 0);
                //
                if (MAX_LIMIT > (n1)) {
                    Sa1.insert(numA1);
                }
            }
            i += 1;
        }
        return retAnswer;
    } 
    //
    long long int calcAnswerAuxB2(int k, int N, 
    set <int> Sb1) {
        long long int retAnswer = 0;
        //
        if (N > k) {
            retAnswer += calcAnswerAuxC1(k, N, Sb1);
        }
        //
        int m = (N % k);
        int n1 = Sa1.size();
        //
        set <int>::iterator itr;
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
    int calcAnswerAuxA2(int k, int N, 
    set <int> Sb1){
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
        int k;
        //
        //
        // if (calcAnswerAuxB1(N)) {
        //     retAnswer += 1;
        // }
        //        
        //
        set <int>::iterator itr1;
        //
        set <int> Sb1;
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
        int LIMIT = 100000007;
        //
        answer = Sol1.calcAnswer(N, answer);
        //
        cout << (answer % LIMIT) << endl;
    }
    return 0;
}
