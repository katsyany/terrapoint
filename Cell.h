#pragma once

class Cell{
    public:
    bool getisFilled();
    int getColor();
    int getpointCount();
    int getidStructure();
    void fill(int color);
    bool addpoints(int count, int playercolor);
    void buildStructue(int idStructure);
    private:
    bool isFilled;
    int color;
    int pointCount = 0;
    int idStructure = 0; 
};