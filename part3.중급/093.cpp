// 파일을 한 줄씩 읽기 (ifstream, get)
// 파일을 한 문자씩 읽어 출력하는 방법

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream read;

    // ifstream::in 열기 모드
    read.open("093.txt", ifstream::in);

    char line = read.get();

    while (read.eof() == false)
    {
        cout << line;

        line = read.get();
    }

    cout << endl;

    read.close();

    return 0;
}
