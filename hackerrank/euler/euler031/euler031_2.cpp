#include <iostream>
#include <set>
#include <math.h>
#include <set>

using namespace std;

class SolutionM1 {
private:
    set <long long int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set < long long int > Sv1 = {};
    set < long long int > Sk1 = {};
    long long int LIMIT = 100000007;
    long long int MAX_LIMIT;

public:
    SolutionM1() {
        MAX_LIMIT = Sv1.max_size();
    }
    
    ~SolutionM1() {
        Sv1.clear();
    }
    //
    // N in S1
    bool calcAnswerAuxB1(long long int N) {
        return (S1.find(N) == S1.end());
    }

    long long int keyToVal(set <long long int>::iterator itrk1) {
        long long int retAnswer = 0;
        long long int m1 = (*itrk1); 
        int i = 0;
        set < long long int >::iterator itrk4;
        itrk4 = Sk1.begin();
        set <long long int >::iterator itrv1;
        //
        for (itrv1 = Sv1.begin; itrv1 != itrv1.end(); itrv1++) {
            // pass
            if ((*itrk4) == m1) {
                retAnswer += (*itrv1);
                break;
            }
            itrk4++;
        }
        return retAnswer;
    }
    
    long long int calcAnswer(long long int N) {
        //
        long long int retAnswer = 0;
        //
        //
        if (N == 1) {
            Sk1.insert(1);
            return 1;
        }
        //
        set < long long int >::iterator itrk1;
        itrk1 = Sk1.find(N);
        //
        //
        if (itrk1 == Sk1.end()) {
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
                set < long long int >::iterator itrk2;
                //
                while (numA1 > 0) {
                    numA1 = N - (i * num3);
                    if (numA1 > 0) {
                        itrk2 = Sk1.find(numA1);
                        if (itrk2 == Sv1.end()) {
                            //
                            Sk1.insert(numA1);
                            //
                            num1 = calcAnswer(numA1);
                            //
                            retAnswer += num1;
                            //
                            Sv1.insert(num1);
                            //
                        }
                        else {

                        }   
                    }
                    i += 1;
                }
                // calc N mod k
                set < long long int >::iterator itrk3;
                //
                if (num4 != 0) {
                    itrk3 = Sk1.find(num4);
                    if (itrk3 == Sk1.end()) {
                        Sk1.insert(num4);
                        num2 = calcAnswer(num4);
                        retAnswer += num2;
                        Sv1.insert(num2);
                    }
                    else {
                        
                    }
                }
            }
            Sv1.insert(make_pair(N, retAnswer));
        }
        else {
            retAnswer += keyToVal(itrk1);
            //
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
