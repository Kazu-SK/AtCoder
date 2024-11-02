#include <iostream> 
#include <vector> 
#include <algorithm>

using namespace std;

int main()
{
    int N = 0, X = 0;


    cin >> N >> X;


    vector<int> A(N, 0);


    for (int i = 1; i < N; i++) 
       cin >> A[i];

    sort(A.begin(), A.end());

    int L_sum = 0;
    int R_sum = 0;
    int M_sum = 0;

    for (int i = 1; i < N - 1; i++) {
        L_sum += A[i];
    }

    for (int i = 2; i < N; i++) {
        R_sum += A[i];
    }

    for (int i = 2; i < N - 1; i++) {
        M_sum += A[i];
    }

    int ans = 10000;
    int sum = 0;

    for (int score = 0; score <= 100; score++) {

        sum = 0;
        
        if (score < A[1])
            sum = L_sum;

        if (score >= A[1] && score <= A[N-1])
            sum = score + M_sum;

        if (score > A[N-1])
            sum = R_sum;

        if (sum >= X)
            ans = min(ans, score);
    }


    if (ans == 10000)
        cout << -1 << endl;
    else
        cout << ans << endl;

 return 0;
}
 