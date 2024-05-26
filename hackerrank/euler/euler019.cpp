/*
euler019
bhatoresiddharth@gmail.com
sidb95
26 May 2024
*/

#include <vector>
#include <iostream>

using namespace std;

vector <int> SET_DAYS = {
    31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
};

long long int calcAnswer(long long int Y1, int M1, int D1, long long int Y2, 
int M2, int D2, int m, int d);

bool isLeapYear(long long int Y) {
    int febDays;
    if ((year % 100) == 0) {
        if ((year % 400) == 0) {
            febDays = 29;
        }
        else {
            febDays = 28;
        }
    }
    else if ((year % 4) == 0) {
        febDays = 29;
    }
    else {
        febDays = 28;
    }
    return (febDays == 29);
}

int noLeapYears(long long int Y1, long long int Y2) {
    int year;
    int answer = 0;
    for (year = Y1; year <= Y2; year += 1) {
        if (isLeapYear(year)) {
            answer += 1;
        }
    }
    return answer;
}

// returns number of days till date from the
// start of the year
int calcDays2(long long int Y, int M, int D) {
    int answer = 0;
    for (int i = 1; i <= M - 1; i++) {
        if (i == 2) {
            if (isLeapYear(Y)) {
                answer += 29;
            }
            else {
                answer += SET_DAYS[1];
            }
        }
        else {
            answer += SET_DAYS[i - 1];
        }
    }
    answer += D;
    return answer;
}

int dayThisDate(long long int Y, int M, int D) {
    long long int days = 0;
    for (long long int year = 1900; year < Y; year += 1) {
        days += calcDays2(year, 12, 31)
    }
    days += calcDays2(Y, M, D);
    return (days + 1) % 7;
}

int noMonthlySunday(long long int Y1, int M1, int D1, long long int Y2, int M2, 
int D2) {
    answer = 0;
    for (int year = Y1 + 1; year < Y2; year += 1) {
        for (int month = 1; month <= 12; month += 1) {
            if (dayThisDate(year, month, 1) == 0) {
                answer += 1;
            }
        }
    }
    for (int i = M1; i <= 12; i++) {
        if (dayThisDate(Y1, i, 1) == 0) {
            answer += 1;
        }
    }
    for (int i = 1; i <= M2; i++) {
        if (dayThisDate(Y2, i, 1) == 0) {
            answer += 1;
        }
    }
    return answer;
}

int calcAnswer(long long int Y1, int M1, int D1, long long int Y2, int M2, 
int D2) {
    return noMonthlySunday(Y1, M1, D1, Y2, M2, D2);
}

int main() {
    int t, T;
    cin >> T;
    for (t = 0; t < T; t++) {
        long long int Y1, Y2;
        int M1, M2, D1, D2;
        cin >> Y1 >> M1 >> D1 >> Y2 >> M2 >> D2;
        cout << calcAnswer(Y1, M1, D1, Y2, M2, D2) << endl;
    }
    return 0;
}
