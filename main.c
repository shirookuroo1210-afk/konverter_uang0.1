#include <stdio.h>

int main()
{
    int pilihan;
    float jumlah, hasil;
    float kurs_usd = 15000;
    float kurs_yen = 100;
    
    printf("Pilih konversi:\n");
    printf("1. Rupiah ke USD\n");
    printf("2. USD ke Rupiah\n");
    printf("3. Rupiah ke Yen Jepang\n");
    
    printf("Pilihan (1-3): ");
    scanf("%d", &pilihan);
    
    printf("Masukkan jumlah: ");
    scanf("%f", &jumlah);
    
    switch (pilihan)
    {
        case 1:
            hasil = jumlah / kurs_usd;
            printf("Hasil: %.2f USD\n", hasil);
            break;
        case 2:
            hasil = jumlah * kurs_usd;   
            printf("Hasil: %.2f Rupiah\n", hasil);
            break;
        case 3:
            hasil = jumlah / kurs_yen;   
            printf("Hasil: %.2f Yen\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid\n");
    }
    
    return 0;
}