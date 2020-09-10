// 문자열 중간에 문자열 추가하기 (insert)

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "i coding";
    sentence.insert(2, "hate ");
    cout << sentence << endl;

    sentence.insert(7, "or like ");
    cout << sentence << endl;

    return 0;
}
