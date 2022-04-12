
#include<stdio.h>
#include<float.h>
 
int main(){
	int numeroConsulenti,i;
	float fatturatoConsulente,fatturatoAzienda=0,spesaConsulente,spesaAzienda=0,maxFatturato=FLT_MIN,minSpesa=FLT_MAX,maxGuadagno=FLT_MIN,guadagnoConsulente,guadagnoAzienda=0;
	
	printf("Inserisci il numero di consulenti : ");
	scanf("%d",&numeroConsulenti);
	
	for(i=0;i<numeroConsulenti;i++){
		printf("\nInserisci il fatturato del consulente %d: ",i+1);
		scanf("%f",&fatturatoConsulente);
		if(fatturatoConsulente>maxFatturato)
			maxFatturato=fatturatoConsulente;
	fatturatoAzienda+=fatturatoConsulente;
	
		printf("\nInserisci le spese del consulente %d: ",i+1);
		scanf("%f",&spesaConsulente);
		if(spesaConsulente<minSpesa)
			minSpesa=spesaConsulente;
			;
	spesaAzienda+=spesaConsulente;
	
	guadagnoConsulente=fatturatoConsulente-spesaConsulente;
	if(guadagnoConsulente>maxGuadagno){
		maxGuadagno=guadagnoConsulente;
	}		
	guadagnoAzienda+=guadagnoConsulente;
		
		
	}
	printf("\nTra i consulenti:\nIl fatturato maggiore e' di %f.\nLa spesa minore e' di %f.\nIl guadagno maggiore e' di %f.",maxFatturato,minSpesa,maxGuadagno);
	printf("\nIl fatturato dell azienda e' di %f.\nLa spesa dell azienda e' di : %f.\nIl guadagno dell azienda e' di :%f",fatturatoAzienda,spesaAzienda,guadagnoAzienda);

	
	
}
