/*
euler043
bhatoresiddharth@gmail.com
sidb95
08 June 2024
*/

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Divisibility {
public:
    bool divByTwo(long long int n) {
        long long int y = 1;
        return (n & y == 0);
    }

    bool divByThree(long long int n) {
        long long int answer = 0;
        while (n != 0) {
            answer += (n % 10);
            n /= 10;
        }
        return ((answer % 3) == 0);
    }

    bool divByFour(long long int n) {
        long long int answer = 0;
        for (int i = 0; (i < 2) && (n != 0); i += 1) {
            answer += (pow(10, i)) * (n % 10);
            n /= 10;
        }
        return ((answer % 4) == 0);
    }

    bool divByFive(long long int n) {
        return ((n % 10) == 0) || ((n % 10) == 5);
    }

    bool divByK(long long int n, int k) {
        return (n % k == 0);
    }

    bool divByEight(long long int n) {
        answer = 0;
        for (int i = 0; (n != 0) && (i < 4); i += 1) {
            answer += (pow(10, i)) * (n % 10);
            n /= 10;
        }
        return (answer % 8 == 0);
    }
};

class SolutionS1 {
public:
    vector <string> V;

    SolutionS1() {
        str = "12"
        for (int i = 3; i <= 9; i += 1) {
            str += to_string(i);
            V.push_back(str);
        }
    }

    long long int calcAnswer(long long int N) {
        return 0;
    }
};

int main() {
    long long int N;
    cin >> N;
    cout << calcAnswer(N) << endl;
    return 0;
}
