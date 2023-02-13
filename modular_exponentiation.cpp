long long modular_pow(long long base, long long exponent, long long modulo) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulo;
        }
        exponent = exponent >> 1;
        base = (base * base) % modulo;
    }
    return result;
}
