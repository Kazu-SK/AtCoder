
#include <iostream>
#include <vector>
#include <deque>
#include <utility>

using namespace std;

int main()
{
    int N = 0;
    int Q = 0;
    
    
    deque<pair<int, int>> dragon;

    cin >> N >> Q;

    for (int i = 1; i <= N; i++) {

        dragon.push_back({i, 0});
    }


    for (int i = 0; i < Q; i++) {
        
        int t = 0;
        cin >> t;

        int x = dragon[0].first;
        int y = dragon[0].second;

        if (t == 1) {
            char c;

            cin >> c;
            if (c == 'R')dragon.push_front({ x+1, y });
            if (c == 'L')dragon.push_front({ x-1, y });
            if (c == 'U')dragon.push_front({ x, y+1 });
            if (c == 'D')dragon.push_front({ x, y-1 });

            dragon.pop_back();
        }
        else {
            int x;

            cin >> x;
            x--;
            cout << dragon[x].first << " " << dragon[x].second << endl;
        }
    }

    return 0;
}

