#pragma once

class Cell{
    public:
    bool getisFilled();
    int getColor();
    int getpointCount();
    int getidStructure();
    void fiil(int color);
    bool addpoints();
    bool buildStructue(int idStructure);
    private:
    bool isFilled;
    int color;
    int pointCount = 0;
    int idStructure = 0; 
};