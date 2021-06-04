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
};

void Upload(company add[])
{
    ifstream file;
    file.open("table.txt");
    if (!file)
    {
        cout << "ERROR\nWE BREAK EVERETHING" << endl;
    }
    else
    {
        for (int i = 0; i < 10; i++)
        {
            file >> add[i].ID >> add[i].name >> add[i].tours >> add[i].duration >> add[i].cost;
        }
        cout << "File must be record\nMaybe....";
    }
};

void Screen(company add[])
{
    for (int i = 0; i < 10; i++)
    {
        
        cout << add[i].ID << "\t" << add[i].name << "\t" << add[i].tours << "\t" << add[i].duration << "\t" << add[i].cost << "\n";
    }
};

int main()
{
    setlocale(LC_ALL, "rus");
    company *Tourism = new company[10];
    int choice;
    for (;;)
    {
        cout << "Выберите пункт меню:" << endl;
        cout << "1. Загрузка файла\n2. Вывод на экран\n3. Редактирование\n4. Сохранение\n5. Выход\m";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            Upload(Tourism); break; 
        }
        case 2: Screen(Tourism); break;
            //case 3: Editting(); break;
        }
        if (choice == 4)
        {
            break;
        }

    }

    return 0;
}

