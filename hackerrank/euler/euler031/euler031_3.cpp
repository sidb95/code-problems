#include <iostream>
#include <set>

using namespace std;

vector <long long int> V1 = {1, 2, 5, 10, 20, 50, 100, 200};

long long int calcAnswer(long long int N, set <long long int>& S1, int m) {
    long long int answer = 0;
    if (S1.size() == 1) {
        return 0;
    }
    else {
        if (N < 0) {
            return 0;    
        }
        else if (N == 1) {
            return 1;
        }
        else {
            long long int Vm = V1[m];
            long long int k = (N / Vm) + 1;
            answer += k;
            S1.erase(Vm);
            answer += calcAnswer(N, S1, m - 1);
        }
    }
    return answer;
}


int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t += 1) {
        long long int N;
        cin >> N;
        set <long long int> S1 = {1, 2, 5, 20, 10, 50, 100, 200};
        cout << calcAnswer(N, S1, 7) << endl;
    }
}