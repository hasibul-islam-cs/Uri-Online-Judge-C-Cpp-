#include <stdio.h>

double IncreasingRatio(double p, double i){
    return ((i-p)*100)/p;
}

int main(){
    double PreviousPrice, IncreasedPrice;
    scanf ("%lf %lf", &PreviousPrice, &IncreasedPrice);

    printf ("%.2lf\%\n", IncreasingRatio(PreviousPrice, IncreasedPrice));

    return 0;
}
