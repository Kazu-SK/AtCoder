
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
    int A, B, C, D, E, F, X;
	int init_X = 0;


    cin >> A >> B >> C >> D >> E >> F >> X;

	init_X = X;

    //Takahashi
    int takahashi = 0;

	takahashi += B * A * (X / (A + C));
	X %= A + C;

	if (X < A) {
		takahashi += B * X;
	}
	else {
		takahashi += B * A;
	}

    int aoki = 0;
	X = init_X;

	aoki += E * D * (X / (D + F));
	X %= D + F;

	if (X < D) {
		aoki += E * X;
	}
	else {
		aoki += E * D;
	}

    if (aoki > takahashi)
        cout << "Aoki";

    if (takahashi > aoki)
        cout << "Takahashi";

    if (aoki == takahashi)
        cout << "Draw";

    return 0;
}

