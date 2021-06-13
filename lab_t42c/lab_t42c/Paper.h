#pragma once
#include "CancTovar.h"
class Paper : public CancTovar
{
public:
    Paper()
    {
        plot = 0;
        colour = "White";
        kol = 0;
    };

    int Getplot() { return plot; }
    void Setplot(int val) { plot = val; }
    void message()
    {
        cout << kol << "\t" << colour << "\t" << plot << "\n";
    };

private:
    int plot;
};

