// bitset 수정하기, 문자열 변환, 숫자 변환
// 이미 설정된 bitset의 내용을 수정하고 문자열 및 숫자로 변환하는 방법
// set, flip, to_string, to_ulong

#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    bitset<8> data1(1);
    bitset<8> data2(0x01);

    cout << "data1 : " << data1 << endl;
    cout << "data2 : " << data2 << endl;

    // set(idx, value)
    // idx는 뒤에서부터(이진수 0)
    data1.set(0, false);
    data2.set(2, 1);

    cout << endl << "== data1 ==" << endl;
    cout << "data1 : " << data1 << endl;

    data2[4] = false;
    data2.flip(5); // 비트 반전

    cout << endl << "== data2 ==" << endl;
    cout << "data2 : " << data2 << endl;

    string data1_str = data1.to_string(); // bitset을 문자열로 변환
    int data2_int = data2.to_ulong(); // bitset을 정수로 변환
    
    cout << endl << "== 변환 ==" << endl;
    cout << "data1 : " << data1_str << endl;
    cout << "data2 : " << data2_int << endl;

    return 0;
}
