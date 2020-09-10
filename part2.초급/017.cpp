// 문자열형 변수 이해하기(string)
// 문자열 변수를 선언하여 사용하는 방법
// 문자열은 string 변수를 사용하는 편이 효율적

#include <string>
#include <iostream>

using namespace std;

int main()
{
    string my_country = "korea";
    string my_job = "developer";

    cout << "Country : " << my_country << endl;
    cout << "Job : " << my_job << endl;

    string my_info = my_country + ", " + my_job;

    cout << "My info : " << my_info << endl;

    return 0;
}
