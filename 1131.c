#include <stdio.h>
int main() {
    int golsGRE=0, golsINT=0,golGRE=0, golINT=0, vitoriaGRE=0, vitoriaINT=0, escolha = 1, grenal = 0, empate = 0;

    while(escolha == 1){
        scanf("%d %d", &golINT, &golGRE);
        if(golGRE > golINT){
            golsGRE= golsGRE + golGRE;
            golsINT= golsINT + golINT;
            grenal++;
            vitoriaGRE++;
        }
        if(golGRE < golINT){
            golsGRE= golsGRE + golGRE;
            golsINT= golsINT + golINT;
            grenal++;
            vitoriaINT++;
        }
        if(golGRE == golINT){
            golsGRE= golsGRE + golGRE;
            golsINT= golsINT + golINT;
            grenal++;
            empate++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &escolha);
    }
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vitoriaINT);
    printf("Gremio:%d\n", vitoriaGRE);
    printf("Empates:%d\n", empate);

    if(vitoriaGRE > vitoriaINT){
        printf("Gremio venceu mais\n");
    }
    if(vitoriaGRE < vitoriaINT){
        printf("Inter venceu mais\n");
    }
    

    return 0;
}