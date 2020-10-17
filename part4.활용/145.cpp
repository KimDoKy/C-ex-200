// pair 사용하기
// 두 개의 자료형을 저장할 수 있음
// 복수의 자료형을 한 곳에서 처리할 수 있음
// 2차원 배열 X, Y 좌표 등 한 쌍으로 이루어진 데이터를 저장하는 용도

#include <iostream>
#include <string>

using namespace std;

int main()
{
    pair<string, int> data("백제 근초고왕", 13);

    cout << data.first << " " << data.second << "대왕" << endl;

    return 0;
}
