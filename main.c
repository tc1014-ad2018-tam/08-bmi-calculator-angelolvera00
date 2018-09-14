/*
 * This program is made to help the user calculate their BMI using either metric or imperial units
 *
 * Author: Angel Olvera
 * August 23, 20118
 * Mail: angelolvera00@gmail.com
 */

#include <stdio.h>

//First Function where I stored all the different messages that the user will receive based on their BMI results.
double categories (double BMI){
    if(BMI<18.5){
        printf("You are underweighted");
    }
    else if(BMI>=18.5 && BMI<24.9){
        printf("You are on the normal range");
    }
    else if(BMI>=24.9 && BMI<= 29.99){
        printf("You are overweight");
    }
    else{
        printf("You are obese");
    }
}
//Function that when called, will perform the operation of the BMI using metric units
int calcmetricBMI(double metricweight, double metricheight){
    double metricBMI = (metricweight/(metricheight*metricheight));
    return metricBMI;
}
//Function that when called, will perform the operation of the BMI using imperial units that will later be converted to metric units
int calcimperialBMI(double imperialweight, double imperialheight){
    double result;
    double metricweight;
    double metricheight;
    metricweight= (imperialweight*.4535);
    metricheight= (imperialheight *.3048);
    result= (metricweight/(metricheight*metricheight));
    return result;
}

int main() {
    printf("Calculate your BMI\n");

    double metricweight;
    double metricheight;
    double imperialweight;
    double imperialheight;
    double BMI;
    int choice;
//"Menu" that appears to the user and makes them choose which unit they want to use.
    printf("Select:\n 1. Metric\n 2. Imperial\n");
    scanf("%i", &choice);

    switch(choice){
        //The first case is using metric units, the operation to calculate the BMI is called in order to perform the operation and the result is given.
        case 1:
            do {
                printf("Enter height in metric units\n");
                scanf("%lf", &metricheight);
            }while(metricheight<=0);
                printf("Enter weight in metric units\n");
                scanf("%lf",&metricweight);
                BMI= calcmetricBMI(metricweight, metricheight);
                printf("Your BMI is %lf\n", BMI);
                categories(BMI);
                break;

        case 2:
            //The second case is using metric units, the operation to calculate the BMI is called in order to perform the operation with imperial units this time, and the result is given.
            do {
                printf("Enter height in imperial units\n");
                scanf("%lf", &imperialheight);
            }while(imperialheight<=0);
            printf("Enter weight in imperial units\n");
            scanf("%lf",&imperialweight);
            BMI= calcmetricBMI(imperialweight, imperialheight);
            printf("Your BMI is %lf\n", BMI);
            categories(BMI);
            break;
        default:
            //An error message will appear if the user writes something else
            printf("Invalid");
            break;
    }
return 0;
}
