#include <stdlib.h>
#include <stdio.h>



int * concat (int * tab1, int * tab2, int n1, int n2){
	int i;
	int y;
	int * tab3;
	for (i=0;i<n1;i++){
		tab3[i]=tab1[i];
		y=i;
	}
	for (i=y;i<y+n2;i++){
		tab3[i]=tab2[i];
	}
}
		