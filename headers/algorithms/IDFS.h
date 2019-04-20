#ifndef IDFS_H
#define IDFS_H

#include "../State.h"
#include "../Result.h"
#include "../ManhattanDistance.h"



typedef struct Solution{
    bool isSolution;
    unsigned long int cost;
} Solution;

class IDFS {

public:
    IDFS();
    ~IDFS();
    Result execute(PackedState initialState);

private:
    Result* result;
    Solution depthLimitedSearch(PackedState state, PackedState parent, int depthLimit);

};

#endif