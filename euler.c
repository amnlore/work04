int p1() {
    int sum = 0;
    int i;
    for (i = 1; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            sum += i;
        }
    }
    return sum;
}

int p6() {
    int summed_squares = 0;
    int squared_sums = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        summed_squares += (i * i);
        squared_sums += i;
    }
    squared_sums = (squared_sums * squared_sums);

    return squared_sums - summed_squares;
}
