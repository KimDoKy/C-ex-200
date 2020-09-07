// 함수 배우기 ()
// 어떤 목적을 이유로 구현하는 코드 집합
// 기능별로 분리하여 사용

#include <iostream>

using namespace std;

void Minus(const int x, const int y)
{
    cout << "x - y = " << x - y << endl;
}

int Plus(const int x, const int y)
{
    return x + y;
}

int main()
{
    Minus(10, 5);

    cout << "x + y = " << Plus(2, 6) << endl;

    return 0;
}
