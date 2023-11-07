#include <stdio.h>
#include <stdlib.h>
int* fun (int );

int main (void){


	int* p  = new int;
	p = fun (5);	
	printf("Printing p:\n\t%p\n", (void*)p);
	
	//next printf bad, because p is dangling pointer (points to x from fun() which went out of scope) 
	printf ("Printing *p:\n\t%d\n", *p);
//	delete p; free() invalid pointer??????????????
	return EXIT_SUCCESS;
}
int* fun (int x){

	int* ptr = new int;
	ptr = &x;
	printf ("Printing *ptr and x:\n\t%d\n\t%d\n", *ptr, x);
	printf ("Printing ptr and &x:\n\t%p\n\t%p\n", (void*)ptr, (void*)&x);
	return ptr;
}
