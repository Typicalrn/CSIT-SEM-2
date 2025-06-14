#include <stdio.h>
#include <math.h> // For floor function

int main() {
// Step 2: Declare variables
float a; // to store the input number
float d; // to store the decimal part
int f; // for floor value
int c; // for ceiling value

printf("This code is run by Aryan Maharjan\n");

// Step 3: Prompt the user to enter a floating-point number
printf("Enter a floating-point number: ");

// Step 4: Read the value into variable a
scanf("%f", &a);

// Step 5: Convert a to an integer and store it in f
f = (int)floor(a); // This gives the floor of the number

// Step 6: Display f as the floor value
printf("Floor value: %d\n", f);

// Step 7: Calculate d = a - f
d = a - f; // This gives the decimal part

// Step 8: If d is not equal to 0 then
if (d != 0) {
// Step 8.1: Set c = f + 1
c = f + 1;

// Step 8.2: Display c as the ceiling value
printf("Ceiling value: %d\n", c);
} else {
// Step 9: Else
// Step 9.1: Display f as the ceiling value
printf("Ceiling value: %d\n", f); // Because the number is already an integer
}

// Step 10: End
return 0;
}