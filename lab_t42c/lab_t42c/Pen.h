#pragma once
#include "CancTovar.h"
#include <string>

using namespace std;

class Pen : public CancTovar
{
public:
    Pen()
    {
        colorPen = "white";
        colour = "White";
        kol = 0;
    };

    string GetcolorPen() { return colorPen; }
    void SetcolorPen(string val) { colorPen = val; }
    void message()
    {
        cout << kol << "\t" << colour << "\t" << colorPen << "\n";
    }

protected:

private:
    string colorPen;
};

