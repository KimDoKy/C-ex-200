// tuple 사용하기 (make tuple, get)
// 여러 자료형 데이터를 저장할 수 있음
// 다수의 자료형을 한 곳에 처리할 수 있음
// 튜플에 담겨있는 데이터는 get으로 가져올 수 있음
// <> 를 이용해 인텍스 번호를 넣어 가져옴

#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main()
{
    typedef tuple<string, int, double> Data;

    Data data1("문자열", 10, 1.2);
    auto data2 = make_tuple("문자열", 10, 1.2);

    cout << get<0>(data1) << ", " << get<1>(data1) << ", " << get<2>(data1) << endl;

    return 0;
}
