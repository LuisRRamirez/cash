#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main (void)
// cash version for github
// {
//     float number=0.0;
//     float change=0.0;
//     int coins = round(number * 100);


    float inputAmt;
    float change;
    int coins;
    int remainderFromQuaters;
    
    do
    {
        number = get_float ("Change owed: "); 
    }
    while (number < 0);
    
    number= round(number * 100); 
    
    for (change=0; change < number;)
    {
        if (number>=25)
                {
                    number=number-25;
                        coins=coins+1;
                }
         if (number <= 24 && number >= 10 )
                { 
                    number=number-10;
                        coins=coins+1;
                }
        if (number <= 9 && number >= 5 )
                {
                    number=number-5;
                        coins=coins+1;
                }
        if (number <=4 && number >= 1 )
                {
                    number=number-1;
                    coins=coins+1;
                }
                
       
    }
     printf("%i\n", coins);
    
    
    
    
    // //Calculate for Quaters
    //     if (inputAmt>=0.25)
    //             {
    //                 quaters = inputAmt/0.25;
    //                 remainderFromQuaters = inputAmt % 0.25;
    //             }
                
    // //Calculate for dimes
    //      if ((inputAmt <= 0.24 && inputAmt >= 0.10) || remainderFromQuaters > 0 )
    //             { 
    //               if(inputAmt <= 0.24 && inputAmt >= 0.10){
    //                   dimes = inputAmt / 0.1
    //                   remainderFromDimes = inputAmt % 0.1
                       
    //               }else{
    //                   dimes = remainderFromQuaters / 0.1
    //                   remainderFromDimes = remainderFromQuaters % 0.1
    //               }
    //             }
                
                
                
    //Calculate fro Nickles
   