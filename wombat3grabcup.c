#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    enable_servos();
    set_servo_position(0,1500);
    //servo go down
    
    motor (2,150);
    motor (0,150);
    msleep (1000);
    //go foward
    
    msleep (1000);
    //stop
    
    motor (3,50);
    msleep (238);
    //open servo
    
    return 0;
    
  
  
}
