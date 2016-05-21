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
 

}


public class portal
{
 
 public bool checkActivePortal()
 {
   if(active)
   {
    
   }
 }
 
 bool active = false;

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

  public void update()
  {
    
  } 

 static int sHealth = 3;
 

}
