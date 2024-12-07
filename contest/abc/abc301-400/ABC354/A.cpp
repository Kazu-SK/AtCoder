#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int main()
{
    int H = 0;


    cin >> H;


    long long plant_H = 0;
    long long plus_H = 2;
    int day = 0;

    while (plant_H <= H) {

        plus_H = pow(2.0, day);

        plant_H += plus_H;
        day += 1;

    }



    cout << day << endl;

    return 0;
}

