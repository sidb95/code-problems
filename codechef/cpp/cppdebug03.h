/*
sidb95
bhatoresiddharth@gmail.com
cppdebug03
09 May 2024
*/

class Solution {
private:
    int a;
    int b;
    
    int maxBurger(int x, int y) {
        a = x;
        b = y;
        return (x < y) ? a : b;
    }
public:

    void printAnswer(int retNum) {
        retNum = maxBurger(a, b);
        cout << retNum << endl; 
    }
};