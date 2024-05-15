long absdiff(long a, long b) {
    long result;
    if (a < b)
        result = b - a;
    else
        result = a - b;
    return result;
}