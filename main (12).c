#include <kipr/wombat.h>

int main()
{
   while (digital(0)==0)
   {if (analog(5)>200)
   {
       motor(0,90);
       motor(3,5);
   }
    else
    {
        motor(0,5);
        motor(3,90);
    }
   }
    
    ao();
    
    
    
    
    
    
    printf("Hello World\n");
    return 0;
}
