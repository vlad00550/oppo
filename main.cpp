double my_pow(double num, int pow) {
    long result = 1;
    char mines = pow < 0;
    pow = abs(pow);
    while (pow) {
        if (pow % 2 == 0) {
            pow /= 2;
            num *= num;
        }
        else {
            pow--;
            result *= num;
        }
    }
    return (mines) ? (1.0/result) : result;
}