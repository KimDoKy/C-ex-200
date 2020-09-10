// 문자열 일부 교체하기 (replace)
// string.find(find_str) -> find_str의 idx

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "i like coding";
    string find_str = "coding";
    string replace_str = "history";

    sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

    cout << sentence << endl;

    return 0;
}
