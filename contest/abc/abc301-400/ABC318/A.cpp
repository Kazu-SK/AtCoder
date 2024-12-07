
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0, M = 0, P = 0;
    int count = 0;

    cin >> N >> M >> P;


    if (N - M < 0) {
        cout << count << endl;
        return 0;
    }
    else {
        N -= M;
        count++;
    }


    count += N / P;

    cout << count << endl;

    return 0;
}

