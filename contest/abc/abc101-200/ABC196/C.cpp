
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

int main(){

	LL N;


	cin >> N;

	for(LL i = 1; i <= 1e7 ; i++){

		if (stoll(to_string(i) + to_string(i)) > N) {
			cout << i - 1 << endl;
			return 0;
		}
	}
}
