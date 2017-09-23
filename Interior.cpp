#include <iostream>
#include "TXLib.h"
using namespace std;

void shcaf(int x, int y)
{
    txSetFillColor(TX_BROWN);
    txRectangle(x, y, x + 35, y + 35);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txTextOut(x, y, "Шкаф");
}
void vannoi(int x, int y)
{
    txSetFillColor(TX_BLUE);
    txRectangle(x, y, x + 35, y + 35);
    txSetColor(TX_BLACK);
    txSetFillColor(TX_BLACK);
    txTextOut(x, y, " не Шкаф");
}



int main()
{   int nomer_flat;
    char flatStr[20];
    txCreateWindow(800, 600);
    cout << "Выберите квартиру (1, 2 или 3)" << endl;
    cin >> flatStr;

    HDC flatPic;

    if (strcmp(flatStr, "1") == 0) {
        flatPic = txLoadImage ("flat1.bmp");
        nomer_flat = 1;
    } else if (strcmp(flatStr, "2") == 0) {
        flatPic = txLoadImage ("flat2.bmp");
        nomer_flat = 2;
    } else if (strcmp(flatStr, "3") == 0) {
        flatPic = txLoadImage ("flat3.bmp");
        nomer_flat = 3;
    }

    txBitBlt (txDC(), 200, 0, 800, 600, flatPic, 0, 0);

    int mesto_vannoi;
    int mesto_shcafa;
    cout << "Выберите где будет шкаф (1, 2 или 3)" << endl;
    cin >> mesto_shcafa;
    cout << "Выберите где будет ванна (1, 2 или 3)" << endl;
    cin >> mesto_vannoi;

    while(mesto_vannoi == mesto_shcafa) {cout << "ошибка" << endl;
        txBitBlt (txDC(), 200, 0, 800, 600, flatPic, 0, 0);
        cout << "Выберите где будет шкаф (1, 2 или 3)" << endl;
        cin >> mesto_shcafa;
        cout << "Выберите где будет ванна (1, 2 или 3)" << endl;
        cin >> mesto_vannoi;
    }



    if (nomer_flat == 1)
    {
        if (mesto_shcafa == 1)
            {shcaf(370, 116);
             }
        if (mesto_shcafa == 2)
            {shcaf(489, 230);
             }
        if (mesto_shcafa == 3)
            {shcaf(371, 455);
             }
        if (mesto_vannoi == 1)
            {vannoi(370, 116);
             }
        if (mesto_vannoi == 2)
            {vannoi(489, 230);
             }
        if (mesto_vannoi == 3)
            {vannoi(371, 455);
             }
    }
    if (nomer_flat == 2)
    {
        if (mesto_shcafa == 1)
            {shcaf(221, 426);
             }
        if (mesto_shcafa == 2)
            {shcaf(411, 417);
             }
        if (mesto_shcafa == 3)
            {shcaf(751, 97);
             }
        if (mesto_vannoi == 1)
            {vannoi(221, 426);
             }
        if (mesto_vannoi == 2)
            {vannoi(411, 417);
             }
        if (mesto_vannoi == 3)
            {vannoi(751, 97);
             }
    }
    if (nomer_flat == 3)
    {
        if (mesto_shcafa == 1)
            {shcaf(707, 13);
             }
        if (mesto_shcafa == 2)
            {shcaf(667, 250);
             }
        if (mesto_shcafa == 3)
            {shcaf(212, 15);
             }
        if (mesto_vannoi == 1)
            {vannoi(707, 13);
             }
        if (mesto_vannoi == 2)
            {vannoi(667, 250);
             }
        if (mesto_vannoi == 3)
            {vannoi(212, 15);
             }
    }





    txDeleteDC (flatPic);
    return 0;
}
