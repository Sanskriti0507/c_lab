#include<stdio.h>
int main(){
float weight, hieght, bmi;

printf("Weight (kgs):");
scanf("%f", &weight);

printf("Hieght (m):");
scanf("%f", &hieght);

bmi = (weight)/(hieght * hieght);

printf("BMI is: %f\n", bmi);

if(bmi < 15){
printf("Your category is : Starvation.\n");
}

else if(bmi >= 15.1 && bmi <= 17.5){
printf("Your category is : Anorexic.\n");
}

else if(bmi >= 17.6 && bmi <= 18.5){
printf("Your category is : Underweight.\n");
}

else if(bmi >= 18.6 && bmi <= 24.9){
printf("Your category is : Ideal.\n");
}

else if(bmi >= 25 && bmi <= 25.9){
printf("Your category is : Overweight.\n");
}

else if(bmi >= 30 && bmi <= 39.9){
printf("Your category is : Obese.\n");
}

else  if(bmi >= 40){
printf("Your category is : Morbidity Obese.\n");
}

return 0;
}
