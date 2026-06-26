#pragma once

class Field;

class Structure{
    public:
    virtual ~Structure();
    virtual void doTurn(Field* field) = 0;
    private:
    int price;
};