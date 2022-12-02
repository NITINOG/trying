/*
Author : NITIN KUMAR 
MODULE : FIRST PROGRAM OF C
TOPIC  : C LANGUAGE 
*/

#include<stdio.h>

int main(){
    int year = 2015 ;
    char country[10] = "India";
    char dlr = '$' ;
    float gdp = 2.2 ;

    printf("As economic reforms picked up the pace, %s's GDP grew "
    "five-fold to reach %c%.1f trillion in %d (as per IMF estimates).", country ,dlr,gdp,year ) ;
    
    
    
    return 0 ;
}