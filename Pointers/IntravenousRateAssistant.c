#include <stdio.h>
#include <math.h>

// Function Definitions
// Displays the user menu, then inputs and returns as the function value the problem number selected.
int get_problem(void);

// Prompts the user to enter the data required for problem 1, and sends this data back to the calling module via output parameters.
void get_rate_drop_factor(float *rate, float *dropFactor);

// Prompts the user to enter the data required for problem 3, and sends this data back to the calling module via output parameters.
void get_kg_rate_conc(float *rate, float *patientWeight, float *concentration);

// Prompts the user to enter the data required for problem 4, and sends this data back to the calling module via output parameters.
void get_units_conc(float *rate, float *concentration);

// Takes rate and drop factor as input parameters and returns drops/min (rounded to nearest whole drop) as function value.
float fig_drops_min(float rate, float dropFactor);

// Takes as an input parameter the number of hours over which one liter is to be delivered and returns ml/hr (rounded) as function value.
float fig_ml_hr(float hours);

// Takes as input parameters rate in mg/kg/hr, patient weight in kg, and concentration of drug in mg/ml and returns ml/hr (rounded) as function value.
float by_weight(float rate, float weight, float concentration);

// Takes as input parameters rate in units/hr and concentration in units/ml, and returns ml/hr (rounded) as function value.
float by_units(float rate, float concentration);

int main()
{
    printf("INTRAVENOUS RATE ASSISTANT"); // Program name
    
	float value, rate, dropFactor, hours, patientWeight, concentration;
	int problem = 1;

	while (problem != 5) {
		problem = get_problem();
		switch (problem)
		{
		case 1:
			get_rate_drop_factor(&rate, &dropFactor);
			value = fig_drops_min(rate, dropFactor);
			printf("The drop rate per minute is %d.", (int) value);
			break;
		case 2:
			printf("Enter number of hours=> ");
			scanf("%f", &hours);
			value = fig_ml_hr(hours);
			printf("The rate in milliliters per hour is %d.", (int) value);
			break;
		case 3:
			get_kg_rate_conc(&rate, &patientWeight, &concentration);
            value = by_weight(rate, patientWeight, concentration);
            printf("The rate in milliliters per hour is %d.", (int) value);
			break;
		case 4:
			// If user selects 4
            get_units_conc(&rate, &concentration);
            value = by_units(rate, concentration);
            printf("The rate in milliliters per hour is %d.", (int) value);
		}
	}
}

// Function Declarations
int get_problem(void)
{
	int problem;
	printf("\n\nEnter the number of the problem you wish to solve.\n");
	printf("    GIVEN A MEDICAL ORDER IN                CALCULATE RATE IN\n");
	printf("(1) ml/hr & tubing drop factor              drops / min\n");
	printf("(2) 1 L for n hr                            ml / hr\n");
	printf("(3) mg/kg/hr & concentration in mg/ml       ml / hr\n");
	printf("(4) units/hr & concentration in units/ml    ml / hr\n");
	printf("(5) QUIT\n");
	printf("\nProblem> ");
	scanf("%d", &problem);
	return problem;
}

void get_rate_drop_factor(float *rate, float *dropFactor) {
	printf("Enter rate in ml/hr=> ");
	scanf("%f", rate);
	printf("Enter tubing's drop factor(drops/ml)=> ");
	scanf("%f", dropFactor);
}

float fig_drops_min(float rate, float dropFactor)
{
	return ceil(rate*dropFactor/60);
}

float fig_ml_hr(float hours)
{
	return 1/hours*1000;
}

void get_kg_rate_conc(float *rate, float *patientWeight, float *concentration) {
    printf("Enter rate in mg/kg/hr=> ");
    scanf("%f", rate);
    printf("Enter patient weight in kg=> ");
    scanf("%f", patientWeight);
    printf("Enter concentration in mg/ml=> ");
    scanf("%f", concentration);
}

float by_weight(float rate, float weight, float concentration) 
{
    return ceil(rate*weight/concentration);
}

void get_units_conc(float *rate, float *concentration) {
    printf("Enter rate in units/hr=> ");
    scanf("%f", rate);
    printf("Enter concentration in units/ml=> ");
    scanf("%f", concentration);

}

float by_units(float rate, float concentration) 
{
    return ceil(rate/concentration);
}

