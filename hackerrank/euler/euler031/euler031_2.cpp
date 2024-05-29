#include <iostream>
#include <set>
#include <math.h>

using namespace std;

class SolutionM1 {
private:
    set <int> S = {1, 2, 5, 10, 20, 50, 100, 200};
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
    //
    long long int calcAnswerAuxA1(int N) {
        long long int retAnswer = 0;
        set <int>::iterator itr;
        bool FLAG = true;
        if (calcAnswerAuxB1(N)) {
            retAnswer += 1;
        }
        for (int pence = N - 1; pence >= 1; pence -= 1) {
            if (Sa1.find(pence) == Sa1.end()) {
                retAnswer += calcAnswer(pence, 0);
                Sa1.insert(N - pence);
            }
            if ((pence == N / 2) || (Sa1.find(N - pence) == Sa1.end())) {
                retAnswer += calcAnswer(N - pence);
                Sa1.insert(N - pence);
            }
        }
        return retAnswer;
    }
    //
    //
    long long int calcAnswer(long long int N, long long int answer) {
        //
        long long int retAnswer = 0;
        //
        if (N == 1) {
            return 1;
        }
        else if (N == 2) {
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
