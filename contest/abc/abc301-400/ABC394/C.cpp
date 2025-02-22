#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int main()
{
	string S;


	cin >> S;


	int i = S.size() - 1;

	while(i >= 1){
		if (S[i -  1] == 'W' && S[i] == 'A') {

			S[i] = 'C';
			S[i - 1] = 'A';
		}
		else {
		}

		i--;

	}

	cout << S << endl;

	return 0;
}

