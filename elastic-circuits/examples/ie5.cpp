int ie5(int a, int b, int c){
    int k;
    k = a-b;
    if (a > b) {
        k = k*a;
    } else if (b > a) {
        k = k * b;
    } else if (b == a) {
        k = k * b * a;
    }
    return k+c;
}

