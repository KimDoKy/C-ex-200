// 문자열 일부 변경하기 (regexreplace)
// 정규표현식을 사용해 문자열 일부를 변경하는 방법

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    regex re1(R"(l|i|k|e)");
    regex re2(R"(\D)");  // 숫자를 제외한 문자
    regex re3(R"(\s)");  // 공백 문자만
    string str = "i like coding";

    string result1 = regex_replace(str, re1, "[$&]"); // $&: 찾아낸 문자
    string result2 = regex_replace(str, re1, "*");
    string result3 = regex_replace(str, re2, "_$&_");
    string result4 = regex_replace(str, re3, "(space)");

    cout << "result1 : " << result1 << endl;
    cout << "result2 : " << result2 << endl;
    cout << "result3 : " << result3 << endl;
    cout << "result4 : " << result4 << endl;

    return 0;
}
