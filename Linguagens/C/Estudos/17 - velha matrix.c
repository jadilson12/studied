
#include <stdio.h>
#include <stdbool.h>
 int main() {
     char v[3][3],simb="x";
    int l=0,c=0;
    for (l = 0; l < 3; l++) {
         for (c = 0; c < 3; c++) {
             scanf(" %s ",&v[l][c]);
         }
         printf("\n");

    }
     for (l = 0; l < 3; l++) {
         for (c = 0; c < 3; c++) {
             printf("|%2c", v[l][c]);
         }
         printf("\n");

     }


}
