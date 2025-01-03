#include<iostream>
#include<vector>

using namespace std;

// x の偶奇による
int dx[2][6] = {
	{1, 0, -1, 0, 1, -1}, //
	{1, 0, -1, 0, 1, -1}  //
};
int dy[2][6] = {
	{0, 1, 0, -1, -1, -1}, //
	{0, 1, 0, -1, 1, 1}    //
};

int main() {

	int W, H;


	cin >> W >> H;
	vector<vector<int>> fi(H + 2, vector<int>(W + 2, 0));
	for (int x = 1; x <= H; ++x) 
		for (int y = 1; y <= W; ++y) 
			cin >> fi[x][y]; //入力

	vector<vector<bool>> seen(H + 2, vector<bool>(W + 2, false));

	//建物に囲われておらず、建物が建てられていない個所をseen[][] = trueとする。
	auto rec = [&](auto self, int x, int y) -> void {
		seen[x][y] = true;
		for (int dir = 0; dir < 6; ++dir) {
			int nx = x + dx[x % 2][dir], ny = y + dy[x % 2][dir];
			if (nx < 0 || nx >= H + 2 || ny < 0 || ny >= W + 2) continue;
			if (fi[nx][ny] == 1) continue;
			if (!seen[nx][ny]) self(self, nx, ny);
		}
	};

	rec(rec, 0, 0); 

	//建物に囲われている個所をfi[][]=1とする。
	for (int x = 1; x <= H; ++x)
		for (int y = 1; y <= W; ++y) 
			if (!seen[x][y]) fi[x][y] = 1;

	int res = 0;

	for (int x = 1; x <= H; ++x) {
		for (int y = 1; y <= W; ++y) {
			if (fi[x][y] == 0) continue; //建物じゃない個所は対象外とする。

			cout << "x = " << x << " y = " << y << endl;
			for (int dir = 0; dir < 6; ++dir) {
				int nx = x + dx[x % 2][dir], ny = y + dy[x % 2][dir];
				if (fi[nx][ny] == 0){ //対象の建物のマスに対し、何もないマスと接している辺の数をカウントする。
					cout << "nx = " << nx << " ny = " << ny << endl;
					++res;
				} 
			}
			cout << endl;
		}
	}

	cout << res << endl;
}