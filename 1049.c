#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    char a[30], b[30], c[30];
    scanf("%s", a);
 
    if((strcmp(a, "vertebrado"))== 0) {

        scanf("%s", b);
        if((strcmp(b, "ave"))== 0) {
            scanf("%s", c);
            if((strcmp(c, "carnivoro"))== 0) {
                printf("aguia\n");
            }if((strcmp(c, "onivoro"))== 0) {
                printf("pomba\n");
            }
        }if((strcmp(b, "mamifero"))== 0) {
                scanf("%s", c);
                if((strcmp(c, "onivoro"))== 0) {
                    printf("homem\n");
                }if((strcmp(c, "herbivoro"))== 0) {
                    printf("vaca\n");
                }
            }

    }
    if((strcmp(a, "invertebrado"))== 0) {

        scanf("%s", b);
        if((strcmp(b, "inseto"))== 0) {
            scanf("%s", c);
            if((strcmp(c, "hematofago"))== 0) {
                printf("pulga\n");
            }if((strcmp(c, "herbivoro"))== 0) {
                printf("lagarta\n");
            }
        }if((strcmp(b, "anelideo"))== 0) {
                scanf("%s", c);
                if((strcmp(c, "hematofago"))== 0) {
                    printf("sanguessuga\n");
                }if((strcmp(c, "onivoro"))== 0) {
                    printf("minhoca\n");
                }
            }
        
    }
    return 0;
}

