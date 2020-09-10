// 문자열을 정수로 변환하기 (stoi)
// C++11 이상에서 지원하는 stoi(C++) 또는 atoi(C)를 이용
// 문자열과 섞여 있다면 문자열은 제거된 정수로 변환

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "10";
    string str2 = "2.456";
    string str3 = "456 문자열";

    int num1 = stoi(str1);
    int num2 = stoi(str2);
    int num3 = stoi(str3);

    cout << num1 << ", " << num2 << ", " << num3 << endl;

    return 0;
}
