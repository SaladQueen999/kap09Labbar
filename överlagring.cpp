#include <iostream>
using namespace std; 
#include <sstream>
#include <vector>

/*Uppgift: Här nedanför ser vi flera funktioner med samma löjliga namn
(hejTal) och sedan en funktion (provaHejTal) som anropar dem.
Genererar några av raderna i den senare funktionen varningar eller fel?
Kommentera bort eventuella rader med kompileringsfel, vilken utskrift
genererar programmet? Tänk först och provkör sedan om du är osäker (en
liknande uppgift kommer kanske på quizzen) */


void hejTal (int x){
    cout << "Hej heltal " << x << endl;
}
void hejTal (double x){
    cout << "Hej flyttal " << x << endl;
}
void hejTal (double x, double y){
    cout << "Hej på er flyttal " << x << ", " << y << endl;
}
void hejTal (int x, int y, int z){
    cout << "Hej alla tre heltal " << x <<  ", " << y << ". "<< z << endl;
}
void testaHeltal(){
    hejTal(2);
    hejTal(2.1);
    hejTal(2, 3);
    //hejTal(2.2, 3.1, 4.3); Conversetion from double to int changed the values from 2.2 > 2
    // 3.1 > 3 and 4.3 > 4
    hejTal(2.0, 3.0, 4.0);
    double tva =2; 
    hejTal(tva, 3.0, 4.0);
}
int main(){
    testaHeltal();
}