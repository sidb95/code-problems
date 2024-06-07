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
};

int main() {
    return 0;
}
