// Json 원하는 자료형으로 읽기 (get, as)
// as ...() 함수는 총 9개가 지원

#include <fstream>
#include <iostream>
#include "json/json.h"

using namespace std;
using namespace Json;

int main()
{
    ofstream json_write;
    json_write.open("json_exam3.json");

    Value root;
    root["Title"] = "convert Exam";
    root["IsJson"] = true;

    Value numbers;
    numbers["No1"] = 12;
    numbers["No2"] = 20.3;

    root["Array"]["Number"] = numbers;

    json_write << root;
    json_write.close();

    ifstream json_open("json_exam3.json");
    Reader reader;
    Value value;
    reader.parse(json_open, value);

    // get 함수로 No1 오브젝트를 읽는데, 실패하면 -1을 int
    cout << value["Array"]["Number"].get("No1", -1).asInt() << endl;
    cout << value["Array"]["Number"].get("No2", -1).asDouble() << endl;
    cout << value["Array"]["Number"].get("No1", "Empty").asString() << endl;
    cout << value.get("IsJson", false).asBool() << endl;

    return 0;
}
