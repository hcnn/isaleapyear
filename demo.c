#include <stdio.h>  // printf
#include "isaleapyear.h"

int main()
{
    int y = 2018;

    if(isaleapyear(y)){
        printf("%d is a leap year\n", y);
    }else{
        printf("%d is not a leap year\n", y);
    }
    
	return 0;
}
