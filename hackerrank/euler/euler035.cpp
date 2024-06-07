/*
euler035
bhatoresiddharth@gmail.com
sidb95
07 June 2024
*/

#include <iostream>
#include <set>
#include <vector>
#include <math.h>

using namespace std;

bool isPrime(long long int num, long long int limit) {
    bool retPropn = true;
    limit = ((limit % 2) == 0) ? (limit - 1) : limit;
    long long int m;
    set <long long int> vis;
    // returns false if numeric is divisible by 2  
    if ((num == 0) || (num == 1) || ((num % 2) == 0)) {
        retPropn = false;
    }
    else if (num == 2) {
        retPropn = true;
    }
    else {
        for (long long int i = 3; i <= limit; i += 2) {
            if ((num % i) == 0) {
                retPropn = false;
                break;
            }
        }
    }
    //
    return retPropn;
}

class SolutionS1 {
public:
    vector <int> V1 = {2, 3, 5, 7, 11, 13, 17, 31, 37, 
    71, 73, 79, 97};

    bool isCircular(long long int n) {
        vector <int> digits;
        long long int num1 = n;
        while (num1 != 0) {
            digits.push_back(num1 % 10);
            num1 /= 10;
        }
        int m = digits.size();
        int i;
        bool retPropn = true;
        long long int answer;
        /*
        1 9 1
        */
        for (long long int j = 0; j < m; j += 1) {
            answer = 0;
            i = 0;
            while (i != m) {
                //
                long long int num2 = 
                (pow(10, i) * digits[(i + j) % (m)]);
                answer += num2;
                //
                i += 1;
            }
            if (!isPrime(answer, pow(answer, 0.5))) {
                retPropn = false;
                break;
            }
        }
        return retPropn;
    }

    long long int calcAnswer(long long int N) {
        long long int answer = 17;
        for (int i = 10; i < N; i += 1) {
            if (isCircular(i)) {
                answer += i;
            }
        }
        return answer;
    }
     
};

int main() {
    long long int N;
    cin >> N;
    SolutionS1 Sol1;
    cout << Sol1.calcAnswer(N) << endl;
    return 0;
}
