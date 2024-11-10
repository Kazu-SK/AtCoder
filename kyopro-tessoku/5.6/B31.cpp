#include <iostream>
#include <vector>


using namespace std;

int main()
{

    long long N = 0;
    long long divid_3_ans = 0;
    long long divid_5_ans = 0;
    long long divid_7_ans = 0;
    long long divid_lcm3_5 = 0;
    long long divid_lcm3_7 = 0;
    long long divid_lcm5_7 = 0;
    long long divid_lcm3_5_7 = 0;

    long long lcm3_5 = 15;
    long long lcm3_7 = 21;
    long long lcm5_7 = 35;
    long long lcm3_5_7 = 105;

    long long q_ans = 0;

    cin >> N;


    divid_3_ans = N / 3;
    divid_5_ans = N / 5;
    divid_7_ans = N / 7;
    divid_lcm3_5 = N / lcm3_5;
    divid_lcm3_7 = N / lcm3_7;
    divid_lcm5_7 = N / lcm5_7;
    divid_lcm3_5_7 = N / lcm3_5_7;

    q_ans = divid_3_ans + divid_5_ans + divid_7_ans - divid_lcm3_5 - divid_lcm3_7 - divid_lcm5_7 + divid_lcm3_5_7;

    cout << q_ans << endl;

    return 0;
}

