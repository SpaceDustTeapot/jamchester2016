#ifndef MONSTER_H
#define MONSTER_H
#include <stdint.h>

class Monster
{
    public:
        Monster();
        virtual ~Monster();
        void spawn();
        void checkTimer();
        void monUpdate();
        bool outOfPortal();
        void setSpawn(int spID);
    protected:

    private:
    int32_t health;
    int32_t bHealth;
    int32_t lifeTimer;
    int32_t idSpawnPortal;
};

#endif // MONSTER_H
