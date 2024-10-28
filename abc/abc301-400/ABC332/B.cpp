
#include <iostream>

using namespace std;

int main()
{
    int K = 0;
    int G = 0;
    int M = 0;

    cin >> K >> G >> M;


    int G_ml = 0;
    int M_ml = 0;

    for (int k = 1; k <= K; k++) {

        if (G_ml == G) {
            G_ml = 0;
            continue;
        }

        if (M_ml == 0) {
            M_ml = M;
            continue;
        }

        
        int diff_G_ml = abs(G_ml - G);

        if (M_ml >= diff_G_ml) {
            M_ml -= diff_G_ml;
            G_ml += diff_G_ml;
        }
        else {
            G_ml += M_ml;
            M_ml -= M_ml;
        }
    }

    cout << G_ml << " " << M_ml << endl;

    return 0;
}

