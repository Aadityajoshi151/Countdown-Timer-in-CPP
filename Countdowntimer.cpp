//THIS PROGRAM IS WRITTEN BY AADITYA JOSHI
#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int mm, ss, i, j;
loop:
    system("cls");
    cout << "Enter The Minutes " << endl;
    cin >> mm;
    cout << "Enter The Seconds " << endl;
    cin >> ss;
    if (mm < 0 || mm > 59 || ss < 0 || ss > 59)
    {
        cout << "Wrong Input!" << endl;
        system("pause");
        goto loop;
    }
    system("pause");
    if (ss != 0)
    {
        {
            for (i = ss; i >= 0; i--)
            {
                system("cls");
                cout << mm << ":" << i;
                Sleep(1000);
            }
        }
        for (j = (mm - 1); j >= 0; j--)
        {
            for (i = 59; i >= 0; i--)
            {
                system("cls");
                cout << j << ":" << i;
                Sleep(1000);
            }
            if (i == 0)
                i = 59;
        }
        cout << "\nTIME UP! " << endl;
        Beep(350, 1000);
        Sleep(1000);
    }
    if (ss == 0)
    {
        system("cls");
        cout << mm << ":00";
        Sleep(1000);
        for (j = (mm - 1); j >= 0; j--)
        {
            for (i = 59; i >= 0; i--)
            {
                system("cls");
                cout << j << ":" << i;
                Sleep(1000);
            }
            if (i == 0)
                i = 59;
        }
        cout << "\nTIME UP! " << endl;
        Beep(350, 1000);
        Sleep(1000);
    }
    system("pause");
    return 0;
}
