#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperScissors(char you, char comp){
    //return 1 if you win, -1 if you lose and 0 if draw.

    // condition for draw.
    if(you==comp){
        return 0;
    };

    // condition for not draw.
    if(you=='r' && comp=='s'){
        return 1;
    }else if(you=='s' && comp=='r'){
        return -1;
    };

    if(you=='p' && comp=='r'){
        return 1;
    }else if(you=='r' && comp=='p'){
        return-1;
    };

    if(you=='s' && comp=='p'){
        return 1;
    }else if(you=='p' && comp=='s'){
        return-1;
    };
}

int main(){
    char you,comp;
    int number;

    srand(time(0));
    number=rand()%100+1;
    if(number<33){
        comp='r';
    }else if(number<=33 && number>66){
        comp='p';
    }else{
        comp='s';
    }
    
    printf("enter 'r' for rock, 'p' for paper and 's' for scissors\n");
    scanf("%c",&you);
    int result=rockPaperScissors(you,comp);

    printf("you choose %c and computer choose %c\n",you,comp);
    if(result==0){
        printf("game was draw!\n");
    }else if(result==1){
        printf("you win!\n");
    }else{
        printf("you lose!\n");
    }
    return 0;
}