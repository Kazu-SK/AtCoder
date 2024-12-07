
/***********************
全順序

人A[i]は人B[i]より強いという情報をもとに、
最強のプログラマーはだれかを出力する。

***********************/


#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int M = 0;


    cin >> N >> M;

    vector<int> A(M + 1, 0);
    vector<int> B(M + 1, 0);

    int s[51] = { 0 }; //自分より強い人の人数を格納する。


    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i]; //A[i]はB[i]より強い。

        s[B[i]] += 1; //B[i]より強い人の人数を増やす。
    }


    vector<int> ans;

    for (int i = 1; i <= N; i++) {
        
        if (s[i] == 0) {
            ans.push_back(i);
        }
    }

    if (ans.size() >= 2) { //最強プログラマーの候補が2人いて特定できないため、-1を出力
        cout << -1 << endl;
    }
    else {
        cout << ans[0] << endl; //最強プログラマーの番号を出力
    }

    return 0;
}

