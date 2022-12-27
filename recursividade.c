#include <stdio.h>
#include <stdlib.h>


//Fatorial
int fat(int n){                
    if((n==1)||(n==0)){
        return 1;
    }
    else{
        return fat(n-1)*n;
    }    
}

//Potenciacao
int potencia(int n, int x){    
    int resultado;
    if(x==0){
        resultado = 1;
    }
    else{
        resultado = n*potencia(n, x-1);
    }
    return resultado;
}

//Soma Sucessiva
int soma_sucessiva(int n, int x){  
    int resultado;
    if((n==0)||(x==0)){
        resultado = 0;
    }
    else{
        resultado = n+soma_sucessiva(n, x-1);
    }
    return resultado;
}

//Mod
int mod(int n, int x){    
    int resultado;
    if(n==0||x==1){
        resultado = 0;
    }
    else if(x<n){
        resultado = n;
    }
    else{
        resultado = mod(n-x, x);
    }
    return resultado;
}

//Fibonacci
int fibonacci(int n){   
    int resultado;
    if(n==1||n==2){
        return 1;
    }
    else{  
    resultado = fibonacci(n-1)+fibonacci(n-2);
    return resultado;
    }
}




int main(){
    int opc, n, x;

    do{
        printf("*****MENU*****\n");
        printf("1- Fatorial de N\n");
        printf("2- X^Y\n");
        printf("3- X*Y por soma sucessiva\n");
        printf("4- X mod Y\n");
        printf("5- N termos Fibonacci\n");
        printf("6- FIM DO PROGRAMA\n");
        
        printf("Digite sua escolha: ");
        scanf("%d", &opc);
        
        switch(opc){
            case 1: printf("Digite um numero: "); scanf("%d", &n);
            printf("O resultado do fatorial foi: %d \n", fat(n));
            break;
            case 2: printf("Digite um numero para a base: "); scanf("%d", &n);
            printf("Digite um numero para o expoente: "); scanf("%d", &x);
            printf("O resultado da operacao foi: %d \n", potencia(n,x));
            break;
            case 3: printf("Digite o primeiro numero: "); scanf("%d", &n);
            printf("Digite o segundo numero: "); scanf("%d", &x);
            printf("O resultado da operacao foi: %d \n", soma_sucessiva(n,x));
            break;
            case 4: printf("Digite o primeiro numero: "); scanf("%d", &n);
            printf("Digite o segundo numero: "); scanf("%d", &x);
            printf("O resultado da operacao foi: %d \n", mod(n,x));
            break;
            case 5: printf("Digite um numero: "); scanf("%d", &n);
            printf("O resultado do fatorial foi: %d \n", fibonacci(n));
            break;
        }
    }
    while(opc>0 && opc<6);
    
    
    return 0;
}
    
