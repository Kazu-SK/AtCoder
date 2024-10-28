
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N = 0;


	cin >> N;

	vector<long long> A(N + 1, 0);
	vector<long long> bus_customer_sum(N + 1, 0);


	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	for (int i = 1; i <= N; i++) {

		bus_customer_sum[i] += A[i] + bus_customer_sum[i - 1];

		if (bus_customer_sum[i] < bus_customer_sum[0]) {
			bus_customer_sum[0] = bus_customer_sum[i];
		}
	}

	bus_customer_sum[0] = abs(bus_customer_sum[0]);

	for (int i = 1; i <= N; i++) {
		bus_customer_sum[i] = 0;
		bus_customer_sum[i] += A[i] + bus_customer_sum[i - 1];
	}

	cout << bus_customer_sum[N] << endl;

	return 0;
}

