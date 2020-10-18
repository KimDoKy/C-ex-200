// Go- 로 시작하는 단어 찾기 (regex-search)
// 정규표현식을 사용해 특정 문자로 시작하는 단어를 찾는 방법

#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
    string str = "Wang Geon, a descendant of Go-gu-ryeo nobility, deemed the nation as the successor of Go-guryeo";

    smatch match_info;

    // ^공백 : 공백을 제외한 문자
    regex re(" Go-([^ ]*)");

    // suffix는 .second와 똑같음. 찾아낸 문자열을 제외한 나머지
    while (regex_search(str, match_info, re))
    {
        cout << match_info.str() << " " << endl;
        str = match_info.suffix().str();
    }

    return 0;
}
