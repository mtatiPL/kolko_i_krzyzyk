
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
char tab[3][3];
const char* gracz1="X";
const char* gracz2="O";
int i;
int j;
int player=1;
int win=0;
bool isWin=false;
int licznik=0;
void plansza()
{
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            cout<<tab[i][j]<<"|";

            if(j==2)
                cout<<endl;
        }

    }
}

void ruch()
{
    cout<<"ruch numer "<<licznik<<endl;
    cout<<"podaj j oraz i(od 0 do 2) graczu nr."<<player<<endl;
    cin>>j>>i;

    if( tab[i][j]==gracz1[0])
    {
cout<<"pole jest zajete"<<endl;
        player=1;
        tab[i][j]=gracz1[0];

    }
    else
    {
        tab[i][j]=gracz2[0];

        player=2;
    }



}
void ruch2()
{
    cout<<"ruch numer "<<licznik<<endl;
    cout<<"podaj j oraz i (od 0 do 2) graczu nr."<<player<<endl;
    cin>>j>>i;
    if(tab[i][j]==gracz2[0])
    {
        cout<<"pole jest zajete"<<endl;
        player=2;
        tab[i][j]=gracz2[0];
    }
    else
    {
        tab[i][j]=gracz1[0];

        player=1;
    }
}

void wygrana()
{

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            if(tab[i][0]==tab[i][1]&&tab[i][1]==tab[i][2]&&tab[i][0]==gracz1[0])
            {
                win=1;
            }
            if(tab[0][i]==tab[1][i]&&tab[1][i]==tab[2][i]&&tab[0][i]==gracz1[0])
            {
                win=1;
            }
            if(tab[0][0]==tab[1][1]&&tab[1][1]==tab[2][2]&&tab[0][0]==gracz1[0])
            {
                win=1;
            }
            if(tab[0][2]==tab[1][1]&&tab[1][1]==tab[2][0]&&tab[0][2]==gracz1[0])
            {
                win=1;
            }



            if(tab[i][0]==tab[i][1]&&tab[i][1]==tab[i][2]&&tab[i][0]==gracz2[0])
            {
                win=2;
            }
            if(tab[0][i]==tab[1][i]&&tab[1][i]==tab[2][i]&&tab[0][i]==gracz2[0])
            {
                win=2;
            }
            if(tab[0][0]==tab[1][1]&&tab[1][1]==tab[2][2]&&tab[0][0]==gracz2[0])
            {
                win=2;
            }
            if(tab[0][2]==tab[1][1]&&tab[1][1]==tab[2][0]&&tab[0][2]==gracz2[0])
            {
                win=2;
            }


        }
    }

    if(win!=0)
    {
        if(win%2==0)
            cout<<"Gratulacje gre wygral gracz nr."<<win-1<<endl;
        else
            cout<<"Gratulacje gre wygral gracz nr."<<win+1<<endl;

    }


}







int main()
{

    plansza();

    while(isWin==false)
    {



        if(player=1){
            ruch();
        licznik++;
        cout<<"licznik "<<licznik<<endl;
        plansza();
        wygrana();
        }

 if(licznik>=9)
        {
            isWin=true;
            win=0;
            break;
        }

        if(player=2){
            ruch2();
        licznik++;
        cout<<"licznik "<<licznik<<endl;
        plansza();
        wygrana();
        }

        if(licznik>=9)
        {
            isWin=true;
            win=0;
            break;
        }





    }



    if(licznik==9)
    {
        cout<<"remis"<<endl;


    }





    return 0;
}
