// 문자열 비교하기 (string.compare)
// string 문자열 변수를 비교하는 방법
// string.compare는 같은 문자열이면 0, 다르면 -1을 리턴함

#include <iostream>

using namespace std;

int main()
{
    string seven_war = "임진왜란";
    string korea_war = "한국전쟁";

    if (seven_war.compare(korea_war) == 0)
        cout << "같은 문자열입니다\n";
    else
        cout << "다른 문자열입니다\n";
      

    return 0;
}
