
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{

    int alfa[5];
    set<int> s;


    for (int i = 0; i < 5; i++){
        cin >> alfa[i];
        s.insert(alfa[i]);
    }


    cout << s.size() << endl;

    return 0;
}

