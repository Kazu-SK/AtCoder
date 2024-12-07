#include <iostream>
#include <vector> 

using namespace std;

int main()
{
	int N = 0;
	const int box_num = 1502;
	const int x_range = 1500;
	const int y_range = 1500;


	cin >> N;

	vector<int> x(N, 0);
	vector<int> y(N, 0);
	vector<vector<int>> coordinate(box_num, vector<int>(box_num, 0));


	for (int i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
		coordinate.at(x[i]).at(y[i])++;
	}

	/*
	for (int i = 1; i <= y_range; i++) {
		for (int j = 1; j <= x_range; j++) {
			cout << coordinate.at(i).at(j) << "\t";
		}
		cout << endl;
	}
	*/

	int Q = 0;


	cin >> Q;

	vector<int> a(Q, 0);
	vector<int> b(Q, 0);
	vector<int> c(Q, 0);
	vector<int> d(Q, 0);

	for (int i = 0; i < Q; i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}

	vector<vector<int>> row_sum(box_num, vector<int>(box_num, 0));
	vector<vector<int>> sum(box_num, vector<int>(box_num, 0));

	for (int row = 0; row < box_num; row++) {
		for (int col = 0; col < box_num; col++) {

			row_sum.at(row).at(col) = 0;
			sum.at(row).at(col) = 0;
		}
	}



	//	cout << "row_sum" << endl;
	for (int row = 1; row <= y_range; row++) {
		for (int col = 1; col <= x_range; col++) {
			row_sum.at(row).at(col) = coordinate.at(row).at(col) + row_sum.at(row).at(col - 1);
			//			cout << row_sum.at(row).at(col) << "\t";
		}
		//		cout << endl;
	}


	for (int col = 1; col <= x_range; col++) {
		for (int row = 1; row <= y_range; row++) {
			sum.at(row).at(col) = row_sum.at(row).at(col) + sum.at(row - 1).at(col);
		}
	}

	/*
	cout << "sum" << endl;
	for (int row = 1; row <= y_range; row++) {
		for (int col = 1; col <= x_range; col++) {
			cout << sum.at(row).at(col) << "\t";
		}
		cout << endl;
	}
	*/

	for (int i = 0; i < Q; i++) {
		cout << sum.at(c[i]).at(d[i]) - sum.at(c[i]).at(b[i] - 1) - sum.at(a[i] - 1).at(d[i]) + sum.at(a[i] - 1).at(b[i] - 1) << endl;
	}

	return 0;

}
