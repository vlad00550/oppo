double my_pow(double num, unsigned int pow) {
	double res = 1;
	for (unsigned int i = 0;i < pow;i++) {
		res *= num;
	}
	return res;
}