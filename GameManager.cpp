#include "GameManager.h"
#include <cmath>

GameManager::GameManager(Field* field, Player* player1, Player* player2){
    this->field = field;
    this->player1 = player1;
    this->player2 = player2;
}

void GameManager::doTurn(int x1, int y1, int x2, int y2, bool opt, Player* player){
    if(!isTurnLegal(x1,y1,x2,y2)) return;
    int dx = 0, dy=0;
    if(x1>x2) dx=-1; else dx=1;
    if(y1>y2) dy=-1; else dy=1;
    int teamcolor = player->getteamcolor();
    if(opt==true){
        field->getCell(x1+dx,y1)->addpoints(1, teamcolor);
        if(dx>0) dx++; else dx--;
        field->getCell(x1+dx,y1+dy)->addpoints(1, teamcolor);
    }
    else{
        field->getCell(x1,y1+dy)->addpoints(1, teamcolor);
        if(dy>0) dy--; else dy++;
        field->getCell(x1+dx,y1+dy)->addpoints(1, teamcolor);
    }
    field->getCell(x1,y1)->addpoints(1, teamcolor);
    field->getCell(x2,y2)->addpoints(1, teamcolor);
}

bool GameManager::isTurnLegal(int x1, int y1, int x2, int y2){
    int dx = std::abs(x2-x1);
    int dy = std::abs(y2-y1);
    if(((dx==1&&dy==2)||(dx==2&&dy==1))&&x2<field->getlength()&&y2<field->getwidth()&&x2>=0&&y2>=0&&x1<field->getlength()&&y1<field->getwidth()&&x1>=0&&y1>=0) return true;
    return false;
}