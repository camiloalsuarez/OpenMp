#include <stdio.h>


int main() {
    printf("the begin of loop");
    #pragma omp parallel
    {
    #pragma omp for
    for(int n = 0; n < 10; ++n)
    printf(" %d", n);
    }
    printf("the end of loop");

//    Expected output will be similar to this:
//    the begin of loop
//    6378049152
//    the end of loop
    return 0;
}