#include <stdio.h>

int main()
{
    char *a[1000];
    register FILE *fptr;
    
    if((fptr = fopen("program.txt", "r") == NULL))
    printf("error: create program.txt before creating");
    exit(1);
    
    fscanf(fptr, "%[^\n]", a);
    
    if(a == "#include <stdio.h>")
    {
    printf("Programming language: C");
    delay(5000); 
    exit(1);
    }
    
    if(a == "#include <iostream")
    {
    printf("Programming language: C++");
    delay(5000); 
    exit(1);
    }
    
    if(a == "GET LIBHDR")
    {
    printf("Programming language: BCPL");
    delay(5000); 
    exit(1);
    }
    
    if(a == "PROC 0")
    {
    printf("Programming language: Clist");
    delay(5000); 
    exit(1);
    }
    
    if(a == "IDENTIFICATION DIVISION")
    {
        printf("Programming language: Cobol");
        delay(5000); 
        exit(1);
    }
    
    if(a == "import std.stdio")
    {
        printf("Programming language: D");
        delay(5000); 
        exit(1);
    }
    
    if(a == "(* Elan *)")
    {
        printf("Programming language: Elan");
        delay(5000); 
        exit(1);
    }
    
    if(a == "IN INTERCAL")
    {
        printf("Programming language: Intercal");
        delay(5000); 
        exit(1);
    }
    
    else
    {
        printf("Error: Could not detect programming language");
    }
}
