#include <stdio.h>
#include <stdlib.h>

int main()
{

    float mat1[2][2], mat2[2][2], mat_soma[2][2], mat_sub[2][2], mat_mult[2][2];
    int codigo,j=0,continuar1,continuar2,valor1,valor2,cont1=0;


    for(int i=0; i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("DIGITE OS VALORES DA PRIMEIRA MATRIZ  \n");
            scanf("%f",& mat1[i][j]);
            cont1++;
        }
      }


     printf("PARA ADICIONAR UM VALOR DIGITE 1 , PARA CONTINUAR DIGITE 0  \n");
     scanf("%d",& continuar1);

     do{
     printf("DIGITE O VALOR \n");
     scanf("%d",& valor1);

     printf("ESCOLHA UMA OPERACAO PARA APLICAR O VALOR\n");

     printf("1 : SOMAR O VALOR A MATRIZ\n");
     printf("2 : MULTIPLICAR PELA MATRIZ\n");
     printf("3 : SUBTRAIR DA MATRIZ\n");

     if (valor1 == 1){
    for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++)
            {
        mat1[i][j] = mat1[i][j] + valor1 ;
          }
        }
     }
     else if (valor1 == 2){
        for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {
        mat1[i][j] = mat1[i][j] * valor1;
       }
      }
     }
     else if (valor1 ==3 ){
        for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {
        mat1[i][j] = mat1[i][j] - valor1;
       }
      }
     }
      else {
        printf("OPERAÇÃO INVALIDA");
      }

 }while(continuar1!=0);
 // FIM DA PRIMEIRA MATRIZ

   for(int i=0; i<2;i++) {
        for(int j=0;j<2;j++) {
            printf("DIGITE OS VALORES DA SEGUNDA MATRIZ  \n");
            scanf("%f", &mat2[i][j]);
        }
      }
    do{
     printf("PARA ADICIONAR UM VALOR DIGITE 1 , PARA CONTINUAR DIGITE 2 :\n");
     scanf("%d\n",&continuar2);

     printf("DIGITE O VALOR\n");
     scanf("%d\n",&valor2);

     printf("ESCOLHA UMA OPERACAO PARA APLICAR O VALOR\n");

     printf("1 : SOMAR O VALOR A MATRIZ\n");
     printf("2 : MULTIPLICAR PELA MATRIZ\n");
     printf("3 : SUBTRAIR DA MATRIZ\n");

     if (valor2 == 1){
    for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++)
            {
        mat2[i][j] = mat2[i][j] + valor2 ;
          }
        }
     }
     else if (valor2 == 2){
        for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {
        mat2[i][j] = mat2[i][j] * valor2;
       }
      }
     }
     else if (valor2 ==3 ){
        for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {
        mat2[i][j] = mat2[i][j] - valor2;
       }
      }
     }
      else {
        printf("OPERAÇÃO INVALIDA");
      }
    }while(continuar2 != 2);

   do{

    printf("DIGITE O CODIGO RESPECTIVO A OPERACAO A SER REALIZADA ENTRE AS MATRIZES \n");

    printf("0 : SAIR DO PROGRAMA \n");
    printf("1 : SOMA \n");
    printf("2 : SUBTRACAO\n");
    printf("3 : MULTIPLICACAO\n");
    printf("4 : UNIAO\n");
    printf("5 : INTERSECCAO\n");

    scanf("%d",& codigo);

    if (codigo == 1){


    for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {

            mat_soma[i][j] = mat1[i][j] + mat2[i][j];

        }
     }
     for(int i=0;i<2;i++){
            printf("\n");
        for(int j=0;j<2;j++){

            printf("Resultado\n");
            printf("%f\n",mat_soma[i][j]);
        }
     }
    }

     else if (codigo == 2){

    for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++) {
            mat_sub[i][j] = mat1[i][j] - mat2[i][j];

        }
      }
      for(int i=0;i<2;i++){
            printf("\n");
        for(int j=0;j<2;j++){

            printf("Resultado\n");
            printf("%f\n",mat_sub[i][j]);
        }
      }
     }


     else if (codigo == 3){

    int n=0;

    for(int i=0; i<2;i++) {
            printf("\n");
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){

            n += (mat1[i][k] * mat2[k][j]);

                }
        }
          mat_mult[i][j] = n;
          n=0;
      }

      for(int i=0;i<2;i++){
            printf("\n");
        for(int j=0;j<2;j++){

            printf("Resultado\n");
            printf("%f\n",mat_mult[i][j]);
        }
     }

    }
    else if (codigo!=0 && codigo>3){
        printf("CODIGO NAO IMPLEMENTADO");}



}while(codigo!=0);

// RESPOSTAS

if (codigo==1)
 for(int i=0;i<2;i++){
            printf("\n");
        for(int j=0;j<2;j++){

   printf("%f",mat_soma[i][j]);
        }
    }


    return 0;
}
