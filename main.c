#include <stdio.h>

#include <math.h>

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

int calcmetricBMI(double metricweight, double metricheight){
    double metricBMI = (metricweight/(metricheight*metricheight));
    return metricBMI;
}

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

    printf("Select:\n 1. Metric\n 2. Imperial\n");
    scanf("%i", &choice);

    switch(choice){
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
            printf("Invalid");
            break;
    }
return 0;
}
