/*
euler002
bhatoresiddharth@gmail.com
20 May 2024
*/

#include <iostream>

using namespace std;

class Solution {
protected:
    bool retProp = false;

    void print(long long int num) {
        cout << num << endl;
        return;
    }

public:
    Solution() {
        retProp = true;
    }
    long long int sumEvenValues(long n) {
        long long int a = 1, b = 2;
        long long answerSum = 2;
        long long int sum1;
        while ((a + b) < n) {
            sum1 = a + b;
            if ((sum1 % 2) == 0) {
                answerSum += sum1;
            }
            long long int t = b;
            b = sum1;
            a = t;
        }
        return answerSum;
    }

    void printFunc(long long int n) {
        if (retProp) {
            print(sumEvenValues(n));
        }
        return;
    }
};

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long n;
        cin >> n;
        Solution mySol;
        long long int x = n;
        mySol.printFunc(x);
    }
    return 0;
}
