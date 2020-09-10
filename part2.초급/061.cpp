// 문자열에서 특정 문자만 제거하기 (erase, remove)
// 문자열에서 임의의 문자만 제거하는 방법
// remove함수는 특정 문자가 있는 모든 인덱스를 러턴함
// remove(start, end, find_str) -> find_str.indx

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "i like coding";

    sentence.erase(remove(sentence.begin(), sentence.end(), ' '), sentence.end());

    cout << sentence << endl;

    return 0;
}
