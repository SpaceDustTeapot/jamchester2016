#ifndef PLAYER_H
#define PLAYER_H
#include <stdint.h>


class Player
{
    public:
        Player();
        virtual ~Player();
        //update rot and get irl rot can't be tested
        bool checkPlayerHealth();
        bool monsterAttacked();
        void playerUpdate();
    protected:

    private:
    int health;
};

#endif // PLAYER_H
