// 문자열 일부 지우기 (erase)
// string.srase(start_idx, count)

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence = "i hate coding";

    sentence.erase(0, 7);

    cout << "i like " << sentence << endl;

    return 0;
}
