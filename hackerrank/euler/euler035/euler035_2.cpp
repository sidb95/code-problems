#include <iostream>
#include <set>
#include <vector>

long long int X = 2;

bool isPrime(long long int num, long long int limit, set <long long int>& vis) {
    bool retAnswer = true;
    limit = ((limit % X) == 0) ? (limit - 1) : limit;
    long long int m;
    // returns false if numeric is divisible by 2  
    if ((num == 0) || (num == 1) || ((num % X) == 0)) {
        retAnswer = false;
    }
    else if (num == X) {
        retAnswer = true;
    }
    else {
        for (long long int i = 3; i <= limit; i += X) {
            if ((num % i) == 0) {
                retAnswer = false;
                break;
            }
            //
            // if true, visit and mark nodes by multiples
            if (vis.find(i) == (vis.end())) {
                for (long long int l = i; l <= limit; l += i) {
                    vis.insert(l);
                }
            }
        }
    }
    //
    return retAnswer;
}

class SolutionS1 {
public:
    vector <int> V1 = {2, 3, 5, 7, 11, 13, 17, 31, 37, 71, 73, 79, 97};

    bool isCircular(int n) {
        vector <int> digits;
        int num1 = n;
        while (num1 != 0) {
            digits.push_back(num1 % 10);
            num1 /= 10;
        }
        int m = 0;
        int q = digits.size();
    }

    long long int calcAnswer(int N) {
        long long int answer = 0;
        set <int> vis;
        int m = V1.size();
        for (int i = 0; (V1[i] < N) && (i < m); i += 1) {
            
            answer += V1[i];
        }
        for (int i = 101; i < N; i += 2) {
            if (isCircular(i)) {
                answer += i;
            }
        }
        return answer;
    }

};

int main() {
    int N;
    cin >> N;
    SolutionS1 Sol1;
    cout << Sol1.calcAnswer(N) << endl;
}