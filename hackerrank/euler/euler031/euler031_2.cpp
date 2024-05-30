#include <iostream>
#include <set>
#include <math.h>
#include <unordered_map>

using namespace std;

class SolutionM1 {
private:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    unordered_map < pair<long long int, long long int> > Sa1 = {};
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
        unordered_map < pair <long long int, long long int> >::iterator itrB1;
        itrB1 = Sa1.find(N);
        //
        if (itrB1 == Sa1.end()) {
            if (calcAnswerAuxB1(N)) {
                retAnswer += 1;
            }
            set <long long int>::iterator itrS1;
            //
            long long int i;
            long long int k;
            long long int num1, num2, num3, num4;
            long long int numA1, numA2;
            //
            // iterating over S1
            for (itrS1 = S1.begin(); itrS1 != S1.end(); itrS1++) {
                num3 = (N / k);
                num4 = N % k;
                i = 1;
                numA1 = N;
                //
                unordered_map < pair<long long int, long long int> >::iterator itrA1;
                //
                while (numA1 > 0) {
                    numA1 = N - (i * num3);
                    if (numA1 > 0) {
                        itrA1 = Sa1.find(numA1);
                        if (itrA1 == Sa1.end()) {
                            num1 = calcAnswer(numA1);
                            //
                            retAnswer += num1;
                            //
                            Sa1.insert(make_pair(numA1, num1));
                            //
                        }
                        else {
                            retAnswer += (*itrA1).second;
                        }   
                    }
                    i += 1;
                }
                // calc N mod k
                unordered_map < pair <long long int, long long int> > itrC1;
                //
                if (num4 != 0) {
                    itrC1 = Sa1.find(num4);
                    if (itrC1 == Sa1.end()) {
                        num2 = calcAnswer(num4);
                        retAnswer += num2;
                        Sa1.insert(make_pair(num4, num2));
                    }
                    else {
                        retAnswer += (*itrC1).second;
                    }
                }
            }
            Sa1.insert(make_pair(N, retAnswer));
        }
        return retAnswer;
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
