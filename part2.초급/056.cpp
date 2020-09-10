// 문자열 대소문자 변환하기 (toupper, tolower)
// 하나의 문자나 문자열 전체를 대소문자로 변환하는 방법
// 문자를 변환하는 함수와 문자열을 변환하는 함수는 다름

#include <iostream>
#include <string>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    string silla = "divided into the Three Kingdoms.";
    string joseon = "Yi Seong-gye, established Joseon in 1392.";

    transform(silla.begin(), silla.end(), silla.begin(), (int(*)(int))toupper);
    transform(joseon.begin(), joseon.end(), joseon.begin(), (int(*)(int))tolower);

    char lower_ch = 'g';
    char upper_ch = 'B';

    lower_ch = toupper(lower_ch);
    upper_ch = tolower(upper_ch);

    cout << "문자열 대문자로 변환: " << silla << endl;
    cout << "문자열 소문자로 변환: " << joseon << endl;
    cout << "문자 대문자로 변환: " << lower_ch << endl;
    cout << "문자 소문자로 변환: " << upper_ch << endl;

    return 0;
}
