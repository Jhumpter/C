#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(){
    //Creating the main menu
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
    case 4://Close the game
        printf("See ya!");
        sleep(2);
        return 0;
    }
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

int game(){
    system("cls");
    FILE* fd;
    fd = fopen("blocks.txt", "r");
    if(fd == NULL){
        printf("Something went wrong\n");
        return 1;
    }
    int blocks[100];
    for(int i=0;i<100;i++){
        int block;
        fscanf(fd,"%d ",&block);
        blocks[i] = block;
    }
    int loop = 1;
    int current = 0;
    int next = 1;
    int grid[5][10] = {0};
    int columns_height[5] = {0};
    while(loop){
        system("cls");
        int column = 0;
        print_grid(grid,blocks,&current,&next);
        scanf("%d",&column);
        while(column>5 || column<0){
            printf("Invalid option\n");
            scanf("%d",&column);
        }
        add_block(column,grid,blocks,columns_height,&current,&next);
    }
    return 0;
}

void print_grid(int grid[][10],int blocks[],int* current,int* next){
    printf("                     NEXT:\n");
    printf("          *----*    *----*\n");
    printf("          |%4d|    |%4d|\n",blocks[*current],blocks[*next]);
    printf("          *----*    *----*\n\n");
    for(int i=0;i<10;i++){
            printf("*----*----*----*----*----*\n");
            printf("|%4d|%4d|%4d|%4d|%4d|\n",grid[0][9-i],grid[1][9-i],grid[2][9-i],grid[3][9-i],grid[4][9-i]);
        }
        printf("*----*----*----*----*----*\n");
        printf("|  1 |  2 |  3 |  4 |  5 |\n");
}

void add_block(int column, int grid[][10], int blocks[], int columns_height[], int* current, int* next){
    int block_column = column-1;
    if(columns_height[block_column]<10){
        for(int i=9;i>=columns_height[block_column];i--){
            grid[block_column][i] = blocks[*current];
            if(i<9)
                grid[block_column][i+1] = 0;
            system("cls");
            print_grid(grid, blocks, current, next);
        }
        columns_height[block_column]++;
        (*current)++;
        (*next)++;
    }
}

int main(){
    menu();
    return 0;
}
