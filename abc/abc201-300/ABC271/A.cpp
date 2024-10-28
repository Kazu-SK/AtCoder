
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;


string Base10to16(int n) {

    string ans;

    char to16[6] = { 'A','B','C','D','E','F' };

    int waru = 1;
    int i_amari;
    char c_amari;

    if (n == 0) {
        ans = '0';
        return ans;
    }

    while (n) {
    
        i_amari = n % 16;
        n /= 16;

        if (i_amari >= 10) {
            i_amari -= 10;
            c_amari = to16[i_amari];
        }
        else {
            c_amari = i_amari + '0';
        }

        ans.insert(ans.begin(),c_amari);
    }

    return ans;
}


int main()
{
    int N = 0;
    string ans;


    cin >> N;


    ans = Base10to16(N);

    /*
    if (ans.size() == 1) {
        ans.insert(ans.begin(),'0'); //1桁の場合、0を入れて2桁にする。
    }
    */

    cout << ans << endl;


    return 0;
}

