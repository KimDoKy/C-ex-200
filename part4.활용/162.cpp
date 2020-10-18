// bitset 초기화 방법, 비트 상태 조회하기
// 고정된 크기의 비트열을 쉽게 다룰 수 있는 bitset
// bitset은 0과 1로 이루어진 비트의 모음

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    bitset<8> data1(100);
    bitset<8> data2(0x78);
    bitset<8> data3(string("11110000"));

    cout << "data1 : " << data1 << endl;
    cout << "data2 : " << data2 << endl;
    cout << "data3 : " << data3 << endl;

    data1.set(); // 모든 비트를 1로 설정

    // all: 모든 비트가 1이면 true
    // any: 하나의 비트만 1이어도 true
    // none: 모든 비트가 0이면 true
    cout << endl << "== data1 ==" << endl;
    cout << "data1 all: " << data1.all() << '\n';
    cout << "data1 any: " << data1.any() << '\n';
    cout << "data1 none: " << data1.none() << '\n';

    data2.reset(); // 모든 비트를 0으로 설정

    cout << endl << "== data2 ==" << endl;
    cout << "data2 all: " << data2.all() << '\n';
    cout << "data2 any: " << data2.any() << '\n';
    cout << "data2 none: " << data2.none() << '\n';

    return 0;
}
