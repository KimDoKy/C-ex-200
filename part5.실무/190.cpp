// 모든 숫자 찾기(regex_search)
// while문에서 regex_search 함수를 반복

#include <iostream>
#include <vector>
#include <regex>
#include <string>

using namespace std;

int main()
{
    regex re(R"(\d+)"); // 숫자를 찾음
    const string str = "12 34ab 56 cd78__ !9 10 ==11";

    vector<string> result;
    auto start = str.begin();
    auto end = str.end();

    smatch  match_info;

    // 검색할 내용이 없을때까지 반복
    while (regex_search(start, end, match_info, re))
    {
        result.push_back(match_info.str());
        start = match_info[0].second;
    }

    for (auto i : result)
        cout << i << ", ";

    return 0;
}

// smatch의 구조
// [0] - 항상 이 위치에 결과 값을 저장
// [0].matched - 값을 찾으면 true
// [0].first - 검색에 이용한 전체 문자열
// [0].second - matched가 true라면 결과값에서 first 문자열을 제외한 나머지 문자열
// ex)
// matched = true
// first - "12 34ab 56 cd78__ !9 10 ==11"
// second - "34ab 56 cd78__ !9 10 ==11"
