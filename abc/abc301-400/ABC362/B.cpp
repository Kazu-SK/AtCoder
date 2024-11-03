
#include <iostream>
#include <vector>
#include <math.h>


using namespace std;


bool Calc(int o_x, int o_y, int a_x, int a_y, int b_x, int b_y) {


    int v_a[2] = { 0 };
    int v_b[2] = { 0 };
    double cos_theta = 0;
    double theta = 0;

    v_a[0] = o_x - a_x;
    v_a[1] = o_y - a_y;

    v_b[0] = o_x - b_x;
    v_b[1] = o_y - b_y;

    cos_theta = (v_a[0] * v_b[0] + v_a[1] * v_b[1]) / (sqrt(v_a[0] * v_a[0] + v_a[1] * v_a[1]) * sqrt(v_b[0]*v_b[0]+v_b[1]*v_b[1]));

    //theta = acos(cos_theta);

    if (cos_theta == 0.0)
        return true;
    else
        return false;

}


int main()
{
    int x[3];
    int y[3];


    for (int i = 0; i < 3; i++) {
        cin >> x[i] >> y[i];
    }

    bool answer = false;

    for (int i = 0; i < 3; i++) {
        if(i == 0)
		    answer = Calc(x[0], y[0], x[1], y[1], x[2], y[2]);
        if(i == 1)
		    answer = Calc(x[1], y[1], x[0], y[0], x[2], y[2]);
        if(i == 2)
		    answer = Calc(x[2], y[2], x[0], y[0], x[1], y[1]);

        if (answer == true)
            break;
    }

    if (answer == false)
        cout << "No";
    else
        cout << "Yes";

    return 0;

}

