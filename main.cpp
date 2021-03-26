#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct company
{
    int ID;
    string name;
    string tours;
    int duration;
    int cost;
}

void upload(int &address)
{
    ifstream file("table.txt");
    if(!file)
    {
        cout << "ERROR\nWE BREAK EVERETHING"
    }

}

int main()
{
    company tourism[10];
    int &address[10];
    for (int i, i = 0; i++)
    {
        address[i] = *tourism[i];
    }
    int choice;
    for(;;)
    {
        cout << "Выберите пункт меню:" << endl;
        cout << "1. Загрузка файла\n2. Вывод на экран\n3. Редактирование\n4. Выход\n";
        cin >> choice;
        switch (choice)
        {
            case 1: Upload(); break;
            case 2: Screen(); break;
            case 3: Editting(); break;
        }
        if(a == 4)
        {
            break;
        }

    }

    return 0;
}
