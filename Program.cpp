/* 
 * File:   main.cpp
 * Author: godzkhere and Sadiq
 *
 * Created on 4/7/2016, 20.14
 */

#include <cstdlib>
#include <stdio.h>
#include <string.h>
#define MAX 100 
int letturafile(char file [] , int vettore []);
int main (){
 char file[MAX];
 int vettore[MAX] , dim , i ;
 printf("Write there the PATH of the file you want open : ");
 scanf("%s" , file);
 dim = letturafile(file , vettore);
 printf("The program PID is :\n");
 for ( i=0 ; i < dim ; i++){
  printf("%d " , vettore[i]);   
 }
 printf("\n");
 return 0 ;   
}
int letturafile(char file [] , int vettore[]){
int i = 0; 
FILE *puntatore;
puntatore=fopen(file , "r");
fscanf(puntatore, "%d", &vettore[i]);
	while (!feof(puntatore)) {
		i++;
		fscanf(puntatore, "%d", &vettore[i]);
	}
fclose(puntatore);  
return i ;
}
