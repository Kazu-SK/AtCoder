
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using uLL = unsigned long long;

int main()
{
    uLL A, B, C, D, E, F;


    const uLL NUM = 998244353;

    cin >> A >> B >> C >> D >> E >> F;

    uLL AB;
    uLL ABC;
    uLL DE;
    uLL DEF;

    A %= NUM;
    B %= NUM;

    AB = (A * B) % NUM;
    C %= NUM;

    ABC = (AB * C) % NUM;

    D %= NUM;
    E %= NUM;

    DE = (D * E) % NUM;

    F %= NUM;

    DEF = (DE * F) % NUM;

    cout << (ABC + NUM - DEF) % NUM << endl; // +NUMが必要 余りを求める計算について、差分をとる場合は、負の値になりえることに注意する。+ NUMを足すことで正しい答えを得ることができる。

    return 0;
}

