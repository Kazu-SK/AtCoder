#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
	string S;
	stack<char> query_brackets;
	stack<int> query_num;


	cin >> S;



	for (int i = 0; i < S.size(); i++) {

		if (query_brackets.empty() == false && query_brackets.top() == '(' && S[i] == ')') {

			cout << query_num.top() << " " << i + 1 << endl;
			query_brackets.pop();
			query_num.pop();
		}
		else {
			query_brackets.push(S[i]);
			query_num.push(i + 1);
		}


	}


	return 0;
}

