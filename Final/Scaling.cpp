#include <stdio.h>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Coordinates of a triangle
    int x1 = 100, y1 = 100;
    int x2 = 200, y2 = 100;
    int x3 = 150, y3 = 200;

    // Initial drawing
    setcolor(YELLOW);
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);

    // Scaling factors
    float scaleX = 0.5; // Scale factor in x direction
    float scaleY = 0.5; // Scale factor in y direction

    // Scaling each vertex of the triangle
    int newX1 = x1 * scaleX;
    int newY1 = y1 * scaleY;

    int newX2 = x2 * scaleX;
    int newY2 = y2 * scaleY;

    int newX3 = x3 * scaleX;
    int newY3 = y3 * scaleY;

    // Redraw the scaled triangle
    setcolor(RED);
    line(newX1, newY1, newX2, newY2);
    line(newX2, newY2, newX3, newY3);
    line(newX3, newY3, newX1, newY1);

    getch();
    closegraph();
    return 0;
}
