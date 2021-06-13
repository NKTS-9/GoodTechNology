#pragma once
#include <string>
#include <iostream>

using namespace std;

class CancTovar
{
    public:
    CancTovar()
    {
        kol = 0;
        colour = "white";
    }

    int Getkol() { return kol; }
    void Setkol(int val) { kol = val; }
    string Getcolour() { return colour; }
    void Setcolour(string val) { colour = val; }
    virtual void message() 
    {
        cout << kol << "\t" << colour << "\n";
    }

    protected:
    int kol;
    string colour;
};

