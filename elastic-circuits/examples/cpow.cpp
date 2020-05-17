int cpow(int x, int n){
        int r = 1;
        while (n > 0) {
                n -= 1;
                r *= x;
        }
        return r;
}
