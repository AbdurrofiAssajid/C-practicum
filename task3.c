#include <stdio.h>
#include <math.h>

// perfect number = binary number with only 1's in it = 2^n-1 (with 0 being the exception)
// find the remaining values of input_fences in order for the number to be perfect

int main() {
    unsigned long input_fences, ideal_fences, min_fence, difference, power;

    scanf("%lu", &input_fences);
    power = round(log2(input_fences + 1)); 
    
    ideal_fences = pow(2, power) - 1;
    min_fence = 1;
 

    if(input_fences < 1){
        difference = min_fence - input_fences;
        printf("Maybe it's better to add %lu fences, just to be perfect", difference);
    }
    else if(ideal_fences == input_fences) {
        printf("It's the perfect amount, nice!");
    } else {
        if (ideal_fences > input_fences) {
            difference = ideal_fences - input_fences;
            printf("Maybe it's better to add %lu fences, just to be perfect", difference);
        } 
        else if (input_fences > ideal_fences) {
            difference = input_fences - ideal_fences;
            printf("Maybe it's better to remove %lu fences, just to be perfect", difference);
        }
    }
}

