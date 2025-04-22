#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c, discriminant, root1, root2, realpart, imaginarypart;
	
	printf("Enter the coefficients a, b & c for the quadratic equation(ax^2+bx+c=0): ");
	scanf("%f %f %f", &a, &b, &c);
	
	if (a == 0) {
    printf("This is not a quadratic equation (a should not be zero).\n");
    return 1;}
    
	discriminant= (b*b) - (4*a*c);
	
	//Roots are real & different
	if(discriminant>0){
		root1=(-b+sqrt(discriminant))/(2*a);
		root2=(-b-sqrt(discriminant))/(2*a);
		printf("Root1= %.2f & Root2= %.2f", root1, root2);
	} else if(discriminant==0){        //Roots are real & equal
		root1=root2=-b/(2*a);
		printf("Root1 = Root2 = %.2f", root1);
	} else {                           //Roots are imaginary
		realpart=-b/(2*a);
		imaginarypart=sqrt(-discriminant)/(2*a);
		printf("Root1= %.2f + i%.2f & Root2= %.2f - i%.2f", realpart, imaginarypart, realpart, imaginarypart);
	}
	return 0;
}

