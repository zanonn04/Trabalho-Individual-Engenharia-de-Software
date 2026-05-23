int fatorial(int n) {
    if (n <= 1) return 1;
    return n * fatorial(n - 1);
}

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}