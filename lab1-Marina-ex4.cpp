#include <iostream>

double SeriesSum(int n) {
   double sum = 0;

    for (int i = 1; i <= n; i++) {
        sum = sum + (double) 1/i;
    }
    return sum;
}
int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    float S = SeriesSum(n);

    std::cout << "Sum of the series: " << S << std::endl;

    return 0;
}

