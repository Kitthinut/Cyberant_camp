 #include <stdio.h>

int main(){
    int a = 10,b = 25;
    int *aptr;
    float c;

    aptr = &a;
    printf("\n&a => %d\n", &a);
    printf("\naptr => %d\n", aptr);
    printf("\n&aptr => %d\n", &aptr);

    printf("\na => %d\n", a);
    printf("\naptr => %p\n", aptr);
    printf("\nValue of aptr => %d\n", *aptr);

    aptr = &b;                                  // Reference
    printf("\nValue of aptr => %d\n", *aptr);   // Dereferencing

    *aptr = 123;
    printf("\n b = %d\n", b);

 return 0;
}
