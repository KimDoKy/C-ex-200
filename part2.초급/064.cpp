// 문자열을 숫자로 변환하기 (stringstream)
// 문자열을 정수, 실수로 변경
// eof() -> 문자열의 끝에 다가가면 true / 그외엔 false
// ignore() -> 버퍼 비우기
// stringstream은 문자열을 cin 으로 입력 받드시 입력으로 받음(stream)

#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    stringstream ss;

    double number1 = 0.0;

    ss << "1.2,2.6-3.8!4.7=8.9";

    cout << "== string to double ==" << endl;
    while (!ss.eof())
    {
        ss >> number1;
        ss.ignore();

        cout << number1 << ", ";
    }



    ss.clear();  // 초기화
    ss.str("");
    ss << "1," << "2" << 3 << " " << 4;

    int number2 = 0;

    cout << endl << "== string to int ==" << endl;
    while (!ss.eof())
    {
        ss >> number2;
        ss.ignore();

        cout << number2 << ", ";
    }

    return 0;
}
