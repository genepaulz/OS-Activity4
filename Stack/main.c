#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	Stack s = newStack(5);
	push(s,5);
	push(s,4);
	push(s,3);
	push(s,2);
	push(s,1);
	display(s);
	printf("\nTop : %d",top(s));
	push(s,6);
	display(s);
	printf("\nTop : %d",top(s));
	pop(s);
	display(s);
	pop(s);
	display(s);
	if( isEmpty(s) ) printf("\nStack is EMPTY");
	else printf("\nStack is !EMPTY");
	clear(s);
	if( isEmpty(s) ) printf("\nStack is EMPTY");
	else printf("\nStack is !EMPTY");
	
	//OTHER TESTING
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	push(s,1);
	display(s);
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	pop(s);
	display(s);
	clear(s);
	pop(s);
	return 0;
}
