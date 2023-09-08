/*
Davi Roberto cl203362
Matheus Oliveira cl203131
  */
int ex01(int matriz[][4], int linhas, int *lin, int * col) {

int i,j;
int maior=matriz[0][0];
for(i=0; i<linhas; i++){

    for(j=0; j<4; j++) {

        if(matriz[i][j]>maior) {
            maior=matriz[i][j];
            *lin=i;
            *col=j;
            }
    }
}
return maior;
};


int ex02(int matriz[][4], int linha) {
    int i=0, diagonalPrincipal=0;

    for(i=0; i<linha; i++){
        diagonalPrincipal += matriz[i][i];
    }

return diagonalPrincipal;
};


float ex03(int matriz[][4], int linhas) {
    int i=0,j=linhas, diagonalSecundaria=0;
    for(i=0; i<linhas; i++) {
        for(j=linhas; j>=0; j--) {
            if(j+i==3) {
                diagonalSecundaria += matriz[i][j];
            };
        };
    };
return diagonalSecundaria;
};


int ex04(int matriz[][4], int linhas) {
    int i,j,quadradoMagico=0,auxLinhas=0, auxColunas=0,diagonalPrincipal=0, diagonalSecundaria=0,aux=0;

    for(i=0; i<linhas; i++) {
        aux+=matriz[i][0];
        diagonalPrincipal += matriz[i][i];
    };

    for(i=0; i<linhas; i++) {
        for(j=3; j>=0; j--) {
            if(i+j==3) {
                diagonalSecundaria += matriz [i][j];
            };
        };
    };

    for(i=0; i<linhas; i++) {
        auxLinhas=0;
        auxColunas=0;

        for(j=0; j<linhas; j++) {
            auxLinhas+=matriz[i][j];
            auxColunas+=matriz[j][i];
        };
    };



    if(aux==diagonalPrincipal&&(aux==diagonalSecundaria)&&(aux==auxLinhas)&&(aux==auxColunas)) {
        quadradoMagico = 1;
    }
    else{
        quadradoMagico = 0;
    };

    return quadradoMagico;
};

int ex05(int matriz[][4], int linhas) {
    int i,j,elemIdenticos=0,k=0,l=0, index=0;
    int abaixo[6], acima[6];

   for(i=0; i<4; i++) {
       for(j=0; j<4;j++){
           if(i<j){
               acima[index] = matriz[i][j];
               index++;
           }
           else{
           continue;
           };
       };
   };

    index=0;
   for(l=0; l<4; l++) {
       for(k=0; k<4;k++){
           if(k>l){
               abaixo[index] = matriz[k][l];
               index++;
           }
           else{
           continue;
           };
       };
   };

   for(index=0; index<6; index++) {
        if(abaixo[index]==acima[index]){
            elemIdenticos=1;
        }
        else{
            elemIdenticos=0;
            break;
        };
   }

    return elemIdenticos;
};
