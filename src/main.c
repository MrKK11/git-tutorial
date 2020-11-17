#include <stdio.h>                                                                                   
#include "espl_lib.h"                                                                                                             
int main()                                                                       
{                                                                                
    printf("Hello ESPL");
    char next_input;
    do
    {
                                                                
        printf("Please input an integer value.\n"); 
        int Input;
        scanf("%d", &Input);    
        printf("Ausgabe: %s \n", num_to_words(Input)); 
        printf("If you want to try another value press: y if not enter anything else\n");
        scanf(" %c", &next_input);   
    } while (next_input == 'y');                             
    return 0;                                                                     
}  
