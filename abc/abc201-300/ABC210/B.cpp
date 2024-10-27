
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
    
    int N = 0;


    cin >> N;


    vector<char> S(N);


    for (int i = 0; i < N; i++)
        cin >> S[i];


    int card = 1;

    while (card <= N) {

        if (S[card - 1] == '1')
            break;

        card++;
    }


    if (card % 2 == 1)
        cout << "Takahashi" << endl;
    else {
        cout << "Aoki" << endl;
    }

    return 0;
}

