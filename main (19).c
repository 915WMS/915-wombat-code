#include <kipr/wombat.h>
void drive(int distance);
void driveb(int distance);
void L90();
void R90();
int adj = 7;
int main()
{
    enable_servos();
    set_servo_position(0, 1038);
    set_servo_position(1, 760);
    set_servo_position(2, 253);
    set_servo_position(3, 345);
    //Resets the servo positions
    motor(0, 100);
    msleep(100);
    drive(4500); //move forward towards the entrees
    set_servo_position(1, 630); //move down the large arm to get the hot dog
    msleep(1000);
    set_servo_position(0, 100);  //closes the large claw to get the hot dog
    msleep(1000);
    //set_servo_position(1, 1700); // moves up the large arm
    //msleep(2000);
    driveb(2000);
    R90(); //turns to face towards the black trays.
    set_servo_position(3, 1542); //move down the small arm to get the red pom-pom
    msleep(500);
    set_servo_position(2, 469); //move down the small arm to get the red pom-pom
    msleep(500);
    driveb(3200); // drive straight to get the three pom-poms
    set_servo_position(2, 100); //close the smal claw to get the three pom-poms
    msleep(500);
    set_servo_position(3, 1000);
    msleep(500);
    driveb(1250); // drive straight to turn to the black trays
    L90(); //Turns to face towards the black trays
    driveb(480);
    set_servo_position(3, 1021); //Put the arm down to drop the pom-poms
    msleep(500);
    set_servo_position(2, 756); // Opens the arm to drop the pom-poms
    msleep(500);
    motor(0, 50); // Goes backwards to prevent the claw from flicking the pom-poms
    motor(3, 50);
    msleep(500);
    motor(0, 0);
    motor(3, 100);
    msleep(960); // Turns left to grab another three pom-poms
	motor(0, 0);
    motor(3, 0);
    set_servo_position(3, 1525);
    motor(0, -100);
    motor(3, -100);
    msleep(2500);
    motor(0, 0);
    motor(3, 0);
    set_servo_position(2, 0);
    msleep(500);
    set_servo_position(3, 900);
    msleep(500);
    motor(0, 50);
    motor(3, -50);
    msleep(1430);
    motor(0, -50);
    motor(3, -50);
    msleep(700);
    motor(0, 0);
    motor(3, 0);
    set_servo_position(2, 540);
    msleep(500);
    motor(0, -50);
    motor(3, 50);
    msleep(2600); // Turns left to drop the hot dog onto the plate
    motor(0, 50);
    motor(3, 50);
    msleep(200); // Drives forward to drop the hot dog.
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 1000);
    msleep(1000);
    set_servo_position(3, 430);
    msleep(1000);
    motor(0, 50);
    motor(3, -50); // Turns right to go to the 3 entree tray
    msleep(1190);
    motor(0, 100);
    motor(3, 100);
    msleep(5850); // Drives forward to grab the hamburger 
    motor(0, 50);
    motor(3, -50);
    msleep(1030); // Turns right to grab the hamburger
    motor(0, 100);
    motor(3, 100); // Drives forward to grab the hamburger
    msleep(1350);
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 200); // Closes the claw to grab the hamburger
    msleep(500);
    motor(0, -100);
    motor(3, -100);
    msleep(220); // Backs up to prevent the claw from hitting the PVC pipes.
    motor(0, -50);
    motor(3, 50);
    msleep(1190); // Turns left to get the three pom-poms
    motor(0, -100);
    motor(3, -100);
    msleep(1300); // Goes straight to grab the three pom-poms
    motor(0, 0);
    motor(3, 0);
    set_servo_position(3, 1542);
    set_servo_position(2, 900);
    msleep(500);
    motor(0, -50);
    motor(3, -50);
    msleep(6400);
    motor(0, 50);
    motor(3, -50);
    msleep(250); // Turns right to get the red pom-pom
    motor(0, 0);
    motor(3, 0);
    set_servo_position(2, 800);
    msleep(500);
    motor(0, -50);
    motor(3, -50);
    msleep(4500); // Drives forward to grab the red pom-pom
    motor(0, 0);
    motor(3, 0);
    set_servo_position(2, 0);
    msleep(500);
    set_servo_position(3, 900);
    msleep(500);
    motor(0, 50);
    motor(3, -50);
    msleep(1200);
    motor(0, -100);
    motor(3, -100);
    msleep(700);
    motor(0, 0);
    motor(3, 0);
    set_servo_position(2, 1000);
    msleep(500);
    motor(0, -50);
    motor(3, 50);
    msleep(2460);
    motor(0, 100);
    motor(3, 100);
    msleep(200); // Goes forward to drop the hamburger
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 500);
    msleep(500);
    motor(0, -50);
    motor(3, 50);
    msleep(1800);
    motor(0, 100);
    motor(3, 100);
    msleep(3200);
    motor(0, -50);
    motor(3, 50);
    msleep(880); // Turns left to grab the potato
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 1000);
    msleep(500);
    set_servo_position(1, 237);
    msleep(500);
    motor(0, 50);
    motor(3, 50);
    msleep(1000);
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 0);
    msleep(500);
    set_servo_position(1, 1230);
    msleep(500);
    motor(0, 50);
    motor(3, -50);
    msleep(1000);
    motor(0, 100);
    motor(3, 100);
    msleep(960);
    motor(0, 50);
    motor(3, -50);
    msleep(1050); // Turns right to drop the potato
    motor(0, 100);
    motor(3, 100);
    msleep(1690); // Drives forward to drop the potato
    motor(0, 0);
    motor(3, 0);
    set_servo_position(0, 1000);
    msleep(500); // Opens the larger claw to drop the potato
    return 0;
}
void drive(int distance)
{
    cmpc(0);
    while(gmpc(0)<distance-26)
    {
        motor(0,80);
        motor(3,80+adj);
    }
    
    motor(0, 0);
    motor(3, 0);
    msleep(500);
}
void driveb(int distance)
{
    cmpc(0);
    while(gmpc(0)>(distance*-1) + 26)
    {
        motor(0,-80);
        motor(3,-80-adj);
    }
    
    motor(0,0);
    motor(3,0);
    msleep(500);
}
void L90()
{
    cmpc(0);
    while(gmpc(0)<720 - 26)
    {
        motor(0,50);
        motor(3,-50);
    }
    
    motor(0,0);
    motor(3,0);
    msleep(500);
}
void R90()
{
    cmpc(0);
    while(gmpc(0)>(1060*-1) - 26)
    {
        motor(0,-50);
        motor(3,50);
    }
    
    motor(0,0);
    motor(3,0);
    msleep(500);
}