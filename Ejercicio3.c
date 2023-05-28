#include <stdio.h>


int main(){
	
	int i;
	
	int j; 
	
	for(i=1; i<= 1000; i++)
	{
    for(j=2; j<i; j++)
    {
        if(i%j == 0)
        {
            break;
        }
    }
    if(j>=i)
    {
            printf("\n%d",i);
    }   
	}  
}
