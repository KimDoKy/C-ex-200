// 날짜와 시간을 문자열로 변환하기 (localtime)
// strftime 함수를 사용

#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    time_t now = time(NULL);
    tm* ptm = localtime(&now);

    char buffer[124];
    strftime(buffer, 124, "예제 만드는 지금은 %Y년 %m월 %d일, %H시 %M분 %S 초입니다.(%p)\n", ptm);

    cout << buffer;

    return 0;
}

// tm 구조체 구성
// - int tm_sec; // seconds after the minute - [0, 60] including leap second
// - int tm_min; // minutes after the hour - [0, 59]
// - int tm_hour; // hour sice midnight - [0, 23]
// - int tm_mday; // day of the month - [1, 31]
// - int tm_mon; // months since January - [0, 11]
// - int tm_year; // years since 1900
// - int tm_wday; // days since Sunday - [0, 6]
// - int tm_yday; // days since Juanuary 1 - [0, 365]
// - int tm_isdst; // daylight savings time flag
