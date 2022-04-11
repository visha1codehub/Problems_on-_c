#include<stdio.h> 
    
void func1(); 
void func2(); 
    
// #pragma startup main 
// #pragma exit main 
void func3()
{
    printf("Inside func3()\n"); 
}  
void __attribute__((constructor)) func1() 
{ 
    func3();
    printf("Inside func1()\n"); 
} 
    
void __attribute__((destructor)) func2() 
{ 
    printf("Inside func2()\n");    
}
    
int main() 
{ 
    printf("Inside main()\n"); 
        
    return 0; 
} 