// 문자열 정렬하기 (sort)
// 문자열을 알파벳 순으로 정렬
// ... vector는 되나, string 자체는 안됨...

#include <iostream>
#include <string>

#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    string sort_str1 = "gojoseon";
    string sort_str2 = "AaBbCcDdEe";
    /*
    vector<char> v;
    v.push_back('g');
    v.push_back('o');
    v.push_back('j');
    v.push_back('o');
    sort(v.begin(), v.end());
    */

    sort(sort_str1.begin(), sort_str2.end());
    sort(sort_str2.begin(), sort_str2.end());

    cout << "소문자만 정렬: " << sort_str1 << endl;
    cout << "대소문자 정렬: " << sort_str2 << endl;

    /*
    for (int i = 0; i < 4; i++)
        cout << v[i] << endl;
    */

    return 0;
}
