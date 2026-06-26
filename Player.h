#pragma once
#include <vector>
#include "Cell.h"
#include "Field.h"

class Player{
    private:
    int teamcolor;
    std::vector<Cell>playercells;
    public:
    void doTurn(Field& field, int x1, int y1, int x2, int y2);
};