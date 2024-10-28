
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0, M = 0;



    cin >> N >> M;


    vector<char> S(N + 1, '-');

    for (int i = 1; i <= N; i++) {
        cin >> S[i];
    }


    int kyopuro_count = 0;
    int eat_count = 0;

    int bring_logo_Tshirt = 0;
    int rem_logo_Tshirt = 0;
    int bring_none_Tshirt = M;

    for (int i = N; i >= 0; i--) {

        if (S[i] == '1')eat_count++;
        if (S[i] == '2')kyopuro_count++;

        if (S[i] == '0' || i == 0) {

            bring_logo_Tshirt = max(kyopuro_count, bring_logo_Tshirt);
            rem_logo_Tshirt = bring_logo_Tshirt - kyopuro_count;

            if (rem_logo_Tshirt + bring_none_Tshirt < eat_count) {
                bring_logo_Tshirt += eat_count - (rem_logo_Tshirt + bring_none_Tshirt);
            }

            rem_logo_Tshirt = 0;
            eat_count = 0;
            kyopuro_count = 0;
        }
    }

    cout << bring_logo_Tshirt + bring_none_Tshirt - M << endl;

    return 0;
}

