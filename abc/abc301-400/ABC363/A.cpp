#include <iostream>
#include <vector>


using namespace std;


int main()
{
    int R = 0;
    int diff = 0;

    cin >> R;

    if (R >= 1 && R <= 99) {
        diff = 100 - R;
    }
    else if (R >= 100 && R <= 199) {
        diff = 200 - R;
    }
    else if (R >= 200 && R <= 299) {
        diff = 300 - R;
    }
    else {
    }

    cout << diff << endl;


    return 0;
}

