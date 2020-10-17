// tuple 사용하기 (sizeof)
// 튜플의 크기를 계산
// sizeof를 이용할 수 있는데, 다른 자료형과 크기 계산 방법이 다름
// 가장 큰 자료형 * 인자 개수 = 튜플 크기

#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
    tuple<int> data1(1);
    tuple<int, double> data2(1, 2.3);
    tuple<int, double, char> data3(1, 2.3, 'a');

    cout << sizeof(data1) << ", " << sizeof(data2) << ", " << sizeof(data3) << endl;

    return 0;
}
