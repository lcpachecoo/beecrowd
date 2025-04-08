#include <stdio.h>

int main()
{
    int diai,diaf,horai,horaf,mini,minf,segi,segf;
    int dia=0, hora=0,min=0,seg=0;
    scanf("Dia %d\n", &diai);
    scanf("%d  : %d : %d\n", &horai, &mini, &segi);
    scanf("Dia %d\n", &diaf);
    scanf("%d  : %d : %d\n", &horaf, &minf, &segf);
    //printf("%d %d %d %d %d %d %d %d ",diai,diaf,horai,horaf,mini,minf,segi,segf);
    dia = diaf - diai;
	hora = horaf - horai;
	min = minf - mini;
	seg = segf - segi;
	if(seg<0){
		seg+=60;
		min--;
	}
	if(min<0){
		min+=60;
		hora--;
	}
	if(hora<0){
		hora+=24;
		dia--;
	}
	printf("%d dia(s)\n",dia);
    printf("%d hora(s)\n",hora);
    printf("%d minuto(s)\n",min);
    printf("%d segundo(s)\n",seg);
    return 0;
}