#include <iostream>
#include <unordered_map>

using namespace std;

long long int sumMultiples(long long int n) {
    long long int answerSum = 0;
    n = n - 1;
    //
    answerSum = (((n / 3) * (n / 3 + 1)) / 2) * 3 + 
    (((n / 5) * (n / 5 + 1)) / 2) * 5 -
    (((n / 15) * (n / 15 + 1))/ 2 ) * 15;
    //
    return answerSum;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        cin >> n;
        cout << sumMultiples(n) << endl;
    }
    return 0;
}
