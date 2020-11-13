//
//  main.cpp
//  Zadanie 4 pdf
//
//  Created by Wojciech Szyjka on 13/11/2020.
//

#include <iostream>
#include <cmath>

using namespace std;

double oblicz_obwod(double promien)
{
    double obwod = 2*M_PI*promien; // Brak "podłogi" //
    return obwod;
}

int main(int argc, const char * argv[]) {
    
    int r =5;
    double obwod = oblicz_obwod(r);
    double pole = M_PI*pow(r, 2);
    cout << "Dane jest koło o promieniu " << r << " cm." << endl ;
    cout << '\n' ;
    cout << "Obwod kola wynosi " << obwod << " cm. \n" << "Pole koła wynosi " << pole << " cm2." << endl;
    
    return 0 ;
}
