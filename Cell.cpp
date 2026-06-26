#include "Cell.h"

bool Cell::getisFilled() {
    return isFilled;
}

int Cell::getColor(){
    return color;
}

int Cell::getpointCount(){
    return pointCount;
}

int Cell::getidStructure(){
    return idStructure;
}

void Cell::fill(int color){
    this->color = color;
}

bool Cell::addpoints(int count, int playercolor){
    if(pointCount+count>6) return false;
    pointCount += count;
    if(pointCount==6) fill(playercolor);
    return true;
}

void Cell::buildStructue(int idStructure){
    this->idStructure = idStructure;
}