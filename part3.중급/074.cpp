// Call by Value 이해하기
// 함수는 인자를 받을 때 복사해서 사용한다는 개념
// 인자 값을 직접 복사해서 사용하는 것이 Call by Value

#include <iostream>

using namespace std;

void Func(int arg)
{
    cout << "변경 전: " << arg << endl;
    arg += 10;
    cout << "변경 후: " << arg << endl;
}

int main()
{
    int year = 10;

    Func(year);

    cout << "함수 종료 후 : " << year << endl;

    return 0;
}
