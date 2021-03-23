    int Maiormenor1( int tamanhoMatriz, int *p){
            int menornum1 = 0, maiornum1 = 0, i=0, j=0, ampli1 = 0;
					if(tamanhoMatriz == 1 || 2){
					tamanhoMatriz = tamanhoMatriz + 1;
                    menornum1= *(p+(i*tamanhoMatriz)+j);
                    maiornum1= *(p+(i*tamanhoMatriz)+j);
                    for(i=0;i<tamanhoMatriz;i++){
                       for(j=0;j<tamanhoMatriz;j++){
                            if(*(p+(i*tamanhoMatriz)+j)<menornum1){
                                menornum1=*(p+(i*tamanhoMatriz)+j);
                }if(*(p+(i*tamanhoMatriz)+j)>maiornum1){
                    maiornum1=*(p+(i*tamanhoMatriz)+j);
        }
    } 
 }
 	ampli1 = maiornum1 - menornum1;
 	return ampli1;
 }
}
