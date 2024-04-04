//1.- inch -> mm cm dm m
//2.- 6 8 9 11

#include <stdio.h>

int main(){
    //zad1
    // float userInput;
    // printf("Choose number: ");
    // scanf("%f", &userInput);
    // printf("to mili: %f\n", userInput * 2.54 * 10);
    // printf("to centimeters: %f\n", userInput * 2.54);
    // printf("to deci: %f\n", userInput * 2.54 / 10);
    // printf("to meter: %f\n", userInput * 2.54 / 100);
    //zad6
    // float temp;
    // printf("Enter temp in C: ");
    // scanf("%f", &temp);
    // temp = (temp * 9 / 5) + 32;
    // printf("Temp in F is: %.1f",temp);
    //zad 8
    //float lev; //dolars lev * 0.52 = dolars
    // float euro; //pounds euro * 0.86 = pounds
    // printf("Enter amount of levs: ");
    // scanf("%f", &lev);
    // printf("Enter amount of euros: ");
    // scanf("%f", &euro);
    // printf("Lev to dollars: %.2f\n", lev * 0.52);
    // printf("Euro to pounds: %.2f\n", euro * 0.86);
    //zad 9
    //(a+b)/2 * h
    // float a; 
    // float b;
    // float h;
    // float result;
    // printf("Enter side a: ");
    // scanf("%f",&a);
    // printf("Enter side b: ");
    // scanf("%f",&b);
    // printf("Enter side h: ");
    // scanf("%f",&h);
    // result = (a+b)/2 * h;
    // printf("Face result: %f", result);
    //zad11
    // int aX;
    // int aY;
    // int bX;
    // int bY;
    // printf("Choose coordinates for A(x): ");
    // scanf("%d",&aX);
    // printf("Choose coordinates for A(y): ");
    // scanf("%d",&aY);
    // printf("Choose coordinates for B(x): ");
    // scanf("%d",&bX);
    // printf("Choose coordinates for B(y): ");
    // scanf("%d",&bY);
    // float result = (aX - bX) * (bY - aY);
    // if (result < 0){
    //     result *= -1;
    // }
    // printf("Face: %f",result);
    //zad 14
    // int vPricePerKilo;
    // int fPricePerKilo;
    // int vKilos;
    // int fKilos;
    // printf("A farmer wants how many levs per kilo (v): ");
    // scanf("%d",&vPricePerKilo);
    // printf("A farmer wants how many levs per kilo (f): ");
    // scanf("%d",&fPricePerKilo);
    // printf("obsht broi (v): ");
    // scanf("%d",&vKilos);
    // printf("obsht broi (f): ");
    // scanf("%d",&fKilos);
    // float vEuroRes = (vKilos * vPricePerKilo) / 1.95;// deleno na 1.95
    // float fEuroRes = (fKilos * fPricePerKilo) / 1.95;
    // printf("The euros collected for veggies are: %.2f\nThe euros collected for fruits are: %.2f\n",vEuroRes,fEuroRes);
    float l,w;
    printf("Choose length: ");
    scanf("%f",&l);
    printf("Choose width: ");
    scanf("%f",&w);
    float result = ((int)(l/1.2) * (int)((w-1)/0.7)) - 3;
    printf("Result: %.0f",result);

    return 0;
}