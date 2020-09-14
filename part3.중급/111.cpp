// static 클래스 이해하기 (static)
// 전역 변수처럼 사용 가능한 static 클래스
// 단발성 이용이 필요한 기능들을 static 클래스에 모아놓을 수 있다.

#include <iostream>

using namespace std;

static class Calculator
{
public:
    int Plus(const int x, const int y) const
    {
        return x + y;
    }
} calc;

int main()
{
    cout << "1 + 2 = " << calc.Plus(1, 2) << endl;

    return 0;
}
