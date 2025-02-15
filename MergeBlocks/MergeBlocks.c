#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int menu(){
    //Exibindo o menu
    int num_menu = 0;
    system("cls");
    printf("Welcome to Merge Blocks!\n\n");
    printf("[1] Play\n");
    printf("[2] Ranking\n");
    printf("[3] Settings\n");
    printf("[4] Exit\n\n");
    printf("Type a number: ");
    //Scaneando a opcao escolhida
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
    case 4://Fecha o jogo
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
    //Abrindo arquivo que contem o numero dos blocos
    FILE* fd;
    fd = fopen("blocks.txt", "r");
    //Mensagem de erro
    if(fd == NULL){
        printf("Something went wrong\n");
        return 1;
    }
    //Guarda os numeros do arquivo em uma array
    int blocks[100];
    for(int i=0;i<100;i++){
        int block;
        fscanf(fd,"%d ",&block);
        blocks[i] = block;
    }
    //Inicializando elementos do jogo
    int loop = 1;                   //Verificador do loop
    int current = 0;                //Guarda o indice do bloco a ser colocado
    int next = 1;                   //Guarda o indice do proximo bloco
    int grid[5][10] = {0};          //Guarda a situacao do grid[coluna][linha]
    int columns_height[5] = {0};    //Altura de blocos das colunas
    //Gameloop
    while(loop){
        system("cls");
        print_grid(grid,blocks,&current,&next);
        //Scaneando qual coluna o usuario quer colocar o bloco
        int column = 0;
        scanf("%d",&column);
        //Verificando se a opcao eh valida
        while(column>5 || column<0){
            printf("Invalid option\n");
            scanf("%d",&column);
        }
        //Se for valida adiciona o bloco ao grid
        add_block(column,grid,blocks,columns_height,&current,&next);
    }
    return 0;
}

void print_grid(int grid[][10],int blocks[],int* current,int* next){
    //Print dos proximos blocos a serem colocados
    printf("                     NEXT:\n");
    printf("          *----*    *----*\n");
    printf("          |%4d|    |%4d|\n",blocks[*current],blocks[*next]);
    printf("          *----*    *----*\n\n");
    //Print do grid
    for(int i=0;i<10;i++){
            printf("*----*----*----*----*----*\n");
            printf("|");
            for(int j=0;j<5;j++){
                if(grid[j][9-i]==0)
                    printf("    |");
                else
                    printf("%4d|",grid[j][9-i]);
                if(j==4)
                    printf("\n");
            }
        }
        printf("*----*----*----*----*----*\n");
        printf("|  1 |  2 |  3 |  4 |  5 |\n");
}

void add_block(int column, int grid[][10], int blocks[], int columns_height[], int* current, int* next){
    int block_column = column-1;//Ajustando o nivel da coluna para o numero real
    if(columns_height[block_column]<10){//Verificando se ainda cabem blocos na coluna
        //Loop para simular o bloco caindo
        for(int i=9;i>=columns_height[block_column];i--){
            grid[block_column][i] = blocks[*current];
            //Apaga o rastro do bloco de cima
            if(i<9)
                grid[block_column][i+1] = 0;
            system("cls");
            //Junta se o bloco de baixo for igual ao atual
            if(grid[block_column][i] == grid[block_column][i-1]){
                grid[block_column][i] = grid[block_column][i+1];        //Desce o bloco de cima
                grid[block_column][i-1] = grid[block_column][i-1]*2;    //Junta os blocos
                columns_height[block_column]--;                         //Diminui o tamanho da coluna

                print_grid(grid, blocks, current, next);                //Reprinta o grid
                break;                                                  //Sai do loop
            } else {
                print_grid(grid, blocks, current, next);                //Reprinta o grid
            }
            Sleep(150);//Sleep que controla a velocidade que o bloco cai
        }
        columns_height[block_column]++; //Aumenta o tamanho da coluna
        (*current)++;                   //Aumenta o indice do bloco a ser colocado
        (*next)++;                      //Aumenta o indice do proximo bloco
        vertical_merge(grid,columns_height);
    }
}

void vertical_merge(int grid[][10], int columns_height[]){
    //Verifica 9 vezes(numero maximo) se existe algum bloco para juntar
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            if(grid[j][9-i] == grid[j][9-i-1] && grid[j][9-i]!=0){
                grid[j][9-i-1] = grid[j][9-i-1]*2;
                grid[j][9-i] = grid[j][9-i+1];
                columns_height[j]--;
            }
        }
    }
}

int main(){
    menu();
    return 0;
}
