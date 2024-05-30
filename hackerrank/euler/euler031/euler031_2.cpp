#include <iostream>
#include <set>
#include <math.h>
#include <unordered_map>

using namespace std;

class SolutionM1 {
private:
    set <int> S = {1, 2, 5, 10, 20, 50, 100, 200};
protected:
    set <int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    unordered_map <int, int> Sa1 = {};
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
    
    long long int calcAnswer(long long int N, long long int answer) {
        //
        long long int retAnswer = 0, k;
        //
        retAnswer += answer;
        //
        if (N == 0) {
            return 1;
        }
        else if (N == 1) {
            retAnswer += 1;
            Sa1[1] = retAnswer;
            return retAnswer;
        }
        unordered_map <int, int>::iterator itr;
        itr = Sa1.find(N);
        //
        if (itr != Sa1.end()) {
            retAnswer += Sa1[N];
            return retAnswer;
        }
        else {
            if (calcAnswerAuxB1(N)) {
                retAnswer += (1 + calcAnswer(N - 1, 0));
            }
            else {
                set <int>::iterator itr1;
                //
                int i = 1;
                //
                for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
                    k = (*itr1);
                    retAnswer += (calcAnswer(N - i * (N / k), 0));
                    retAnswer += calcAnswer(N % k, 0);
                }
            }
        }
        return retAnswer;
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
