#define mod %

int euclidian_gcd(int a, int b) {
    return b ? euclidian_gcd(b, a mod b) : a;
}
