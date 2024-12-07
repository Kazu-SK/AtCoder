
#include <iostream>
#include <vector>


using namespace std;


int MaxPalidromeSubsequence(string S){

    int ans = 1;

	for (int k = 0; k < S.size() - 1; k++) { //スタート地点

		for (int i = k + 1; i < S.size(); i++) { //ゴール地点
			bool judge = true;

			for (int j = 0; j <= i - k; j++) { //文字数分

				if (S[k + j] != S[i - j]) {
					judge = false;
				}
			}

			if (judge == true) {
				ans = max(ans, i - k + 1); //回文となる部分列の文字数の最大値を格納
			}
		}
		
	}

	return ans;

}

int main()
{
    string S;

    cin >> S;


    cout << MaxPalidromeSubsequence(S) << endl;

    return 0;
}

