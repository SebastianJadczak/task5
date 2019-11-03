  #include <stdio.h>
 #include <stdbool.h> 
 #include <math.h>
 
 
// Zadanie 5:
// Dla danego n-elementowego ci¹gu liczb rzeczywistych obliczyc wartoœæ œredni¹
// i odchylenie standardowe;
 // Autor: Sebastian Jadczak. tylko :)
 

int pobierz_wybor(void);
int pobierz_pierwszy(void);
float wprowadzenie_liczb(void);
int counter;
float srednia;
float suma;
float sumaSkladowych;
float skladowa;
float odchylenie;

 float oblicz_srednia(float suma, int counter)
{
	srednia= suma/counter;
 } 

 float oblicz_skladowa(float liczba, float srednia){
 	
 	float pomocnicza = liczba-srednia;
 	skladowa= pomocnicza*pomocnicza;
 	sumaSkladowych= sumaSkladowych+skladowa;
 	
 };

float oblicz_odchylenie(float sumaSkladowych, int counter){
		float pomocnicza= sumaSkladowych/counter;
 	odchylenie = sqrt(pomocnicza);	
}

 
 int main(void){
 	
int wybor;
int pobierz_wybor(void);


while((wybor=pobierz_wybor())!='q')
{
	switch(wybor)
	{
		case'a': wprowadzenie_liczb();
		break;
		case'b': printf(" %f", srednia);
		printf("\n");
		break;
		case'c': printf("%f", odchylenie);
			printf("\n");
		break;
		default: printf("B³¹d programu\n");
		break;
		
	}
}




 	return 0;
 }
	
 
 int pobierz_wybor(void)
 {
 	int ch;
 	
 	printf("Wpisz wybrana litere\n");
 	
 	printf("a Wpisz liczby 			b.oblicz srednia\n");
 	printf("c.oblicz odchylenie 		q. koniec\n");
 	
 	ch=pobierz_pierwszy();
 	while((ch<'a' || ch>'c')&& ch!='q'){
 		printf("Wpisz a,b,c lub q\n");
 		ch=pobierz_pierwszy();
 		
	 }
	 return ch;
 }
 
 int pobierz_pierwszy(void){
 	int ch;
 	ch=getchar();
 	while(getchar()!='\n')
 	continue;
 	return ch;
 }
 
 float wprowadzenie_liczb(void){
 	
 	float liczba;
 	printf("WprowadŸ liczby:\n");
 	
 	scanf("%f", &liczba);
 	printf("\n");
 	counter++;
 	suma= suma+liczba;
 	oblicz_srednia(suma,counter);
 	oblicz_skladowa(liczba,srednia);
 	oblicz_odchylenie(sumaSkladowych,counter);
 }
 

 
 
