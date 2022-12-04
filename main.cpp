double my_pow(double num, int pow) {
    double res = 1;
    char mines = pow < 0;
    pow = abs(pow);
    for (unsigned int i = 0;i < pow;i++) {
        res *= num;
    }
    return (mines) ? (1.0/result) : result;
}