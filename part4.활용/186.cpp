// 두 숫자의 차이를 확인하기(fdim)
// 오버플로우를 방지할 수 있는 숫자 차이 방법
// x > y라면 x - y가 반환되지만, x < y라면 0이 반환

#include <iostream>

using namespace std;

int main()
{
    cout << fdim(-1.0, 0.0) << endl;
    cout << fdim(1.0, 0.0) << endl;
    cout << fdim(0.0, 0.0) << endl;
    cout << fdim(5, 1) << endl;
    cout << fdim(6, 15) << endl;
    cout << fdim(4.9, 1.1) << endl;
    cout << fdim(5.9, 20.1) << endl;

    return 0;
}
