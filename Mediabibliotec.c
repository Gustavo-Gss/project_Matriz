float Med(int tamanhoMatriz, int *p){
        float sm1 = 0; int i=0, j=0; 
        tamanhoMatriz = tamanhoMatriz + 1;
		for ( i=0; i<tamanhoMatriz; i++ ){
            for ( j=0; j<tamanhoMatriz; j++ ){
                sm1 = sm1 + *(p+(i*tamanhoMatriz)+j);
            }
        }
                sm1 =  sm1 / (tamanhoMatriz*tamanhoMatriz);
                return sm1;
        }
