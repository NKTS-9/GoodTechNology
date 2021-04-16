#ifndef PAPER_H
#define PAPER_H

#include <CancTovar.h>


class Paper : public CancTovar
{
    public:
        Paper();

        int Getplot() { return plot; }
        void Setplot(int val) { plot = val; }

    protected:

    private:
        int plot;
};

#endif // PAPER_H
