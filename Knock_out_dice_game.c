#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dice_roll();
int main(int argc,char*argv[]){
	int dice_result,i,dice_sum,ko_dice,score=0;
	srand(time(NULL));
	printf("Choose a ko number between 6 and 9!");
    do
    {
        scanf("%i",&ko_dice);
    }	while (ko_dice<6 || ko_dice>9);

    
    
	do
	{
		dice_sum=0;
    	for (i=0;i<2;i++){
	    	dice_result=dice_roll();
    		dice_sum=dice_sum +dice_result;
    		
		}   
        score=score+dice_sum;
	}while(dice_sum!=ko_dice);
	
	printf("You a finally knocked out....\n");
   if(score!=ko_dice){
    	
		printf("Your score is %i\t",score);
	}else{
		printf("You are knocked out in the first try.....sorry");
	}
}

int dice_roll(){
	return rand()%7+1;
}
