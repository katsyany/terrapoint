#include "Field.h"

Field::Field(int length, int width){
    this->length = length;
    this->width = width;
    grid.resize(width);
    for(int i = 0; i<width; i++){
        grid[i].resize(length);
    }
}
Cell* Field::getCell(int x, int y){
    return &grid[x][y];
}