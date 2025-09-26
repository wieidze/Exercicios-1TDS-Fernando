#include <stdio.h>
int main()
 {
 {
     int senha = 0; //variavel senha
     int senha = 0; //variavel senha
    int tentativa;
     printf("digite uma senha de 4 digitos "); //pedir pra digitar a senha
     printf("digite uma senha de 4 digitos "); //pedir pra digitar a senha
     scanf("%d",&senha); //guardar o valor da variavel
     scanf("%d",&senha); //guardar o valor da variavel
 
 
     for(int numero1 = 0; numero1 < 10; numero1++){
     for(int numero1 = 0; numero1 < 10; numero1++){
         for(int numero2 = 0; numero2 < 10; numero2++){
         for(int numero2 = 0; numero2 < 10; numero2++){
             for(int numero3 = 0; numero3 < 10; numero3++){
             for(int numero3 = 0; numero3 < 10; numero3++){
                 for(int numero4 = 0; numero4 < 10; numero4++){
                 for(int numero4 = 0; numero4 < 10; numero4++){
                    printf("valor:%d %d %d %d \n", numero1,numero2, numero3, numero4);
                    tentativa = numero1*1000 + numero2*100 + numero3*10 + numero4;
                    if(senha == tentativa){
                       printf("sua senha é: %d%d%d%d \n", numero1, numero2, numero3, numero4);
                       return 0;

int main(){
    
    for(int i= 0;i <=9; i++){
        for(int x= 0;x <=9; x++){
            for(int y= 0;y <=9; y++){
                for(int z= 0;z <=9; z++){
            
            printf("tentativas: %d %d %d %d \n",i,x,y,z);
                }
             }
        }
    }printf("neymar da silva da silvinha");

}
                    } 
                    else{
                        printf("tentativa: %d %d %d %d \n", numero1, numero2, numero3, numero4);
                    }
                 }
                 }
             }
             }
         }
         }
     }
     }
 }
 }
