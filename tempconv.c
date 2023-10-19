#include <stdio.h>
#include <string.h>
const char* help = "please enter what unit you want convert.\ncommand -argument\n\t-c for Celsius\n\t-f for Fahrenheit\n\t-k for Kelvin\n";
float C;
float F;
float K;
int main(int argc, char **argv) {
	for(int n = 1; argv[n] != NULL; ++n) {
		switch(argv[n][1]){
			case 'c':
				printf("enter Celsius value: ");
				scanf("%f", &C);
				printf("Fahrenheit:\t%f\nKelvin:\t%f\n", (C*((float)9/5))+32, C+273.15);
				break;
			case 'f':
				printf("enter Fahrenheit value: ");
				scanf("%f", &F);
				printf("Celsius:\t%f\nKelvin:\t%f\n", (F-32)*((float)5/9), ((F-32)/((float)9/5))+273.15);
				break;
			case 'k':
				printf("enter Kelvin value:");
				scanf("%f", &K);
				printf("Celsius:\t%f\nFahrenheit:\t%f\n", K-273.15, (K-273.15)*((float)9/5)+32);
				break;
			default:
				printf("INVALID AGRUMENT:\n%s",help);
				return 0;
		}
	}
	switch(argv[1] == NULL) {
		case 1:
			printf("NO ARGUMENT:\n%s",help);
			return -1;
		default:
			return 0;
	}
}
