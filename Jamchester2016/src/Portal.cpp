#include "../include/Portal.h"

Portal::Portal()
: octagon(80,8)
{
    //ctor
    active = false;
    monsterSpawned = false;
    octagon.setPosition(12.f,12.f);
}

void Portal::draw(sf::RenderTexture &buf)
{
 buf.draw(octagon);

}

bool Portal::checkActivePortal()
{
    if(active == true && monsterSpawned == false)
    {
        monsterSpawned = true;
        return true;
    }
    else
    {
        return false;
    }

}

bool Portal::setActive()
{
 active = true;

}

bool Portal::retState()
{
 return active;
}

Portal::~Portal()
{
    //dtor
}
