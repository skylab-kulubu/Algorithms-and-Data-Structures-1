#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>


int dice,tempScore,humanTotalScore,computerTotalScore,game=0,totalScore;
int cont;

void humanTurn();
void computerTurn();
void rollDice();
void check();
void isGameEnd();
void isEndTour();
void ask();

// 100 puana ulaşan olmadığı sürece oyun bitmiyor

int main(){
    srand(time(NULL));
    while(game==0){
        humanTurn(cont,tempScore,dice);
        system("clear");
        if(game==1){
            break;
        }
        computerTurn(dice,tempScore,cont);
         system("clear");

       //isGameEnd(humanTotalScore,computerTotalScore);
    }
    return 0;
}
// zar atılıyor, kontrol ediliyor , soruluyor, tur bittiyse puana bakılıyor 

void humanTurn(){
    printf("********************human turn*******************\n");
    totalScore=0;
    totalScore=humanTotalScore;
    tempScore=0;
    cont=1;
    ask(cont);
    while(cont==1){
    rollDice(dice);
    check(tempScore,cont,dice);
    isEndTour(cont,tempScore,humanTotalScore);
    if(cont!=0){
    ask(cont);
    isEndTour(cont,tempScore,humanTotalScore);
    humanTotalScore=totalScore;
    }
    }
    printf("human total score %d\n",humanTotalScore);
    sleep(2);
    if(humanTotalScore>=100){
        printf("human wins with %d points\n",humanTotalScore);
        game=1;
    }

}
//bilgisayar zar atıyor kontrol edilitor geçici skoru 20 nin üzerinde değilse devam ediyor
void computerTurn(){
    printf("*************computer turn***********************\n");
    totalScore=0;
    totalScore=computerTotalScore;
    cont=1;
    tempScore=0;
    while(cont==1){
    rollDice(dice);
    sleep(1);
    check(tempScore,cont,dice);
    if(tempScore>=20){
        cont=0;
    }
    isEndTour(cont,tempScore,humanTotalScore);
    computerTotalScore=totalScore;
    }
    printf("computer total score %d\n",computerTotalScore);
    sleep(2);
    if(computerTotalScore>=100){
        printf("human wins with %d points\n",humanTotalScore);
        game=1;
    }

}
//zar at ve yazdır
void rollDice(){
    dice=rand()%6+1;
    printf("you rolled %d\n",dice);
}
//1 geldiyse turu bitir gelmediyse geçici skora zarı ekle
void check(){
    if(dice==1){
        cont=0;
        printf("rolled %d and you lost your %d points\n",dice,tempScore);
        tempScore=0;
    }
    else{
        tempScore+=dice;
    }
}

void ask(){
    printf("zar atmak istiyorsanız 1 atmak istemiyorsanız 0 ye basınız\n");
    scanf("%d",&cont);
}

void isEndTour(){
    if(cont==0){
        if(tempScore>=20){
        totalScore+=tempScore;
        printf("%d\n",totalScore);
        }
    }
}

void isGameEnd(){
    if(humanTotalScore>=100){
        printf("human wins with %d points\n",humanTotalScore);
        game=1;
    }
    else if(computerTotalScore>=100){
        printf("computer wins with %d points\n",computerTotalScore);
        game=1;
    }
    else{
        game=0;
    }



}
