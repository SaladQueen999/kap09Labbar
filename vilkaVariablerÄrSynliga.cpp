#include "functions.h"

/* Uppgift: På vilka rader får man kompileringsfel? Tänk först och undersök
sedan om du hade rätt genom att klistra/knappa in koden i en cpp-fil och
kompilera. */
int A = 1;
void demonstreraSynlighetsområde(){
int b = A;
{ // krullparentesblock
int c = b;
}
int d = c; //fel
for (int e=0; e<d ; ++e){
int f = e;
}
int g = e; //fel
}
int H = I; //fel
int I = b; //fel
int J = A;