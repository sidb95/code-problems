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

// checks if the year is leap year
bool isLeapYear(long long int year) {
    int febDays = 28;
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

// returns number of days till date from the
// start of the year
int calcDays2(long long int Y, int M, int D) {
    int answer = 0;
    bool FLAG = true;
    // adds number of days per month
    for (int i = 1; i < M; i++) {
        if (i == 1) {
            if (M != 1) {
                answer += SET_DAYS[0];
            }
        }
        else if (i == 2) {
            if (M != 2) {
                answer += (isLeapYear(Y))? 29 : 28;
            }
        }
        else {
            answer += SET_DAYS[i - 1];
        }
    }
    answer += (D);
    return answer;
}

// return (0, 6), set member for the given date
bool dateSunday(long long int Y, int M, int D) {
    long long int days = 0;
    for (long long int year = 1900; year < Y; year += 1) {
        if (isLeapYear(year)) {
            days += 366;
        }
        else {
            days += 365;
        }
    }
    days += calcDays2(Y, M, D);
    return ((days) % 7 == 0);
}
//
// helper function to ```noMonthlySunday```

//return answer partly calc b/w ```Y1```, ```Y2```
int noMonthlySundayAux1(long long int Y1, long long int Y2) {
    int answer = 0;
    for (int year = Y1 + 1; year < Y2; year += 1) {
        for (int month = 1; month <= 12; month += 1) {
            if (dateSunday(year, month, 1)) {
                answer += 1;
            }
        }
    }
    return answer;
}

// return answer partly where calc ```Y1```
int noMonthlySundayAux2(long long int Y1, int M1, int D1, bool FLAG, 
int M2) {
    int answer = 0;
    for (int i = M1; i <= (!(FLAG)? M2 : 12); i += 1) {
        if (i == M1) {
            if (D1 == 1) {
                if (dateSunday(Y1, M1, 1)) {
                    answer += 1;
                }
            }
        }
        else {
            if (dateSunday(Y1, i, 1)) {
                answer += 1;
            }
        }
    }
    return answer;
}

// return answer partly where we calc ```Y2```
int noMonthlySundayAux3(long long int Y2, int M2, int D2, bool FLAG) {
    int answer = 0;
    if (FLAG) {
        for (int i = 1; i <= M2; i += 1) {
            if (i == M2) {
                if (dateSunday(Y2, i, 1)) {
                    answer += 1;
                }
            }
            else {
                if (dateSunday(Y2, i, 1)) {
                    answer += 1;
                }
            }
        }
    }
    return answer;
}

// answer to the question taking two dates
int noMonthlySunday(long long int Y1, int M1, int D1, long long int Y2, int M2, 
int D2) {
    int answer = 0;
    answer += noMonthlySundayAux1(Y1, Y2) + 
    noMonthlySundayAux2(Y1, M1, D1, !(Y1 == Y2), M2);
    answer += noMonthlySundayAux3(Y2, M2, D2, !(Y1 == Y2));
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
