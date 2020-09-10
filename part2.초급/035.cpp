// 순환문으로 트정 문자 개수 구하기 (for)
// 문자열에서 특정 알파벳 개수를 구하는 방법
// string 변수의 한 요소는 char이다. 알파벳 한 개의 일치 여부는 char로 비교

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "The Jin state wa formed in southern Korea by the 3rd century BC";

    char find = 'a';

    int size = str.size();
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (str[i] == find)
            count++;
    }

    cout << "문장의 a 개수는 " << count << "개 입니다." << endl;

    return 0;
}
