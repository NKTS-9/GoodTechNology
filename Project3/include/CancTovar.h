#ifndef CANCTOVAR_H
#define CANCTOVAR_H
#include <string>

using namespace std;

class CancTovar
{
    public:
        CancTovar();

        int Getkol() { return kol; }
        void Setkol(int val) { kol = val; }
        string Getcolour() { return colour; }
        void Setcolour(string val) { colour = val; }

    protected:

    private:
        int kol;
        string colour;
};

#endif // CANCTOVAR_H
