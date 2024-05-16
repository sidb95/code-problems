/*
morningrun
bhatoresiddharth@gmail.com
sidb95
16 May 2024
*/
#include <iostream>
#include "../../core/Solution.h"

using namespace std;

class MorningRunSolution::Solution {
private:
    void printFunc() {
        retStr = (retProp)? ("YES") : ("NO");
        print(retStr);
        return;
    }
public:
    RUNBAR = 1000
    Solution() {
        retAnswer = false;
    }

    ~Solution() {
        retAnswer = true;
    }

    void morningRun(int X, int Y) {
        if (2*(X+Y) >= RUNBAR) {
            retProp = true;
        }
        else {
            retProp = false;
        }
        printFunc();
        return;
    }
}

int main() {
    int X, Y;
    MorningRunSolution mySol;
    cin >> X >> Y;
    mySol.morningRun(X, Y);
    return 0;
}