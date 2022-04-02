#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	for (int i=0; i<t; i++)
	{
	    int arr[t];
	    for (int j=0; j<3; j++)
	        scanf("%d", &arr[j]);
	    for (int j=0; j<3; j++)
	        for (int k=0; k<3; k++)
	        {
	            if (j<k)
	            {
	                if (arr[j] > arr[k])
	                {
	                    int c=0;
	                    c = arr[j];
	                    arr[j] = arr[k];
	                    arr[k] = c;
	                }
	            }
	        }
	    printf("%d", arr[1]);
	}

	return 0;
}

