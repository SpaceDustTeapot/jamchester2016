#ifndef GAME_H
#define GAME_H
#include "Monster.h"
#include "Player.h"
#include "Portal.h"
#include <stdint.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>

class game
{
    public:
        game();
        virtual ~game();
        void loop();
        void increaseModifyer();
        void setGameOver();

        //World stuff
        void worldUpdate();

        void gameUpdateLoop();


        //sfml
      void draw();
    protected:

    private:
    int32_t modifyer;
    int32_t score;
    int32_t gameOver;

    //world stuff
    int32_t Counter;
    int32_t Timer;

    //World stuff
    Player user;
    Portal port[3];
    Monster mon[3];

    //sfml stuff
    sf::RenderWindow window;
//    sf::RenderTexture buffer;

    sf::RenderTexture buffer;
};

#endif // GAME_H
