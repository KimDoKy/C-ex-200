// 일치하는지 확인하기, 숫자 찾기(regex_match, regex_search)
// 정규표현식을 사용해 문자열이 조건과 일치하는지 확인
// 문자열의 숫자를 추출하는 방법

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    // \d : 검색 조건을 숫자로
    // 정규표현식은 R"()" 형태로 표현
    regex re1(R"(\d+)");
    string str1("1234");

    // regex_match(str, re) / 부합하면 true
    bool is_match = regex_match(str1, re1);

    cout << boolalpha;
    cout << "is_match = " << is_match << endl;

    regex re2(R"(\d+)");
    string str2 = "ab 123456 cd ef";

    smatch match_info;
    regex_search(str2, match_info, re2);

    // match_info 에 결과값이 존재하면 .str()으로 문자열로 출력할 수 있음
    cout << "number : " << match_info.str() << endl;

    return 0;
}
