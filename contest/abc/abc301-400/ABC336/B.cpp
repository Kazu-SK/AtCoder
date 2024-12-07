
#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int N = 0;


    cin >> N;

    vector<char> bin;

    while (N > 1) {

        char b;
        
        b = (N % 2) + '0';
        bin.insert(bin.begin(), b);

        N /= 2;
    }

    bin.insert(bin.begin(), '1');


    int zero_count = 0;

    for (int i = bin.size() - 1 ; i >= 0; i--) {

        if (bin[i] == '0')
            zero_count++;
        else
            break;
    }

    cout << zero_count << endl;

    return 0;
}

