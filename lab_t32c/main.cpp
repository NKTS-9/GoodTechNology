#include <iostream>
#include <string>

using namespace std;

class tourism
{
    private:
    int ID;
    string Name;
    string Tour;
    int Duration;
    int Cost;
    public:
    tourism(){ID = 1; Name = "aa"; Tour = "aa"; Duration = 1; Cost = 1;};
    tourism(int id, string name, string tour, int duration, int cost)
    {
    ID = id;
    Name = name;
    Tour = tour;
    Duration = duration;
    Cost = cost;
    }
    void setID(int id){ID = id;};
    void setName(string name){Name = name;};
    void setTour(string tour){Tour = tour;};
    void setDuration(int duration){Duration = duration;};
    void setCost(int cost){Cost = cost;};
    int getID(){return ID;};
    string getName(){return Name;};
    string getTour(){return Tour;};
    int getDuration(){return Duration;};
    int getCost(){return Cost;};
};

void See(tourism add[])
{
    int i;
    cout << "Enter number in range 0 - 4\n";
    cin >> i;
    cout <<add[i].getID() << "\t" << add[i].getName() << "\t" << add[i].getTour() << "\t" <<
    add[i].getDuration() << "\t" << add[i].getCost() << "\n";
};

void Change(tourism add[])
{
    int i;
    int change;
    string chL;
    int chN;
    cout << "Enter number in range 0 - 4\n";
    cin >> i;
    cout << "What changing?\n1. ID\n2. Name\n3. Tour\n4. Duration\n5. Cost\n";
    cin >> change;
    switch(change)
    {
    case 1:cin >> chN; add[i].setID(chN); break;
    case 2:cin >> chL; add[i].setName(chL); break;
    case 3:cin >> chL; add[i].setTour(chL); break;
    case 4:cin >> chN; add[i].setDuration(chN); break;
    case 5:cin >> chN; add[i].setCost(chN); break;
    }
};

int main()
{
    tourism company1;
    tourism company2(2, "Sun", "USA", 10, 1200);
    tourism table[5];
    for(;;)
    {
    See(table);
    Change(table);
    }
    return 0;
};
