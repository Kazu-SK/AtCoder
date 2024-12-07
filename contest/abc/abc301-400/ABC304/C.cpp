
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <math.h>
#include <set>

using namespace std;
using LL = long long;

int N; 
int D;
vector<double> X;
vector<double> Y;
vector<bool> Infection;
map<int, vector<int>> Map;

double EuclideanDistance(double x1, double y1, double x2, double y2) {
    
    double e = 0.0;

    e = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));

    return e;
}

void InfectedPerson(int num) {

    double e_num_i = 0.0;
    
    for (int i = 0; i < N; i++) {

        if (i == num)
            continue;

        if (Infection[i] == true) //すでに感染している人でかつ、人numから感染する人をMapに入れてしまうと、i,numで投げ合いになる。
            continue;

		e_num_i = EuclideanDistance(X[num], Y[num], X[i], Y[i]);

		if (e_num_i <= D) {
			Infection[i] = true;
			Map[num].push_back(i);
		}
    }

    for (int i = 0; i < Map[num].size(); i++) {
        InfectedPerson(Map[num][i]);
    }
}

int main()
{
    double x = 0.0, y = 0.0;


    cin >> N >> D;


    for (int i = 0; i < N; i++) {
        cin >> x >> y;

        X.push_back(x);
        Y.push_back(y);
        Infection.push_back(false);
    }

    Infection[0] = true; //最初に感染者としてtrueにしておかないと、人0と、人0から感染する人で投げ合いになる。

    InfectedPerson(0);
    
    for (int i = 0; i < N; i++) {
        if (Infection[i] == true) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}

