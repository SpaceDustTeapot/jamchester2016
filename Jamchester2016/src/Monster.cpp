#include "../include/Monster.h"

Monster::Monster()
{
    //ctor
}

void Monster::spawn()
{

}

void Monster::setSpawn(int spID)
{
  idSpawnPortal = spID;

}

void Monster::checkTimer()
{


}

void Monster::monUpdate()
{
 lifeTimer = lifeTimer - 1;

}

bool Monster::outOfPortal()
{
    if(lifeTimer == 0)
    {
      return 1;
    }
    else
    {
      return 0;
    }
}

Monster::~Monster()
{
    //dtor
}


