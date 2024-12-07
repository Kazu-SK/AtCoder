
#include <iostream>
#include <vector>

#include <map>

using namespace std;

int main()
{
    
    map<string, int> Map;

    string S;

    Map["tourist"] = 3858;
    Map["ksun48"] = 3679;
    Map["Benq"] = 3658;
    Map["Um_nik"] = 3648;
    Map["apiad"] = 3638;
    Map["Stonefeang"] = 3630;
    Map["ecnerwala"] = 3613;
    Map["mnbvmar"] = 3555;
    Map["newbiedmy"] = 3516;
    Map["semiexp"] = 3481;


    cin >> S;


    cout << Map[S] << endl;


    return 0;
}

