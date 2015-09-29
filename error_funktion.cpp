// Create your own error-function
// This error-funtion is used in other functions
// .....................................................

#include <iostream> 
#include <iostream> 


// own error-function
void error( std::string message){
    std::cout << message << "\n";
}        


// function which use error-function
int area( int length, int width){

    // error-checking and throwing error-class
    if ( length < 0 || width < 0){
        error("Sorry, negativer Input nicht erlaubt.\n ");
        return 1;
    }
    else {
        return length * width;
    }
}


// main --------------------------------------------
int main() {

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
     
    return 0;
 
}

