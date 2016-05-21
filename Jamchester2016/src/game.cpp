#include "../include/game.h"

game::game()
{
    //ctor
    modifyer = 1;
    score =0;
    gameOver =0;
    Timer = 1000;
    window.create(sf::VideoMode(800,600),"Jamchester2016");
    buffer.create(800,600);
}

game::~game()
{
    //dtor
}

void game::draw()
{
  window.clear();
  for(int32_t i=0;i<3;i++)
  {
   port[0].draw(buffer);
    std::cout<<"Out"<<i<<std::endl;
  }
  buffer.display();
  sf::Sprite spr(buffer.getTexture());

  //window.draw(spr);
  window.draw(spr);
// sf::CircleShape circle(80,8);
  //window.draw(circle);
  window.display();
}

void game::loop()
{
    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {



            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        draw();
    }

}

void game::increaseModifyer()
{
  modifyer = modifyer + 1;
}

void game::setGameOver()
{
 gameOver = 1;
}

void game::worldUpdate()
{
  Counter = Counter + 1;
  if(Counter % 2500 == true)
  {
    increaseModifyer();
  }
  Timer = Timer - 1;
  if(Timer == 0)
  {
   //loop Through portals for a portal that is false
   bool flag = 0;
   for(int32_t i =0;i<3;i++)
   {
      if(port[i].retState() == false && flag == 0 )
      {
        port[i].setActive();
        port[i].checkActivePortal();
        mon[i].spawn();
      }
   }

  }
}
