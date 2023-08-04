#include <stdio.h>
void main()
{
    int jarak, kecepatan, waktu;
    printf("kecepatan");
    scanf("%d", &kecepatan);
    printf("\nwaktu");
    scanf("%d", &waktu);
    jarak = kecepatan * waktu;
    printf("Jadi jarak tempuh anda adalah %d km", jarak);
}