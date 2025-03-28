#include <kipr/wombat.h>

int main()
{
    camera_load_config("find red");
    printf("Hello World\n");
    int stop = 0;
    int x;
    int y;

    camera_open();
    while (stop == 0)
    {
        camera_update();

        if(get_object_count(1) > 0) 
        {
            x = get_object_center_x(1, 0);
            y= get_object_center_y(1, 0);

            printf("1 The center of the object is (%d,%d).\n", x,y);
        }
        if (get_object_count(1) > 0)
        {
            if(get_object_center_x(1,0) < 75)
            {
                motor(0,25); motor(3, -25);
                printf("Turning right");
                
            }
            else if(get_object_center_x(1,0) > 500)
            {
                motor(0,-25);  motor(3,25);
                printf("Turning left");
            }
            else
            {
                //stop = 1;
                ao();
                if (get_object_count (1) > 0)
                {
                    x = get_object_center_x(1,0);
                    y = get_object_center_y(1,0);
                    printf("1 The center of the object is (%d,%d) .\n", x,y);
                }
            }
        }
    }

   /* {
        //drive forward
        motor(0,150);
        motor(3,150);
        msleep(5000);
    }
*/
    return 0;
}
