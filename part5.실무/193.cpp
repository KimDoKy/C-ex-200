// 시작, 끝 문자로 문자열 찾기(regex_match)
// 특정 문자로 시작하고 끝나는 문자열을 찾는 방법
// 중간에  .* 이 꼭 들어가야 하며, 시작과 끝에는 찾아낼 표현식이 필요

#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
     vector<string> Korea = {
        "Republic of Korea",
        "republic of Korea, since 1945",
        "Republic of korea, since 1945",
        "republic of korea",
        "south Korea, since 1945",
        "south korea",
        "SOUTH KOREA, since 1945",
        "south Korea",
     };

     regex re("(SOUTH|south).*(1945)");

     smatch match_info;

     for (auto i : Korea)
     {
         if (regex_match(i, match_info, re))
             cout << match_info[0] << endl;
     }

     return 0;
}
