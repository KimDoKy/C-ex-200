// 조건에 모든 요소가 맞는지 검사하기(all_of)
// 컨테이너의 모든 데이터를 조회해 특정 조건에 모두 부합한지 알아내는 방법
// all_of 함수와 람다, 컨테이너를 함께 사용

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<int> data1 = { 1, 3, 5, 7 };
    vector<string> data2 = { "ab" , "cd", "ef" };

    if (all_of(data1.begin(), data1.end(), [](int i){ return i % 2; }))
        cout << "data1 : 모두 홀수입니다." << endl;

    if (all_of(data1.begin(), data1.end(), [](int i){ return i <10; }))
        cout << "data1 : 모두 10보다 작습니다." << endl;

    if (all_of(data2.begin(), data2.end(), [](string i){ return i.length() <4 ? true : false; }))
        cout << "data2 : 모두 길이가 4 이하입니다." << endl;

    if (all_of(data2.begin(), data2.end(), [](string i){ return i.find('A'); }))
        cout << "data2: 모두 문자 A를 포함하지 않습니다." << endl;

    return 0;
}
