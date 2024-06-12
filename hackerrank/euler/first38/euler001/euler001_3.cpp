/*
euler001
bhatoresiddharth@gmail.com
20 May 2024
03, 12 June 2024
*/

#include <iostream>

using namespace std;


bool divBy5(int n) {
    return ((n % 10) == 0) || ((n % 10) == 5);
}


long long int sumMultiples(int n) {
    long long int answerSum = 0;
    for (int i = 3; i < n; i += 3) {
        answerSum += i;
        if (divBy5(i + 1)) {
            if ((i + 1) < n) {
                answerSum += (i + 1);
            }
        }
        else if (divBy5(i + 2)) {
            if ((i + 2) < n) {
                answerSum += (i + 2);
            }
        }
    }
    return answerSum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        cout << sumMultiples(n) << endl;
    }
    return 0;
}
