// 첫 번째 결과만 변경하기(regex_replace)
// 검색한 결과 중 첫 번째 부분만 변경하는 방법
// regex_replace에 옵션을 추가

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    regex re1(R"(\S)"); // 공백 문자가 아닌 모든 것
    regex re2(R"(\t)");
    string str = "i like    coding";

    // format_first_only 옵션은 처음 찾아낸 결과만 수정
    string result1 = regex_replace(str, re1, "[$&]", regex_constants::format_first_only);
    string result2 = regex_replace(str, re2, "(Tab)", regex_constants::format_first_only);

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;

    return 0;
}
