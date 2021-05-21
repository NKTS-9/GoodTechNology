#include <iostream>

using namespace std;

class Lift
{
    bool pwr_;
    int level_;
    bool doors_;
public:
    Lift()
    {
        pwr_ = 0;
        level_ = 1;
        doors_ = 1;
    }
    void pwr()
    {
        pwr_ = !pwr_;
        if(!pwr_)
        {
            doors_ = 0;
            level_ = 1;
        }
    }
    void ch_level(int a)
    {
        if(pwr_ && !doors_)
        level_ = a;
    }
    void oc()
    {
        if(pwr_)
        doors_ = !doors_;
    }
    void status()
    {
        cout << pwr_ << "\t" << level_ << "\t" << doors_ << "\n";
    }
};


int main()
{
   Lift lift;
   char ch;
   int lvl;
   for (;;)
   {
       cin >> ch;
       switch(ch)
       {
            case 'p': lift.pwr(); break;
            case 'l':
                cout << "Enter floor" << "\n";
                cin >> lvl;
                lift.ch_level(lvl);
                break;
            case 'o': lift.oc(); break;
            case 's': lift.status(); break;
       }
       if(ch == 'e')
       {
            exit(1);
       }

   }

    return 0;
}
