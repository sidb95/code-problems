#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <algorithm>

using namespace std;

pair <int, int> calcAnswer(int N);

vector <int> digitize(int N);

bool isPalindrome(int N);

int revNum(int N);


// function ```isPalindrome```
bool isPalindrome(int N) {
    bool retPropn = true;
    vector <int> digits = digitize(N);
    int i = 0, j = digits.size() - 1;
    //
    while (i < j) {
        if (digits[i] != digits[j]) {
            retPropn = false;
            break;
        }
    }
    return retPropn;
}


// function ```revNum```
int revNum(int N) {
    int answer = 0;
    vector <int> digits = digitize(N);
    reverse(digits.begin(), digits.end());
    return answer;
}


// function ```digitize```
vector <int> digitize(int N) {
    vector <int> V1;
    while (N != 0) {
        V1.push_back(N % 10);
        N /= 10;
    }
    return V1;
}


// function ```calcAnswer```
pair <int, int> calcAnswer(int N) {
    pair <int, int> p1 = {0, 0};
    //
    set <int> S;
    //
    int count;
    int i, num1, num2;
    //
    for (i = 1; i <= N; i += 1) {
        num1 = i;
        if (S.find(num1) != S.end()) {
            continue;
        }
        S.insert(num1);
        count = 0;
        num2 = revNum(num1);
        while (!isPalindrome(num1)) {
            if (count == 60) {
                break;
            }
            num1 = num1 + num2;
            S.insert(num1);
            num2 = revNum(num1);
            count += 1;
        }
        if (count > p1.second) {
            p1.second = count;
            p1.first = i;
        }
    }
    return p1;
}

int main() {
    int N;
    cin >> N;
    pair <int, int> p1;
    p1 = calcAnswer(N);
    cout << p1.first << ' ' << p1.second << endl;
    return 0;
}
