#include <iostream>
 
int main() {
    int n, k, i, counter = 0;
    int a[50];
 
    std::cin >> n >> k;
 
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
 
    int kth_score = a[k - 1];
 
    for (i = 0; i < n; i++) {
        if (a[i] >= kth_score && a[i] > 0) {
            counter++;
        }
    }
 
    std::cout << counter << std::endl;
    return 0;
}
