#include "functions.h"
#include <assert.h>
/*Uppgift: Implementera de störst-funktioner som behövs för att
nedanstående kod skall kompilera utan varningar. De funktioner som tar 3
och 4 parametrar skall implementeras med ett nästlat anrop till funktionen
som tar 2 parametrar!*/ 

// TODO implementera störst-funktionerna

double storst(double x, double y, double z=0, double t=0){
    int temp; 
    if( x > y && z && t)
        return x;
    else if (y>= x && z && t)
        return y;
    else if (z>= x && y && t)
        return z;
    else if (t>= x && y && z)
        return t;
    else 
        return 0;
}
void provaAllaStorst(){
cout << storst( 3,7 ) << endl; // 7
cout << storst( 3, 8, 7, 5 ) << endl; // 8
cout << storst(-5.2, -14.3, -10.5) << endl; // -5.2
assert( storst(2.0, 2.5, 1.0) > 2.4 );
assert( storst(2, 3, 1, 8) == 8 );
}