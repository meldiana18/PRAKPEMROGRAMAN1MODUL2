#include <stdio.h>
 int main (){
    float jari_jari, tinggi_bejana, volume, luas, phi, keliling;
    phi= 3.14285;
    scanf("%f", &jari_jari);
    scanf("%f", &tinggi_bejana);
    volume= phi* jari_jari*jari_jari*tinggi_bejana;
    luas=2*phi*jari_jari*(jari_jari+tinggi_bejana);
    keliling=2*phi*jari_jari;
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
 }
    