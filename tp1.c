#include <stdio.h>
#include "tp1header.h"

int Q1();

int Q3(int a,int b);
int Q4();
int Q5();
int Q6();
int Q7(int a,int b);



int main() {
    Q1();
    int a =Q2();
    printf("%d \n",a);
    Q3(5,3);
    Q4();
    Q5();
    Q6();
    Q7(10,55);
    printf("Je l'ai modifié");
    return 0;
}


int Q1(){
    printf("Hello World !!!\n");
    return 0;
}

int Q3(int a, int b){
    if (a>b){
    printf("Le premier nombre est le plus grand");
return a;}
    if(b>a){
    printf("Le deuxième nombre est le plus grand");
return b;}
    printf("Les 2 nombres sont égaux");
return 0;
}

int Q4(){
    for(int i=0;i<100;i=i+1){printf("%d",i);}
return 0;
}

int Q5(){
    int i=0;
    while(i<100){
    printf("%d",i);
    i++;}
printf("/n");
return 0;
}

int Q6(){
   int p1=606707;
   printf("L'adresse est %p", &p1);
    printf("La valeur est %d",p1);
    return 0;

}

int Q7(int a, int b){
    int somme = a+b;
    printf("La somme est %d",somme);
return  somme;
}
