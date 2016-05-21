#ifndef PORTAL_H
#define PORTAL_H
#include <stdint.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
class Portal
{
    public:
        Portal();
        virtual ~Portal();
        bool checkActivePortal();
        bool retState();
        bool setActive();
        void draw(sf::RenderTexture &buf);

    protected:

    private:
    bool active;
    bool monsterSpawned;

    sf::CircleShape octagon;
};

#endif // PORTAL_H
