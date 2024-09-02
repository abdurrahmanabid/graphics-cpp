
  #include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>

  int main() {
        /* request auto detection */
        int gdriver = DETECT, gmode, err;
        int radius = 10, x, y, midy;

        /* initialize graphic mode */
        initgraph(&gdriver, &gmode, "C:/TURBOC3/BGI");


        x = 50;
        midy = getmaxy() / 2;
        y = midy - 100;

        /*
         * used 5 stick man (still/image)
         * position to get walking animation
         */
        while (x < getmaxx() - 25) {
                /* clears graphic screen */
                cleardevice();

                setlinestyle(SOLID_LINE, 1, 3);
                /* road for stick man */
                line(0, midy, getmaxx(), midy);

               

 /* image 3 */
                cleardevice();
                setlinestyle(SOLID_LINE, 1, 3);
                line(0, midy, getmaxx(), midy);
                x++;
                circle(x, y, radius);
                line(x, y + radius, x, y + radius + 50);

                /* leg design */
                line(x, y + radius + 50, x - 20, midy);
                line(x, y + radius + 50, x + 20, midy);

                /* hand motion */
                line(x, y + radius + 5, x - 20, y + radius + 20);
                line(x - 20, y + radius + 20, x - 20, y + radius + 30);
                line(x, y + radius + 5, x + 20, y + radius + 25);
                line(x + 20, y + radius + 25, x + 30, y + radius + 30);
                delay(150);

                
                
        }

        getch();

        /* deallocate memory allocated for graphic screen */
        closegraph();

        return 0;
  }

