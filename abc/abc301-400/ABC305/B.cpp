
#include <iostream>
#include <vector>
#include <map>

using namespace std;

using LL = long long;

int main()
{

	map<char, int> Map;

	Map['A'] = 0;
	Map['B'] = 3;
	Map['C'] = 4;
	Map['D'] = 8;
	Map['E'] = 9;
	Map['F'] = 14;
	Map['G'] = 23;


	char p, q;


	cin >> p >> q;


	cout << abs(Map[p] - Map[q]) << endl;

	return 0;
}

