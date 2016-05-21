using UnityEngine; 
using System.Collections;

public class gameLogic
{
	

 public void increaseModifer()
 {
  modifyer = modifyer + 1;
 } 

 public void setGameOver()
 {
  gameOver = 1;
 }
 

 int modifyer = 1;
 int score =0;
 int gameOver =0;
 
} 

public class world
{

 public void update()
 {
   //a timer going up Every two and a half minutes difficulty goes up
   Counter = Counter + 1;
   if(Counter % 2500 == true)
   {
      gameLogic.increaseModifer();
   }
   Timer= Timer - 1;
   if(Timer == 0)
    { 
     //Loop through portals for a portal that is false
     //if its false, set it to active  
     Timer = 1000;

    }
   //Track potals
 }
 
 int Counter=0;
 int Timer=1000;

}


public class portal
{
 
 public bool checkActivePortal()
 {
   if(active == true && monsterSpawned == false )
   {
	monster.spawn();
        monsterSpawned = true;
       return true;    
   }
   else
   {
     return false;
   }
 }
 
 bool active = false;
 bool monsterSpawned = false;
}

public class player
{

 pubic void updateRot()
 {
   rotX = VRcamera.mainCamera.transform.rotation.x;
   rotY = VRcamera.mainCamera.transform.rotation.y;
   rotZ = VRcamera.mainCamera.transform.rotation.z;
 }

 pubic void getIrlRot()
 {
  //get Gyroscope Rot function = rotX, rotY... 
  updateRot();
 }

 public void checkPlayerHealth()
 {
   if(health < 0)
   {
	gameLogic.setGameOver();
   }
   
 }

 public void monsterAttacked()
 {
  health = health - 1;
 }

 public void update()
 {
  checkPlayerHealth();
  getIrlRot();
  updateRot();
 }


 int health =3;
 float rotY,rotX,rotZ;
 

 //VRcamera.mainCamera.transform.rotation.y

}

public class monster
{
 public void spawn()
 {
  //Set position  to be the portal
  
 }

 public void checkTimer()
 {
   if(lifeTimer ==0)
   {
    Player.monsterAttacked();
   }
   //Play jingle
   //Remove monster
 }
 

  public void update()
  {
    lifeTimer = lifeTimer - 1;
    outOfPortal();
  } 

  public void outOfPortal()
  {
    if(lifeTimer == 0)
    {
       player.monsterAttacked();
       //Destroy self
    }
  }

 //sHealth should be 3 * Modifyer
 static int sHealth = 3;
 int lifeTimer = 1300;
 int idSpawnPortal=0;
 
}
