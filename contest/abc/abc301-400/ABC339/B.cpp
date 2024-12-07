
#include <iostream>
#include <vector>

using namespace std;

enum DIRECTION{
    UP = 0,
    DOWN,
    LEFT,
    RIGHT
};

enum MOVE{
    CLOCKWISE = 0,
    COUNTERCLOCKWISE
};


void MoveFunction(int pos[], int& move, int& direction, int h, int w) {



    if (direction == UP) {
        if (move == CLOCKWISE) {
            pos[1] += 1;

            if (pos[1] > w) {
                pos[1] = 1;
            }

            direction = RIGHT;
        }
        else {
            pos[1] -= 1;

            if (pos[1] == 0) {
                pos[1] = w;
            }

            direction = LEFT;
        }
    }
    else if (direction == RIGHT) {

        if (move == CLOCKWISE) {
            pos[0] += 1;

            if (pos[0] > h) {
                pos[0] = 1;
            }

            direction = DOWN;
        }
        else {
            pos[0] -= 1;

            if (pos[0] == 0) {
                pos[0] = h;
            }

            direction = UP;
        }
    }
    else if (direction == DOWN) {

        if (move == CLOCKWISE) {
            pos[1] -= 1;

            if (pos[1] == 0) {
                pos[1] = w;
            }

            direction = LEFT;
        }
        else {
            pos[1] += 1;

            if (pos[1] > w)
                pos[1] = 1;

            direction = RIGHT;
        }
    }
    else if (direction == LEFT) {

        if (move == CLOCKWISE) {
            pos[0] -= 1;

            if (pos[0] == 0) {
                pos[0] = h;
            }

            direction = UP;
        }
		else {
			pos[0] += 1;

            if(pos[0] > h) 
			    pos[0] = 1;

			direction = DOWN;
		}

    }
    else {
    }

}


int main()
{
    int H = 0;
    int W = 0;
    int N = 0;


    cin >> H >> W >> N;


    vector<vector<char>> grid(H + 1, vector<char>(W + 1, '.'));

    int position[2] = { 1, 1 };
    int direction = UP;
    int move = CLOCKWISE;



    for (int i = 0; i < N; i++) {

        if (grid[position[0]][position[1]] == '.') {
            grid[position[0]][position[1]] = '#';

            move = CLOCKWISE;
            MoveFunction(position, move, direction, H, W);
        }
        else {
            grid[position[0]][position[1]] = '.';
            move = COUNTERCLOCKWISE;
            MoveFunction(position, move, direction, H, W);
        }

        /*
        cout << "i = " << i << endl;
        cout << "x = " << position[0] << endl;
        cout << "y = " << position[1] << endl;
        for (int i = 1; i <= H; i++) {
            for (int j = 1; j <= W; j++) {
                cout << grid[i][j];
            }

            cout << endl;
        }
        */
    }

	for (int i = 1; i <= H; i++) {
		for (int j = 1; j <= W; j++) {
			cout << grid[i][j];
		}

		cout << endl;
	}



    return 0;
}

