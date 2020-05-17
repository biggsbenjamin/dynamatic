int ie2(int a, int b){
    int k;
    k = a-b;
    if (a > b) {
        k = k*a;
    } else if (b > a) {
        k = k * b;
    }
    return k;
}
