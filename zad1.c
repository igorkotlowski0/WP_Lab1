#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok;
    float wzrost;
    bool prawko = true;

    printf("podaj rok urodzenia", rok);
    scanf("%a", &rok);

    pritf("podaj swoj wzrost w metrach np 1.80m", wzrost);
    scanf("%f", &wzrost);

    printf("jestem urodzony w %a roku i mam %f wzrostu i mam prawo jazdy");
    
    return 0;


}