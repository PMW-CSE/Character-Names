#include <stdio.h>
#include <stdlib.h>

int main(void){
    int numcount = 0; /* Used to count numbers in a row that are equal to or below 50.00 */
    double rowsum = 0; /* Used to keep sum of numbers in a row that are equal to or below 50.00 */
    int loopcount; /* Variable used in for loop iteration */
  
    
    
    for(loopcount = 1; loopcount <= 40; loopcount++){
    double value;
    value = (rand()%10000)/100.0;
        if(loopcount % 4 != 0) /* If loopcount is not a multiple of 4, it will be printed only if it is equal to or below 50.00 */
        {
            if(value > 50.00){
                printf("       ");
            }
            else{
            printf("%5.2f  ", value);
            numcount++;
            rowsum += value;
            }
        }
        else if(loopcount % 4 == 0) /* Once loopcount reaches a multiple of 4,the 4th value
                                     * in the row will be printed, along with the average of the row.
                                     if nothing in the row was printed, there will be no average */
        {
           if(value > 50.00){
               printf("       |");
           }
           else{
               printf("%5.2f  |", value);
                numcount++;
            rowsum += value;
           }
     
           if(numcount == 0){
               printf("       \n");
           }
           else{
            printf("  %5.2f\n", rowsum/numcount);
            }
           rowsum = 0.0;
            numcount = 0; /* After row is done, reset both rowsum and numcount for the next row. */
        }   
    }

}
