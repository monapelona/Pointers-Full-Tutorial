
#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a = 10;
	int *ptr = &a;  //el puntero *ptr apunta a la direccion de a
	int **ptr1= &ptr;  //el doble puntero apunta a la direccion del puntero *ptr
	
	printf("Address of a is: %p\n",ptr);
	printf("Address of a is: %p\n",&(**ptr1));
	printf("Address of a is: %p\n",**(&ptr1));
	printf("\n");
    printf("Double pointer pointing to address of *ptr: %p\n",*(&ptr1));
    printf("Is it the same?? &(*var) and *(&var)??: %p\n",&(*ptr1));
    printf("Address of *ptr is: %p\n",ptr1);
    printf("Address of *ptr is: %p\n",&ptr);
    printf("\n");
    printf("This double pointer ** returns value ---> value of **ptr1 is: %d\n",**(ptr1));
    printf("Value of *ptr is: %d\n",*(ptr));
    printf("Value of a is: %d\n", a);
    printf("\n");
    printf("Address of **ptr1 is: %p\n",&ptr1);
    printf("\n");
    printf("Informacion que cura:\n");
    printf("Este apuntador &(*var) o *(&var), devuelve la direccion de una variable de tipo puntero simple\n");
    printf("Este apuntador &(**var) o **(&var), devuelve la direccion de una variable de tipo puntero doble\n");
    

	system("PAUSE");
	return 0;
}




