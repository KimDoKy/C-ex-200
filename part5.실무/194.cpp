// 문자열의 모든 단어 찾기(regex_iterator)
// 문자열의 모든 단어를 찾되 숫자로만 이뤄진 것은 단어로 인식하지 않는 방법

#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string str = "Jolbon Buyeo was the predecessor to Goguryeo, and in 538, Baekje renamed itself Nambuyeo (South Buyeo)";

    regex re("([A-Za-z]+)");

    // sregex_iterator는 문자열의 처음과 끝을 분리하여 내부에 보유하는 반복자
    // 내부적으로 정규표현식과 일치하는지, 일치하는 지점의 인덱스는 어디인지도 보유
    // 인자가 없다면 무조건 end 위치를 가리킴
    auto start = sregex_iterator(str.begin(), str.end(), re);
    auto end = sregex_iterator();

    cout << "== 단어 개수 : " << distance(start, end) << " ==" << endl;

    for (sregex_iterator i = start; i != end; ++i)
        cout << i->position() << ", " << i->str() << endl;

    return 0;
}
