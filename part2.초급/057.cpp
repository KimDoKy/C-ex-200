// 문자열 합치기 (+=)
// string은 내부 버퍼를 가지고 있어 가변 길이 문자열 처리가 가능
// append, insert, push_back 함수로도 추가 가능
// string.append("ABC", 1, 2)처럼 문자열 일부만 추출하여 추가 가능
// string.insert(0, "ABC", 1, 2)처럼 추가할 영역, 추가할 문자열 범위 등을 설정할 수 있음

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string king = "조선 세종";
    string favorite1 = "고기";
    string favorite2 = "야근";

    string king_info = "";

    king_info += king;
    king_info += "은 ";
    king_info += favorite1;
    king_info.append("와 ");
    king_info.append(favorite2);
    king_info.append("을 좋아했습니다.");

    cout << king_info << endl;

    return 0;
}
