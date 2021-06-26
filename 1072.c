#include <stdio.h>
//função para conferir se a condição de estar dentro é verdadeira;
int checarintervalo(int a){
    int dentro = 0;
    dentro = a>= 10 && a<= 20;
    
    return dentro;
}

int checarintervalo(int a);

int main(){ 
    //leitura e processamento dos dados
    int n, i, num, in = 0, out = 0;

	scanf("%d", &n);

    for( i = 0; i<n; i++){
        scanf("%d", &num);
        in = in + checarintervalo(num);
    }
    out = n - in;
    //impressão de dados
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}