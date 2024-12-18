#include <stdio.h>

int main(){
    
    //-----------------------------------------
    printf("Sistema de calcular idade iniciado\n");
    int idade = 0;
    printf("Digite sua idade:\n");
    scanf("%d",&idade);
    if(idade >= 18){
        printf("Voce e maior de idade\n");
    } else{
        printf("Voce e menor de idade\n");
    }
    printf("Sistema de calcular idade finalizado\n");
    //-----------------------------------------
    printf("Sistema de pin iniciado\n");
    int pin;
    printf("Digite sua senha\n");
    scanf("%d",&pin);
    while(pin != 2010){
        printf("Senha incorreta, digite novamente\n");
        scanf("%d",&pin);
    }
    printf("Senha correta\n");
    printf("Sistema de pin finalizado\n");
}

//        if: && = and ---------- || = or ------------- != = ~= ----------- ! = not

