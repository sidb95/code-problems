#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;

class SolutionS1 {
public:
    map <int, long long int> M1;
    vector <long long int> V1 = {};

    SolutionS1() {
        for (int i = 0; i <= 9; i += 1) {
            V1.push_back(factorial(i));
        }
    }

    long long int factorial(long long int N) {
        if (M1.find(N) != M1.end()) {
            return M1[N];
        }
        if (N == 0) {
            M1[0] = 1;
            return 1;
        }
        else {
            M1[N] = N * factorial(N - 1);
            return M1[N];
        }
    }

    long long int calcAnswer(long long int N) {
        long long int sum = 0, answer = 0, num1;
        for (long long int i = 10; i < N; i += 1) {
            num1 = i;
            while (num1 != 0) {
                sum += V1[num1 % 10];
                num1 /= 10;
            }
            if(sum % i == 0) {
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
