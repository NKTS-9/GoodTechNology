#ifndef PEN_H
#define PEN_H

#include <CancTovar.h>
#include <string>

using namespace std;

class Pen : public CancTovar
{
    public:
        Pen();

        string GetcolorPen() { return colorPen; }
        void SetcolorPen(string val) { colorPen = val; }

    protected:

    private:
        string colorPen;
};

#endif // PEN_H
