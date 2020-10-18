// R 또는 r로 시작하는 문자열 찾기(regex_match)
// 특정 문자로 시작하는 문자열 찾는 방법
// [Rr]은 R 또는 r을 의미

#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
    vector<string> Korea = {
        "Republic of Korea",
        "republic of Korea",
        "Republic of korea",
        "republic of korea",
        "South Korea",
        "south korea",
        "South korea",
        "south Korea",
    };

    regex re("([Rr]epublic)\\s.*");

    smatch match_info;

    for (auto i : Korea)
    {
        // regex_match(str, smatch, re)
        if (regex_match(i, match_info, re))
            cout << match_info[0] << endl;
    }

    return 0;
}
