#include <graphics.h>
#include <conio.h>

void drawRectangle(int x, int y, int width, int height) {
    // Define the points of the rectangle
    int points[8] = {
        x - width / 2, y - height / 2, // Top-left
        x + width / 2, y - height / 2, // Top-right
        x + width / 2, y + height / 2, // Bottom-right
        x - width / 2, y + height / 2  // Bottom-left
    };

    // Draw the rectangle
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(4, points);
}

int main() {
    // Initialize graphics
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = getmaxx() / 2; // Center of the screen
    int y = getmaxy() / 2; // Center of the screen
    int width = 100;
    int height = 50;
    
    // Clear the screen
    cleardevice();

    // Draw the original rectangle
    drawRectangle(x, y, width, height);

    // Translate the rectangle
    int translateX = 100; // Translation in the x direction
    int translateY = 50;  // Translation in the y direction

    // Draw the translated rectangle
    drawRectangle(x + translateX, y + translateY, width, height);

    getch(); // Wait for a key press

    // Close the graphics mode
    closegraph();
    return 0;
}

