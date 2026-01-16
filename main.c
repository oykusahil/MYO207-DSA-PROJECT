#include <stdio.h>

// Öykü Sahil
// 2320171036
//https://www.btkakademi.gov.tr/portal/certificate/validate?certificateId=EoPfJnn2L7


// Bubble Sort Fonksiyonu
void bubbleSort(int dizi[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

// Binary Search Fonksiyonu
int binarySearch(int dizi[], int n, int aranan) {
    int sol = 0, sag = n - 1;
    while (sol <= sag) {
        int orta = (sol + sag) / 2;

        if (dizi[orta] == aranan)
            return orta;
        else if (dizi[orta] < aranan)
            sol = orta + 1;
        else
            sag = orta - 1;
    }
    return -1;
}

int main() {
    int dizi[] = {34, 7, 23, 32, 5, 62, 78, 12};
    int n = sizeof(dizi) / sizeof(dizi[0]);
    int i, aranan, sonuc;

    printf("Mevcut dizi: ");
    for (i = 0; i < n; i++)
        printf("%d ", dizi[i]);

    bubbleSort(dizi, n);

    printf("\nSıralı dizi: ");
    for (i = 0; i < n; i++)
        printf("%d ", dizi[i]);

    printf("\n\nAranacak sayıyı giriniz: ");
    scanf("%d", &aranan);

    sonuc = binarySearch(dizi, n, aranan);

    if (sonuc != -1)
        printf("\n%d sayısı dizide %d. indiste bulundu.\n", aranan, sonuc);
    else
        printf("\n%d sayısı bulunamadı.\n", aranan);

    return 0;
}

