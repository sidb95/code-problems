/*
euler001
bhatoresiddharth@gmail.com
20 May 2024
*/

#include <iostream>

using namespace std;

class Solution {
protected:
    bool retProp = false;
    int a = 3, b = 5;

    void print(int num1) {
        cout << num1 << endl;
        return;
    }

public:
    Solution() {
        retProp = true;
    }

    long long int sumMultiples(int n) {
        long long int answerSum = 0;
        for (int i = 3; i < n; i += 3) {
            if ((i % 5) == 0) {
                continue;
            }
            answerSum += i;
        }
        for (int i = 5; i < n; i += 5) {
            answerSum += i;
        }
        return answerSum;
    }

    void printFunc(int num1) {
        if (retProp) {
            print(num1);
        }
        return;
    }
};

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        Solution mySol;
        mySol.printFunc(mySol.sumMultiples(n));
    }
    return 0;
}
