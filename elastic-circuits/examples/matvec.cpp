//------------------------------------------------------------------------
// FIR
//------------------------------------------------------------------------

/*int matvec(int M[30][30], int V[30], int Out[30]) {
    int i, j;
    int tmp = 0;

    for (i = 0; i < 30; i++) {
        tmp = 0;

        for (j = 0; j < 30; j++) {
            tmp += V[j] * M[i][j];
        }
        Out[i] = tmp;
    }

    return tmp;
}*/

void matvec(int x[20][20], int v[20], int ret[20]){
    int i=0;
    int j=0;
    int sum=0;

    while (i < 20){
        sum=0;
        while (j < 20){
            sum += x[i][j] * v[j];
            j++;
        }
        ret[i] = sum;
        i++;
    }
}

