
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;
    int P = 0;
    int Q = 0;


    cin >> N >> P >> Q;


    vector<int> D(N, 0);


    int D_min = 1e7;
    for (int i = 0; i < N; i++) {
        cin >> D[i];

        D_min = min(D[i], D_min);
    }



    if (P < D_min + Q) {
        cout << P << endl;
    }
    else {
        cout << D_min + Q << endl;;
    }



    return 0;
}

