#include <iostream>
#include <set>
#include <math.h>
#include <unordered_map>

using namespace std;

class SolutionM1 {
private:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    unordered_map <long long int, long long int> Sa1 = {};
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
    
    long long int calcAnswer(long long int N) {
        //
        long long int retAnswer = 0;
        //
        Sa1.insert(make_pair(1, 1));
        //
        if (N == 1) {
            return Sa1[1];
        }
        //
        unordered_map <long long int, long long int>::iterator itr;
        itr = Sa1.find(N);
        //
        if (itr == Sa1.end()) {
            if (calcAnswerAuxB1(N)) {
                retAnswer += 1;
            }
            set <long long int>::iterator itr1;
            //
            long long int i;
            long long int k;
            long long int num1, num2, num3, num4;
            long long int numA1, numA2;
            //
            for (itr1 = S1.begin(); itr1 != S1.end(); itr1++) {
                k = (*itr1);
                num3 = (N / k);
                num4 = N % k;
                i = 1;
                numA1 = N;
                while (numA1) {
                    numA1 = N - (i * num3);
                    if (numA1 > 0) {
                        if (Sa1.find(numA1) == Sa1.end()) {
                            num1 = calcAnswer(numA1);
                            //
                            Sa1.insert(make_pair(numA1, num1));
                            //
                        }
                        retAnswer += Sa1[numA1];
                        i += 1;
                    }
                }
                // calc N mod k
                
                if (num4 != 0) {
                    if (Sa1.find(num4) == Sa1.end()) {
                        num2 = calcAnswer(num4);
                        Sa1.insert(make_pair(num4, num2));
                    }
                    retAnswer += Sa1[num4];
                }
            }
            Sa1.insert(make_pair(N, retAnswer));
        }
        return Sa1[N];
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
        long long int answer;
        //
        long long int LIMIT = 100000007;
        //
        answer = Sol1.calcAnswer(N);
        //
        cout << (answer % LIMIT) << endl;
    }
    return 0;
}
