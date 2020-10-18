// bitset 비트 연산하기 ( |, &, ^, <<, >> )

#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    bitset<4> data1(6);  // 0110
    bitset<4> data2(0x09); // 1001

    auto result = data1 | data2;  // OR
    cout << "data1 | data2 = " << result << endl;

    result = data1 & data2; // AND
    cout << "data1 & data2 = " << result << endl;

    result = data1 ^ data2;  // XOR
    cout << "data1 ^ data2 = " << result << endl;

    result = data1 << 1;
    cout << "data << 1 = " << result << endl;

    result = data1 >> 1;
    cout << "data >> 1 = " << result << endl;

    result = ~data1;
    cout << "~data1 = " << result << endl;

    return 0;
}
