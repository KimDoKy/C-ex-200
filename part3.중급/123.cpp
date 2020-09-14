// type_tratis 사용하기 1.(정수, enum, signed)
// 타입 특성을 알아내는 방법
// 타입 트레이츠는 타입의 특성과 변경 기능 등을 검사하는 것
// 특별한 

#include <iostream>

using namespace std;

enum TmpEnum { };
enum class TmpEnumClass : int { };

int main()
{
    // 콘솔에 출력될 결과를 bool으로 설정
    cout << boolalpha;

    cout << "== is_integral ==" << endl;
    cout << is_integral<TmpEnum>::value << endl;
    cout << is_integral<TmpEnumClass>::value << endl;
    cout << is_integral<signed int>::value << endl;
    cout << is_integral<unsigned int>::value << endl;
    cout << is_integral<double>::value << endl;
    cout << is_integral<bool>::value << endl;

    cout << "== is_enum ==" << endl;
    cout << is_enum<TmpEnum>::value << endl;
    cout << is_enum<TmpEnumClass>::value << endl;
    cout << is_enum<int>::value << endl;

    cout << "== is_signed ==" << endl;
    cout << is_signed<TmpEnum>::value << endl;
    cout << is_signed<signed int>::value << endl;
    cout << is_signed<unsigned int>::value << endl;

    cout << "== is_unsigned ==" << endl;
    cout << is_unsigned<TmpEnumClass>::value << endl;
    cout << is_unsigned<int>::value << endl;
    cout << is_unsigned<unsigned int>::value << endl;

    return 0;
}

