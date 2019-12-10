#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    float alan,cevre;

    printf("Dairenin yaricapini giriniz: ");
    scanf("%f",&r);

    alan=3.14*r*r;
    cevre=2*3.14*r;

    printf("Dairenin alani: %f\n",alan);
    printf("Dairenin cevresi: %f\n",cevre);

    if(alan>cevre)
        printf("Dairenin alani cevresinden buyuktur!\n");
    else if(cevre>alan)
        printf("Dairenin cevresi alanindan buyuktur!\n");
    else
        printf("Dairenin alani cevresine esittir!\n");

    return 0;
}
