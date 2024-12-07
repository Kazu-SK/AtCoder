#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

int main()
{
    string S;
    map<string, int> Map;


    Map["Monday"] = 1;
    Map["Tuesday"] = 2;
    Map["Wednesday"] = 3;
    Map["Thursday"] = 4;
    Map["Friday"] = 5;
    Map["Saturday"] = 6;

    cin >> S;


    cout << Map["Saturday"] - Map[S] << endl;


    return 0;
}

