#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int Q = 0;
    map<string, int> Map;


    cin >> Q;


    string student_name;
    int student_point = 0;
    int query_type = 0;

    for (int i = 0; i < Q; i++) {

        cin >> query_type >> student_name;

        if (query_type == 1) {
            cin >> student_point;
            Map[student_name] = student_point;
        }

        if (query_type == 2) {
            cout << Map[student_name] << endl;
        }

        query_type = 0;
        student_name = "";
    }


    return 0;
}

