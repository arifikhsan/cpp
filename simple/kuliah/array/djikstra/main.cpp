#include <iostream>
using namespace std;

int main() {
    int nodes[6][6] = {
        {
            0, 4, 5, 4, -1, -1     // 0
        }, {
            4, 0, 5, -1, -2, -1    // 1
        }, {
            -2, 5, 0, 2, 3, -1
        }, {
            4, -1, 2, 0, -2, 10
        }, {
            -1, 8, 3, 7, 0, 3
        }, {
            -1, -1, -1, 10, 3, 0
        }
    };

    // masukkan visitedNodesCount   2
    // masukkan nodes sejumah visitedNodesCount (nodeInput[visitedNodesCount]) nodeInput[i] = [1, 2, 3]
    // for i = 0 to i < visitedNodesCount
    //     pointToPoint[2] = [nodeInput[i], nodeInput[i+1]]
    //     distance[visitedNodesCount] = nodes[pointToPoint[0]][pointToPoint[1]];
    // end
    // distance ? : ;
    // for distance[visitedNodesCount-1]
    //     counter += i
    // end

    int visitedNodesCount;
    int nodeInput[visitedNodesCount];

    cout
        << "=== Djikstra Algorithm ===" << endl
        << endl;
    cout << "Input kunjungan maksimal (5 titik): "; 
        cin >> visitedNodesCount;

    for (int i = 0; i < visitedNodesCount; i++) {
        cout << "Input titik ke-" << i + 1 << ": ";
        cin >> nodeInput[i];
    }

    int distance[visitedNodesCount];
    int counter;
    bool canPassed;

    for (int i = 0; i < visitedNodesCount - 1; i++) {
        int pointToPoint[2] = {nodeInput[i], nodeInput[(i + 1)]};
        distance[i] = nodes[pointToPoint[0]][pointToPoint[1]];
        if (distance[i] < 0) {
            canPassed = false;
            break;
        }
        canPassed = true;
        counter += distance[i];
    }
    if (canPassed) {
        cout << "Jalur dapat dilalui. Jaraknya adalah: " << counter << endl;
    } else {
        cout << "Jalur tidak dapat dilalui" << endl;
    }
}