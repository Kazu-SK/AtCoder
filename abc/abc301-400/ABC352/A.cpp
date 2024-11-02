#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 0;
    int X = 0, Y = 0;
    int Z = 0;


    cin >> N >> X >> Y >> Z;


    if (X < Y) {

        if (X <= Z && Z <= Y) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    else {
        if (Y <= Z && Z <= X) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }


    return 0;
}

