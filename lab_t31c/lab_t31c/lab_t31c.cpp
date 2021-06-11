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

int Upload(company add[])
{
    ifstream file;
    int i;
    file.open("table.txt");
    if (!file)
    {
        cout << "ERROR\nWE BREAK EVERETHING" << endl;
    }
    else
    {
        for (i = 0; i < 10; i++)
        {
            file >> add[i].ID >> add[i].name >> add[i].tours >> add[i].duration >> add[i].cost;
        }
        cout << "File must be record\nMaybe....";
    }
    file.close();
    return i+1;
};

void Screen(company add[])
{
    for (int i = 0; i < 10; i++)
    {
        cout << add[i].ID << "\t" << add[i].name << "\t" << add[i].tours << "\t" << add[i].duration << "\t" << add[i].cost << "\n";
    }
};

float Avg(company add[], int length)
{
    float avgCost = 0;
    float summ = 0;
    if (length < 0)
    {
        for (int i = 0; i < length - 1; i++)
        {
            summ = summ + add[i].cost;
            avgCost = summ / length;
        }
    }
    else
    {
        cout << "Нет таблицы, нет значения\n";
    }
    return avgCost;
}

void Editting(company add[], int length)
{
    int line;
    int column;
    int changeN;
    string changeL;
    int choice;
    for (;;)
    {
        cout << "Введиет номер строки\n";
        cin >> line;
        if (line <= length && line > 0)
        {
            line = line - 1;
            cout << "Введите номер столбца\n";
            cin >> column;
            switch (column)
            {
            case 1:
            {
                cout << "Введите новый ID\n";
                cin >> changeN;
                add[line].ID = changeN;
                break;
            }
            case 2:
            {
                cout << "Введите новое название компании\n";
                cin >> changeL;
                add[line].name = changeL;
                break;
            }
            case 3:
            {
                cout << "Введите новое название тура\n";
                cin >> changeL;
                add[line].tours = changeL;
                break;
            }
            case 4:
            {
                cout << "Введите новую продолжительность\n";
                cin >> changeN;
                add[line].duration = changeN;
                break;
            }
            case 5:
            {
                cout << "Введите новую цену\n";
                cin >> changeN;
                add[line].cost = changeN;
                break;
            }
            default: cout << "Нет такого столбца\n"; break;
            }
        }
        else
        {

        }
        cout << "Продолжить изменения?\n1.Да\n2.Нет\n";
        cin >> choice;
        if (choice == 2)
        {
            break;
        }
    }
};

void Save(company add[], int length, float avg)
{
    if(length > 0)
    {
    ofstream saveFile;
    string fileName;
    cout << "Введите имя файла\n";
    cin >> fileName;
    saveFile.open(fileName);
    for (int i = 0; i < length-1; i++)
    {
        saveFile << add[i].ID << "\t" << add[i].name << "\t" << add[i].tours << "\t" << add[i].duration << "\t" << add[i].cost << "\n";
    } 
    saveFile << avg << "\n";
    saveFile.close();
    }
    else
    {
        cout << "Нечего сохранять -____-\n";
    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    company *Tourism = new company[10];
    int choice;
    int lenght = 0;
    float avg = 0;
    for (;;)
    {
        cout << "Выберите пункт меню:" << endl;
        cout << "1. Загрузка файла\n2. Вывод на экран\n3. Редактирование\n4. Средняя стоимость\n5. Сохранение\n6. Выход\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            lenght = Upload(Tourism); break;
        }
        case 2: Screen(Tourism); break;
        case 3: Editting(Tourism, lenght); break;
        case 4: avg = Avg(Tourism, lenght); break;
        case 5: Save(Tourism, lenght, avg); break;
        }
        if (choice == 6)
        {
            break;
        }

    }

    return 0;
}

