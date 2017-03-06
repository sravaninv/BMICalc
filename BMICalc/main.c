//
//  main.c
//  BMICalc
//
//  Created by Sravani on 3/4/17.
//  Copyright © 2017 sira. All rights reserved.
//

#include <stdio.h>

typedef struct  {
    float heightinMeters;
    int weightinKilos;
    

}Person;


float BMI(Person p){
    return p.weightinKilos/(p.heightinMeters*p.heightinMeters);
}

int main(int argc, const char * argv[]) {
   Person mikey;
    
    mikey.heightinMeters= 34.0;
    mikey.weightinKilos = 45;
    
     Person abhi;
    abhi.heightinMeters= 578.9;
    abhi.weightinKilos=89;
    printf("%f\n",mikey.heightinMeters);
    float a;
    a = BMI(mikey);
    printf("%.2f\n",a);
    
  
    return 0;
}














