// Call by Reference 이해하기
// 함수가 인자의 포인터를 받아 사용한다는 개념
// 인자의 주소를 이용하는 것이 Call by Reference

#include <iostream>
#include <string>

using namespace std;

void Func1(int &arg)
{
    cout << "변경 전: " << arg << endl;
    arg += 10;
    cout << "변경 후: " << arg << endl;
}

void Func2(string &info)
{
    info += "981년";
}

int main()
{
    int year = 10;

    Func1(year);

    cout << "Func1 함수 종료 후: " << year << endl;

    string king_info = "고려 성종 즉위년: ";

    Func2(king_info);

    cout << king_info << endl;

    return 0;
}
