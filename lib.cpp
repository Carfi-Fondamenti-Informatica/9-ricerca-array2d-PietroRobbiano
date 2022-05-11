void init( char mat[20]){
    for( int i=0; i<20; i++){
        mat[i]= ' ';
    }
    return;
}

void init( char mat[10][20]){
    for( int i=0; i<10; i++){
        for( int j=0; j<20; j++){
            mat[i][j]= ' ';
        }
    }
    return;
}

int ricerca(char mat[10][20],char ar[20]){
    for( int i=0; i<10; i++){
        for( int j=0; j<20; j++){
            if( mat[i][j] != ar[j]){
                break;
            } else if (mat[i][j] == ar[j]){
                if (j==19){
                    return i;
                }
            }
        }
    }
}
