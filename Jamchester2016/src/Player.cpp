#include "../include/Player.h"

Player::Player()
{
    //ctor
}

bool Player::checkPlayerHealth()
{
 if(health < 0)
 {
    return 0;
 }
 return 1;
}

bool Player::monsterAttacked()
{
 health = health - 1;
}

Player::~Player()
{
    //dtor
}
