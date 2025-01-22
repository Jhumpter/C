#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menu(){
    int num_menu = 0;
    system("cls");
    printf("Welcome to Merge Blocks!\n\n");
    printf("[1] Play\n");
    printf("[2] Ranking\n");
    printf("[3] Settings\n");
    printf("[4] Exit\n\n");
    printf("Type a number: ");
    scanf("%d", &num_menu);
    switch(num_menu){
    case 1:
        game();
        break;
    case 2:
        show_ranking();
        break;
    case 3:
        settings();
        break;
    case 4:
        printf("See ya!");
        sleep(2);
        return 0;
    }
}

void game(){
    system("cls");
    int num_game = 1;
    printf("Press SPACE to start\n");
    do{
        scanf("%c", &num_game);
    }while(num_game!=32);
    system("cls");
    start_game();
    do{
        scanf("%c", &num_game);
    }while(num_game!=0);

    menu();
}

void show_ranking(){
    system("cls");
    int num_ranking = 1;
    printf("----Ranking----\n");
    printf("Press 0 to quit");
    do{
        scanf("%d", &num_ranking);
    }while(num_ranking!=0);
    menu();
}

void settings(){
    system("cls");
    int num_settings = 1;
    printf("****Settings****\n");
    printf("Press 0 to quit");
    do{
        scanf("%d", &num_settings);
    }while(num_settings!=0);
    menu();
}

void start_game(){
    printf("________________________________\n");
    for(int i=0;i<33;i++){
        printf("|                              |\n");
    }
    printf("________________________________\n");
}

int main(){
    menu();
    return 0;
}
