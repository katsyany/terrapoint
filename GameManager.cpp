#include "GameManager.h"

GameManager::GameManager(Field* field, Player& player1, Player& player2){
    this->field = field;
    this->player1 = player1;
    this->player2 = player2;
}

void GameManager::doTurn(){
    //next time
}

bool GameManager::isTurnLegal(int x1, int y1, int x2, int y2){
    //next time
}