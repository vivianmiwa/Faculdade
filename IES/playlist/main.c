#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <windows.h>
#include <conio.h>
#include "maker.h"
#include "design.h"
#define MAX 100
#define MAXP 30


int main(){
    int caso;
    int tam=0,tamp=0;
    Music musicas[MAX];
    Playlist play[MAXP];

    APP:system("CLS");
    caso = menu();

    while(caso != 0){
        switch (caso){
            case 0:
                return 0;
            case 1:
                add(musicas,tam);
                tam++;
                break;
            case 2:
                criaplaylist(play,tamp,musicas,tam);
                tamp++;
                break;
            case 3:
                consultarmusic(musicas,tam);
                system("PAUSE");
                break;
            case 4:
                consultarplaylist(play,tamp);
                break;
            case 5:
                addnaplaylist(play,tamp,musicas,tam);
                break;
        }
        caso = menu();
    }
    system("CLS");

    menuout();
    
    gotoXY(37,3);
    scanf("%d",&caso);

    if(caso==0){
        goto APP;
    }

    system("CLS");
    msgout();

    return 0;
}