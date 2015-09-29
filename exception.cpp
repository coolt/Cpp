// define class of error-type
// check error in function:
//             if error, throw class
// packege function in try { <code> }
//                     catch( <error-class>) {
//                          do action for this error-type;
//                      }

#include <iostream> 
#include <vector>          

// define empty error-class
class Negative_input{};


// create function with error-handling inside
int area( int length, int width){

    // error-checking and throwing error-class
    if ( length < 0 || width < 0){
        throw Negative_input{};
    }

    return length * width;
}


// main --------------------------------------------
int main() 

try{

    // Deklarationen
    int length, width, flaeche;
   
    // Ausgabe
    std::cout << "Laenge und Breite eingeben"<< "\n";

    // Einlesen
    std::cin >> length >> width;

    // Berechnung über Funktion
    flaeche = area( length, width);

    // Resultatsausgabe
    std::cout << "Die Flaeche ist "<< flaeche << "\n";
     
    //return 0;
    }
catch(Negative_input){
    std::cerr << "Catch: Fehler negativer Input \n";
    return 1;
}

