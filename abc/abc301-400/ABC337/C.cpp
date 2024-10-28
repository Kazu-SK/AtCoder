
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;


    vector<int> A(N + 1, 0);
    map<int, int> A_init_pos;

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        A_init_pos[A[i]] = i;
    }


    vector<int> ans(N + 1, 0);

    sort(A.begin(), A.end());

    for (int i = 1; i <= N; i++) {
        
        int search_si = 0;

        if (i == 1)
            search_si = -1;
        else
            search_si = ans[i - 1];

        int pos = lower_bound(A.begin(), A.end(), search_si) - A.begin();

        if (A[pos] == search_si) {
            ans[i] = A_init_pos[A[pos]];
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << ans[i] << " ";
    }

    cout << endl;
    
    return 0;
}

