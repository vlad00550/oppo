double my_pow(double num, unsigned int pow) {
	double result = 1;
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
    return result;
}