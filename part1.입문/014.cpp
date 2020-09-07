// #include 배우기
// 다양한 기능을 사용하기 위해 라이브러리 참조 방법
// 미리 작성된 코드를 참조하여 사용

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> exam;
    exam.push_back(10);
    exam.push_back(20);
    exam.push_back(30);

    for (int i = 0, size = exam.size(); i < size; i++)
    {
        cout << "벡터 값: " << exam.at(i) << endl;
    }

    return 0;
}
