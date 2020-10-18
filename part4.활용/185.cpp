// 좌변이 우변보다 작은지 확인하기(isless)
// isless 함수는 다른 자료형의 데이터도 비교할 수 있음

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    double a = 12.2;
    double b = 5.6;

    cout << boolalpha;
    cout << isless(20, 11) << endl;
    cout << isless(x, y) << endl;
    cout << isless(a, b) << endl;
    cout << isless(x, b) << endl;

    return 0;
}
