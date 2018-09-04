#include <stdio.h>
void main(){
	void choose_algorithm();
	int type = 1;

	printf("hello world!\n");
	// choose sort algorithm from scanf
	choose_algorithm(type);

}

void choose_algorithm(int type){
	void bubblesort();
	if(type == 1){
		bubblesort();
	}
}