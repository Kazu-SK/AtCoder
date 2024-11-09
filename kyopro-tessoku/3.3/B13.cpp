#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    long long K = 0;


    cin >> N >> K;

    vector<long long> A(N + 1);
    vector<long long> sum(N + 1);


    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        sum[i] += sum[i - 1] + A[i];
    }

    int right = 1;
    long long ans_count = 0;

    for (int left = 0; left <= N; left++) {

        while (right <= N && sum[right] - sum[left] <= K) {
            right++;
        }

        if (left == right) {
            right++;
            //    ans_count += 1;
        }
        else
            ans_count += (right - 1) - left;

    }

    cout << ans_count << endl;

    return 0;
}

