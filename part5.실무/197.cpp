// Json 파일 내용 읽기(Reader.parse)
// json 파일을 읽어 출력하는 방법
// parse 함수의 반환값은 bool, 인자 Value에 요소가 저장됨

#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
    // json 파일을 읽을땐 Reader를 이용함
    // 읽은 데이터는 Value에 저장됨
    // 유효한 json 파일이라면 true을 반환
    ifstream json_dir("json_exam.json");
    Reader reader;
    Value value;

    bool is_parse = reader.parse(json_dir, value);

    if (is_parse == true)
    {
        cout << "Job1 : " << value["Job1"] << endl;
        cout << "SubItems Sub1 : " << value["SubItems"]["Sub1"] << endl;
    }
    else
    {
        cout << "Json 파일을 읽을 수 없습니다." << endl;
    }

    return 0;
}

// C++ json 라이브러리
// Jsoncpp, RapidJson, JSON Spirit, cJSON 등
