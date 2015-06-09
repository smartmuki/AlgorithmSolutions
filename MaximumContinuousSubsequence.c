#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int a[5] = {-9, 10, -11, 12, -15};
  	int len =5;
  	int previousMax = a[0], currentMax = a[0], i;
  	for(i = 1; i< len; i++) {
                if(currentMax + a[i] > currentMax) { 
                       currentMax = currentMax + a[i];
                       if(a[i] > currentMax) { 
                          currentMax = a[i];
                       }
                } else { 
                       if(previousMax < currentMax) { 
                          previousMax = currentMax;
                       }
                       currentMax = a[i];
                }
  	}

        if(previousMax < currentMax) { 
                          previousMax = currentMax;
                       }
  	
          printf("previousmax: %d", previousMax);
  	return 1;
}
