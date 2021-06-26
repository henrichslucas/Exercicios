#include <stdio.h>
//função para conferir se a condição de estar dentro é verdadeira;
int checarsenha(int a, int passwd){
    int acerto;
    acerto = a == passwd;
    
    return acerto;
}

int main(){ 
    //leitura, processamento e impressão dos dados
    int n, i, senha = 2002, attempt = 0, check;

	while(attempt != senha){
        scanf("%d", &attempt);
        check = checarsenha(attempt, senha);
        printf(check?"Acesso Permitido\n":"Senha Invalida\n");
    }
    return 0;
}