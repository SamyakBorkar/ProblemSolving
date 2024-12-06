bool checkArmstrong(int n) {
    int length = 0, ams = 0, num = n;

    while (num != 0) {
        num /= 10;
        length++;
    }

    num = n;
    while (num != 0) {
        int d = num % 10;
        int p = 1;
        for (int i = 0; i < length; i++) {
            p *= d;
        }
        ams += p;
        num /= 10;
    }

    return ams == n;
}
