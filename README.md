# 1's and 2's Complement in C++
## Important:
I wrote this program when I was in my first year and I posted it on a simple blog that I created at that time (PEC-World.weebly.com). Recently I decided to move all my projects to github and I have taken down this blog. Since I wrote this is in 2017 it has some mistakes here and there but it works fine. I also know this project would have been more easy if I had written it in python but I didn't know python at that time. Here is the exact copy of the post that I wrote on my blog on 15 Jan 2018 👇

## Description
This is a very basic project. Nothing Fancy. Just a simple countdown timer. It can be made fancy by incorporating graphics but the basic logic will not change.  
But solving this problem clears up the concept of nested loops.  
I observed 1 thing though that there are many variants of this program on the web but many of them use the concept of CLASS (Object Oriented Programming). If someone knows why this is so please tell me in the comment section below.


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
