#include<iostream>
#include<math.h>  
#include <stdlib.h> 
#include <vector>
#include <array>
#include "../headers/ManhattanDistance.h"
 
using namespace std;

int ManhattanDistance :: calculate(State3x3 state) {
    int distance = 0;
    for (int i = 0; i < NUMBER_OF_TILES; i++) {
        for (int j = 0; j < NUMBER_OF_TILES; j++) {
            Position expectedPosition = getExpectedPositionForNumber(state[i][j]);
            distance += abs(i - expectedPosition.x);
            distance += abs(j - expectedPosition.y);
        }
    }
    return distance;
}

// given a number, returns the position where the number should be
Position ManhattanDistance :: getExpectedPositionForNumber(int number) {
    Position expectedPosition;
    expectedPosition.x = (int) floor(number/NUMBER_OF_TILES);
    expectedPosition.y = number - NUMBER_OF_TILES*expectedPosition.x;
    return expectedPosition;
}
