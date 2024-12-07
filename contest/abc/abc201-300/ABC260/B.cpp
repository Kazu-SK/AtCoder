
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using LL = long long;

int main()
{
    int N = 0, X = 0, Y = 0, Z = 0;


    cin >> N >> X >> Y >> Z;

    vector<int> A(N);
    vector<int> B(N);
    vector<int> S(N);
    vector<int> num(N);
    vector<int> ans;


    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> B[i];
        S[i] = A[i] + B[i];
        num[i] = i + 1;

    }

    for (int i = 0; i < A.size() - 1; i++) {
        for (int j = i + 1; j < A.size(); j++) {

            int tmp = 0;

            if (A[i] < A[j] || (A[i] == A[j] && num[i] > num[j])) {
                
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;

                tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;

                tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;

                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (int i = 0; i < X; i++) {
        A.erase(A.begin());
        B.erase(B.begin());
        S.erase(S.begin());
        
        ans.push_back(num[0]);
        num.erase(num.begin());
    }


    for (int i = 0; i < B.size() - 1; i++) {
        for (int j = i + 1; j < B.size(); j++) {

            int tmp = 0;

            if (B[i] < B[j] || (B[i] == B[j] && num[i] > num[j])) {
                
                tmp = B[i];
                B[i] = B[j];
                B[j] = tmp;

                tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;

                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }


    for (int i = 0; i < Y; i++) {
        B.erase(B.begin());
        S.erase(S.begin());
        
        ans.push_back(num[0]);
        num.erase(num.begin());
    }


    for (int i = 0; i < S.size() - 1; i++) {
        for (int j = i + 1; j < S.size(); j++) {

            int tmp = 0;

            if (S[i] < S[j] || (S[i] == S[j] && num[i] > num[j])) {
                
                tmp = S[i];
                S[i] = S[j];
                S[j] = tmp;

                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    for (int i = 0; i < Z; i++) {
        S.erase(S.begin());
        
        ans.push_back(num[0]);
        num.erase(num.begin());
    }


    sort(ans.begin(), ans.end());

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}

