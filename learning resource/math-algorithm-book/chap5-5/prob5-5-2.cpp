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

int N = 0;
vector<double> a;
vector<double> b;
vector<double> c;


bool check(double x, double y) {

	bool judge = true;

	for (int i = 0; i < N; i++) {
		if (a[i] * x + b[i] * y > c[i]) {
			judge = false;
			break;
		}
	}

	return judge;
}

int main()
{
	double answer = -1e9;


	cin >> N;


	for (int i = 0; i < N; i++) {
		double tmp_a, tmp_b, tmp_c;

		cin >> tmp_a >> tmp_b >> tmp_c;

		a.push_back(tmp_a);
		b.push_back(tmp_b);
		c.push_back(tmp_c);
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {

			double px = 0.0;
			double py = 0.0;

			if (a[i] * b[j] == a[j] * b[i])
				continue;
			else {
				px = (c[i] * b[j] - c[j] * b[i]) / (a[i] * b[j] - a[j] * b[i]);
				py = (c[i] * a[j] - c[j] * a[i]) / (b[i] * a[j] - b[j] * a[i]);

				if (check(px - 0.01, py - 0.01) == true)
					answer = max(answer, px + py);
				//if (check(px, py) == true)
				//answer = max(answer, px + py);
			}
		}
	}

	printf("%.6f\n", answer);

	return 0;
}

