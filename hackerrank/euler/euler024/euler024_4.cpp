#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class SolutionM1 {
public:
    string str = "abcdefghijklm";
    vector<long long int> numV1 = {0};
    long long int offset;
    set <string> S1 = {};

    void insertNumerics() {
        for (int i = 1; i <= 13; i += 1) {
            numV1.push_back(factorial(i));
        }
    }

    SolutionM1() {
        insertNumerics();
    }
    
    string swap(string str, int i, int j) {
        char TEMP;
        TEMP = str[i];
        str[i] = str[j];
        str[j] = TEMP;
        return str;
    }

    long long int factorial(long long int N)  {
        if (N == 0) {
            return 1;
        }
        else {
            return N * factorial(N-1);
        }
        return 0;
    }
    //
    /*
    str = abc
    */
   //
    string calcAnswer(long long int N) {
        int m = 13;
        int count = 0;
        //
        string answer = str;
        //
        bool FLAG = true;
        while (FLAG) {
            for (int i = 12; i >= 1;  i -= 1) {
                for (int j = i - 1; j >= 0; j -= 1) {
                    answer = swap(answer, i, j);
                    if (answer != str) {
                        count += 1;
                        S1.insert(answer);
                    }
                    if (count == N) {
                        FLAG = false;
                        break;
                    }
                }
                if (!FLAG) {
                    break;
                }
            }
        }
        set <long long int>::reverse_iterator ritr;
        ritr = S1.rbegin();
        return (*ritr);
    }
};

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        SolutionM1 SolM1A;
        cout << SolM1A.calcAnswer(N) << endl;
    }
    return 0;
}
