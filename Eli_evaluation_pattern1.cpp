#include <iostream>

using namespace std;

int main() {
    int gridSize = 7;
	
	
    int positions[7][7] = {
        {0, 0, 0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 1},
        {0, 0, 0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0, 0, 0}
    };

    for (int row = 0; row < gridSize; row++) {
        for (int col = 0; col < gridSize; col++) {
            if (positions[row][col] == 1) {
                cout << "# ";
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

    return 0;
}