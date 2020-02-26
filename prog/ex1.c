#include <stdlib.h>
#include <stdio.h>


void change(int var){
	var = 5;
}

void change_pointeur(int *var){
	*var=5;
}
int main(){
	int var=3;
	printf("var vaut %d \n",var);
	change(var);
	printf("var vaut maintenant %d \n",var);
	change_pointeur(&var);
	printf("var vaut maintenant %d \n",var);

}
	