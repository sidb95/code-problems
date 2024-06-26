#include <iostream>
#include <set>
#include <math.h>
#include <set>

using namespace std;

class SolutionM1 {
public:
    set <int> S1 = {1, 2, 5, 10, 20, 50, 100, 200};
    set < int > Sv1 = {};
    set < int > Sk1 = {};
    int LIMIT = 100000007;
    int MAX_LIMIT;

public:
    SolutionM1() {
        MAX_LIMIT = min(Sv1.max_size(), Sk1.max_size());
    }
    
    ~SolutionM1() {
        Sv1.clear();
    }
    //
    // N in S1
    bool calcAnswerAuxB1(int N) {
        return (S1.find(N) == S1.end());
    }

    int keyToVal(set <int>::iterator& itrk1) {
        //
        bool FLAG = true;
        //
        int m1 = (*itrk1); 
        set < int >::iterator itrk4;
        itrk4 = Sk1.begin();
        set <int >::iterator itrv1;
        //
        for (itrv1 = Sv1.begin(); FLAG; itrv1++) {
            if (itrk4 == Sk1.end()) {
                break;
            }
            if ((*itrk4) == m1) {
                return (*itrv1);
            }
            itrk4++;
        }
        return 0;
    }

    long long int calcAnswerAux(set < int >::iterator& itrk2, int num) {
        long long int retAnswer = 0, num1;
        if (itrk2 == Sk1.end()) {
            //
            Sk1.insert(num);
            //
            num1 = calcAnswer(num);
            //
            retAnswer += num1;
            //
            Sv1.insert(num1);
            //
        }
        else {
            retAnswer += keyToVal(itrk2);
        }
        return retAnswer;
    }
    
    long long int calcAnswer(int N) {
        //
        long long int retAnswer = 0;
        //
        //
        if (N == 1) {
            Sk1.insert(1);
            return 1;
        }
        //
        set < int >::iterator itrk1;
        itrk1 = Sk1.find(N);
        //
        //
        if (itrk1 == Sk1.end()) {
            if (calcAnswerAuxB1(N)) {
                retAnswer += 1;
            }
            set <int>::iterator itrS1;
            //
            int i;
            int k;
            int num3, num4;
            int numA1;
            //
            // iterating over S1
            for (itrS1 = S1.begin(); itrS1 != S1.end(); itrS1++) {
                k = (*itrS1);
                num3 = (N / k);
                num4 = N % k;
                i = 1;
                //
                set < int >::iterator itrk2;
                numA1 = N;
                //
                while (numA1 > 0) {
                    numA1 = N - (i * num3);
                    itrk2 = Sk1.find(numA1);
                    retAnswer += calcAnswerAux(itrk2, numA1);
                    i += 1;
                }
                // calc N mod k
                set < int >::iterator itrk3;
                //
                if (num4 != 0) {
                    itrk3 = Sk1.find(num4);
                    retAnswer += calcAnswerAux(itrk3, num4);
                }
            }
        }
        else {
            retAnswer += keyToVal(itrk1);
            //
        }
        return retAnswer;
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
        long long int answer;
        //
        int LIMIT = 100000007;
        //
        answer = Sol1.calcAnswer(N);
        //
        cout << (answer % LIMIT) << endl;
    }
    return 0;
}
