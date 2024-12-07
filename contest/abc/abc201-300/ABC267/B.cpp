#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
using LL = long long;

bool OnePin(string s1, string s2) {

    bool judge = false;
    int count = 0;

    for (int i = 0; i < 10; i++) {
        if (s1[i] == '1' && s2[i] == '1') {
            count++;
        }
    }

    if (count > 0) {
        judge = true;
    }
    else {
        judge = false;
    }

    return judge;
}

bool NoPin(string s1, string s2) {

    bool judge = true;

    for (int i = 0; i < 10; i++) {
        if (s1[i] == '1' && s2[i] == '1') {
            judge = false;
        }
    }

    return judge;
}

int main()
{

    string retsu_S[7] = { "0000001000","0001000000","0100000100","1000100000","0010000010","0000010000","0000000001" };
    string S;


    cin >> S;

    bool ans_judge = false;

    if (S[0] != '1') {
        for (int i = 0; i < 5; i++) {
            for (int j = i + 2; j < 7; j += 1) {
                for (int z = i + 1; z < j; z++) {


                    bool one_pin_judge[2] = { false };
                    bool no_pin_judge = false;

                    one_pin_judge[0] = OnePin(retsu_S[i], S);
                    one_pin_judge[1] = OnePin(retsu_S[j], S);

                    no_pin_judge = NoPin(retsu_S[z], S);

                    if (one_pin_judge[0] == true && one_pin_judge[1] == true && no_pin_judge == true) {
                        //cout << "i = " << i << " j = " << j << " z = " << z << endl;
                        ans_judge = true;
                    }
                }

            }
        }
    }


    if (ans_judge) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}

