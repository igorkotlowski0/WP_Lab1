#include <stdio.h>

int main() {
    float temperatura;
    char kierunek;
    
   

    printf("podaj temperature");
    scanf("%f", &temperatura);
    printf("wybierz z czego zamieniasz: C lub F");
    scanf("%c" &kierunek);


    if (kierunek== 'C'){
        temperatura = temperatura *1.8 + 32;
        printf("wynik %d", temperatura);
    }
    else {
        printf("&temperatura-32 / 1.8 st C");
    }
    
    if (kierunek == 'F'); {
        printf("&temperatura-32 / 1.8 st C");
        }
        
    }

    return 0;
}
