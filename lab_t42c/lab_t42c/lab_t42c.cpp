#include <iostream>
#include <string>
#include "CancTovar.h"
#include "Paper.h"
#include "Pen.h"

int main()
{
    CancTovar c1;
    CancTovar c2;
    Paper p1;
    Pen p2;
    int choice;

    CancTovar* k[4];
    k[0] = &c1;
    k[1] = &c2;
    k[2] = &p1;
    k[3] = &p2;

    c1.Setcolour("Red");
    c1.Setkol(2);
    c2.Setcolour("Blue");
    c2.Setkol(3);
    p1.Setcolour("Green");
    p1.Setkol(4);
    p1.Setplot(10);
    p2.Setcolour("Yellow");
    p2.Setkol(5);
    p2.SetcolorPen("Pink");
    
    int element;
    double Avg = 0;

    for (;;)
    {
        cout << "Choose\n1. See\n2. Change\n3. AvgKol\n4. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1: 
        {
            for (int i = 0; i < 4; i++)
            {
                k[i]->message();
            }
            break;
        }
        case 2:
        {
            cout << "Choose what element to change\n";
            cin >> element;
            cout << "What property to change\n";
            cin >> choice;
            switch (element)
            {
            case 1:
            {
                if (choice == 1)
                {
                    cout << "Enter the new kol\n";
                    int kol;
                    cin >> kol;
                    k[0]->Setkol(kol);
                }
                if (choice == 2)
                {
                    cout << "Enter the new colour\n";
                    string c;
                    cin >> c;
                    k[0]->Setcolour(c);
                }
                break;
            }
            case 2:
            {
                if (choice == 1)
                {
                    cout << "Enter the new kol\n";
                    int kol;
                    cin >> kol;
                    k[1]->Setkol(kol);
                }
                if (choice == 2)
                {
                    cout << "Enter the new colour\n";
                    string c;
                    cin >> c;
                    k[1]->Setcolour(c);
                }
                break;
            }
            case 3:
            {
                if (choice == 1)
                {
                    cout << "Enter the new kol\n";
                    int kol;
                    cin >> kol;
                    k[2]->Setkol(kol);
                }
                if (choice == 2)
                {
                    cout << "Enter the new colour\n";
                    string c;
                    cin >> c;
                    k[2]->Setcolour(c);
                }
                if (choice == 3)
                {
                    cout << "Enter the new plot\n";
                    int plot;
                    cin >> plot;
                    p1.Setplot(plot);
                }
                break;
            }
            case 4:
            {
                if (choice == 1)
                {
                    cout << "Enter the new kol\n";
                    int kol;
                    cin >> kol;
                    k[3]->Setkol(kol);
                }
                if (choice == 2)
                {
                    cout << "Enter the new colour\n";
                    string c;
                    cin >> c;
                    k[3]->Setcolour(c);
                }
                if (choice == 3)
                {
                    cout << "Enter the new colorPen\n";
                    string color;
                    cin >> color;
                    p2.SetcolorPen(color);
                }
                break;
            }
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < 4; i++)
            {
                Avg += k[i]->Getkol();
            }
            Avg = Avg / 4.0;
            cout << "Average kol = " << Avg;
            break;
        }
        }
        if (choice == 4)
        {
            break;
        }
    }
    return 0;
}

