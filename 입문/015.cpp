// 스코핑룰 이해하기
// {}
// 변수를 사용하기 위한 규칙으로 변수의 유효 범위를 의미
// 같은 이름의 변수라도 영역에 따라 값이 달라질 수 있음

#include <iostream>

using namespace std;

int x = 10;

int Func1()
{
    int y = x + 10;
    return y;
}

int Func2()
{
    int x = 100;
    return x;
}

int main()
{
    cout << "y = " << Func1() << endl;
    cout << "x = " << Func2() << endl;
    cout << "x = " << x << endl;

    return 0;
}
