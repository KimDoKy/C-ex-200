// 인라인 함수 사용하기 (inline)
// 프로그램 성능을 올리기 위해 도입됨
// 자주 호출되는 함수는 inline으로 선언하는 것이 좋음

// 함수 호출은 비용(cost)이 많이 발생하는데, 즉 프로그램 성능 저하를 의미
// 자주 사용되는 코드가 짧은 함수는 인라이닝하는 것이 좋음
#include <iostream>

using namespace std;

inline int Max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    for (int i = 0; i < 5; i++)
        cout << Max(i, i + 10) << endl;

    return 0;
}
