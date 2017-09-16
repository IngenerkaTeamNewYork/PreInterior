#include <iostream>
#include "TXLib.h"
using namespace std;

int main()
{
    char flatStr[20];
    txCreateWindow(800, 600);
    cout << "Выберите квартиру (1, 2 или 3)" << endl;
    cin >> flatStr;

    HDC flatPic;

    if (strcmp(flatStr, "1") == 0) {
        flatPic = txLoadImage ("Flats\\flat1.bmp");
    } else if (strcmp(flatStr, "2") == 0) {
        flatPic = txLoadImage ("Flats\\flat2.bmp");
    } else if (strcmp(flatStr, "3") == 0) {
        flatPic = txLoadImage ("Flats\\flat3.bmp");
    }

    txBitBlt (txDC(), 0, 0, 800, 600, flatPic, 0, 0);
    txDeleteDC (flatPic);

    txSetFillColor(TX_RED);
    txRectangle(30, 50, 150, 100);
    txTextOut(30, 50, "Шкаф");

    return 0;
}
