#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>

#define PI 3.14159265

// Function to rotate a point (x, y) around a center (cx, cy) by an angle (in degrees)
void rotate(int x, int y, int angle, int cx, int cy, int* new_x, int* new_y) {
    float rad = angle * (PI / 180.0); // Convert angle to radians

    // Compute new coordinates after rotation
    *new_x = cx + (x - cx) * cos(rad) - (y - cy) * sin(rad);
    *new_y = cy + (x - cx) * sin(rad) + (y - cy) * cos(rad);
}

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

    // Rotation angle (in degrees)
    int angle = 50;

    // Center of rotation
    int cx = 150, cy = 150; // Assuming triangle's center as rotation point

    int new_x1, new_y1, new_x2, new_y2, new_x3, new_y3;

    // Rotate each point of the triangle
    rotate(x1, y1, angle, cx, cy, &new_x1, &new_y1);
    rotate(x2, y2, angle, cx, cy, &new_x2, &new_y2);
    rotate(x3, y3, angle, cx, cy, &new_x3, &new_y3);

    // Redraw the rotated triangle
    setcolor(RED);
    line(new_x1, new_y1, new_x2, new_y2);
    line(new_x2, new_y2, new_x3, new_y3);
    line(new_x3, new_y3, new_x1, new_y1);

    getch();
    closegraph();
    return 0;
}
