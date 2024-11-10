#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long N = 0;
    const long long divid_num = 1000000007;


    cin >> N;


    int calc_loop = 3;

    vector<long long> calc_fibo(3, 1);

    while (calc_loop <= N)
    {
        calc_fibo[2] = calc_fibo[0] + calc_fibo[1];
        calc_fibo[2] %= divid_num;

        calc_fibo[0] = calc_fibo[1];
        calc_fibo[1] = calc_fibo[2];

        calc_loop++;
    }

    cout << calc_fibo[2];

    return 0;
}

