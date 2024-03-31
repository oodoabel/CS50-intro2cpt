#include <stdio.h>

int main(){
    int colums, rows;
    puts("Enter numbers of colums");
    scanf("%d", &colums);

    puts("Enter numbers of rows");
    scanf("%d", &rows);
    
    for(int i = 1; i <= colums; i++){
        for(int j = 1; j <= rows; j++){
            printf("#");
        }
        printf("\n");
    }
}