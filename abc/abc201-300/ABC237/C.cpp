
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

bool ReverseJudge(string s) {

    bool judge = true;

    for (int i = 0; i < s.size(); i++) {

        if (s[i] != s[s.size() - 1 - i]) {
            judge = false;
        }
    }

    return judge;
}

int main()
{
    string S;
    bool judge = false;



    cin >> S;

    if (ReverseJudge(S) == true) {
        judge = true;
    }
    else {
        if (S[S.size() - 1] != 'a') {
            judge = false;
        }
        else {

            int front_a_count = 0;
            bool front_a_judge = true;
            int back_a_count = 0;
            bool back_a_judge = true;


            for (int i = 0; i < S.size(); i++) {
                if (S[i] == 'a' && front_a_judge == true) {
                    front_a_count++;
                }
                else {
                    front_a_judge = false;
                }

                if (S[S.size() - 1 - i] == 'a' && back_a_judge == true) {
                    back_a_count++;
                }
                else {
                    back_a_judge = false;
                }

                if (front_a_judge == false && back_a_judge == false) {
                    break;
                }
            }

            int diff_a = abs(front_a_count - back_a_count);
            string aS;

            for (int i = 0; i < diff_a; i++) {
                aS += 'a';
            }

            if (front_a_count > back_a_count) {
                judge = false;
            }
            else{
                if (back_a_count > front_a_count) {

                    S = aS + S;

					if (ReverseJudge(S) == true) {
						judge = true;
					}
					else {
						judge = false;
					}
                }
            }

            //cout << S << endl;

        }
    }

    if (judge)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;


    return 0;
}

