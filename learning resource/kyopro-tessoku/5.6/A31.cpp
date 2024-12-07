#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N = 0;
    long long divid_3_ans = 0;
    long long divid_5_ans = 0;
    long long divid_lcm_ans = 0;
    const int lcm3_5 = 15;


    cin >> N;


    divid_3_ans = N / 3;
    divid_5_ans = N / 5;
    divid_lcm_ans = N / lcm3_5;


    cout << divid_3_ans + divid_5_ans - divid_lcm_ans;


    return 0;
}

