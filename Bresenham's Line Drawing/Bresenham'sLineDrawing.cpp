#include <iostream>
#include <graphics.h>
using namespace std;

void bresenhamLine(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1;
    int dy = y2 - y1;


    int p = 2 * dy - dx;


    int x = x1, y = y1;


    putpixel(x, y, WHITE);


    for (int i = 0; i < dx; i++) {
        x++;

        if (p >= 0) {
            y++;
            p = p + 2 * (dy - dx);
        } else {
            p = p + 2 * dy;
        }

        putpixel(x, y, WHITE);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, nullptr);

    int x1, y1, x2, y2;
    cout << "Enter the start point of the line (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Enter the end point of the line (x2, y2): ";
    cin >> x2 >> y2;

    bresenhamLine(x1, y1, x2, y2);

    getch();
    closegraph();
    return 0;
}
