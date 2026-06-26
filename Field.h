#pragma once
#include <vector>
#include "Cell.h"

class Field{
    private:
    int width;
    int length;
    std::vector<std::vector<Cell>>grid;
    public:
    Field::Field(int length, int width);
    Cell* getCell(int x, int y);
    int getwidth();
    int getlength();
};