#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
using namespace std;
void menu();

void delay (int delayv) // zadergka
    { int i;
        for (i=0;i<=delayv*100000000;i++);
    }

void body() // igra
{
    int i,j,length, raw2, col,g, ships[5]={4,3,2,1};
    char box1 [10][10], box2 [10][10], row [10]={'A','B','C','D','E','F','G','H','I','J'},column, way;
    for (i=0;i<=9;i++)
    {
        for (j=0;j<=9;j++)
            box1[i][j]='O';

    }
     for (i=0;i<=9;i++)
    {
        for (j=0;j<=9;j++)
          box2[i][j]='O';
    }
    //pered fazoy postroyki

    system("cls");
    cout <<' ';
    for (i=1;i<=10;i++) // kolonki pole 1
    {
        cout << i;

    }
    cout<<"   ";
    for (i=1;i<=10;i++) // kolonki pole 2
    {
        cout << i;

    }
    cout << endl;
    for(i=0;i!=10;i++) //ryadi
    {
       cout << row[i];
        for (j=0;j<=18;j++)
        {
           if (j<=9) cout << box1 [i][j];
           if (j==9) cout << "    ";
           if (j>=9) cout << box2 [i][j-9];
        }
        cout << endl;
    }

        // phaza postroyki
        cout << "Time to place your ships!"<<endl
        <<"TO PLACE SHIPS WRITE COORDINATE OF BEGINNING (RAW(CAPSLOCK ON) THEN COLUMN),"
        <<endl<<" LENGHT, AND THEN ADD S,W,N,E \n";
        // delay(10);
     do
    {
        g = getch();
        cin >> raw2 >> column >> length >> way;
        //cout << raw << column << length << way;
        if (column=='A') col=1;
        if (column=='B') col=2;
        if (column=='C') col=3;
        if (column=='D') col=4;
        if (column=='E') col=5;
        if (column=='F') col=6;
        if (column=='G') col=7;
        if (column=='H') col=8;
        if (column=='I') col=9;
        if (column=='J') col=10;
        box1[raw2][col]='X';
       // registracia v massive
        if (length>=1)
        {
             if (length==1)&&(ships[0]<=0);
             else
                {
                    if (length==1) ships[0]--;
                    if (way=='S') box1 [raw2+1][col]='X';
                    if (way=='N') box1 [raw2-1][col]='X';
                    if (way=='E') box1 [raw2][col+1]='X';
                    if (way=='W') box1 [raw2][col-1]='X';

                }
            if (length>=2)
            {
                if (length==2)&&(ships[1]<=0);
                else
                {
                    if (length==2) ships[1]--;
                    if (way=='S') box1 [raw2+1][col]='X';
                    if (way=='N') box1 [raw2-1][col]='X';
                    if (way=='E') box1 [raw2][col+1]='X';
                    if (way=='W') box1 [raw2][col-1]='X';

                }
            }
            if (length>=3)
            {
                 if (length==3)&&(ships[2]<=0);
                else
                {
                    if (length==3) ships[2]--;
                    if (way=='S') box1 [raw2+1][col]='X';
                    if (way=='N') box1 [raw2-1][col]='X';
                    if (way=='E') box1 [raw2][col+1]='X';
                    if (way=='W') box1 [raw2][col-1]='X';
                }
            }
            if (length==4);
            {
                if (length==4)&&(ships[3]<=0);
                else
                {
                    if (length==4) ships[3]--;
                    if (way=='S') box1 [raw2+1][col]='X';
                    if (way=='N') box1 [raw2-1][col]='X';
                    if (way=='E') box1 [raw2][col+1]='X';
                    if (way=='W') box1 [raw2][col-1]='X';
                }
            }

        }
        //vivod

    } while (g!=27);
}






void menu() //menu
{


   cout << "TO START TYPE 1 AND PRESS ENTER" << endl;
   cout << "TO SEE TUTORIAL BEFORE PLAYING TYPE 2 AND PRESS ENTER" << endl;
   cin  >> inputv;
   if (inputv==1) body();
   if (inputv==2)
   {
       cout << "TO PLAY JUST TYPE BOX COORDINATES [ROW] [COLUMN] TO FIRE \n"
            << "TO PLACE SHIPS WRITE COORDINATE OF BEGINNING (RAW (CAPSLOCK ON) THEN COLUMN),"
            <<endl<<" LENGHT, AND THEN ADD S,W,N,E \n"
            << "PRESS ANY KEY TO CONTINUE";
      // delay(10);
      do {} while(!kbhit());
      system("cls");
      menu();

   }
}

int main()
{
    menu();
    return 0;
}
