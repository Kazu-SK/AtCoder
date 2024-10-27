
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>

using namespace std;
using LL = long long;

int main()
{
    string X;


    cin >> X;

    int i = X.size() - 1;

    while(1){

        if (X[i - 1] == '.') {

            int num = X[i] - '0';

            if(num >= 5) {

                for (int j = i - 2; j >= 0; j--) {
                    if (X[j] + 0x01 == ':') {
                        X[j] = '0';
                    }
                    else {
                        X[j] += 0x01;
                        break;
                    }
                }

                if (X[0] == '0') {
                    X.insert(X.begin(), '1');
                }
            }

			X.pop_back();
			X.pop_back();

            break;
        }
        else {
            X.pop_back();
        }

        i--;
    }

    cout << X << endl;

    return 0;
}

