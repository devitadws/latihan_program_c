#include <stdio.h>
main()
{
    char Nama[10], NoTelepon[20];
    int Umur;
    printf("Masukkan data diri anda");
    printf("\nNama:\n");
    scanf("%s", &Nama);
    printf("Umur\n");
    scanf("%d", &Umur);
    printf("NoTelepon\n");
    scanf("%s", &NoTelepon);
    printf("Hello %s, Umur %d, NoTelepon %s\n", Nama, Umur, NoTelepon);
    puts("Bagaimana kabar anda hari ini?");

    return 0;
}