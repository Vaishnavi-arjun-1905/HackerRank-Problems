#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int largest;
    
    printf("enter 1st number:\n");
    scanf("%d",&a);
    
    printf("enter 2nd number:\n");
    scanf("%d",&b);
    
    printf("enter 3rd number:\n");
    scanf("%d",&c);
    
    if(a>=b){
      if(a>=c){
          largest=a;
      }
      else{
          largest=c;
      }
    }
      if(b>=a){
         if(b>=c){
             largest=b;
         }
         else{
             largest=c;
         }
      }
      printf("%d\n",largest);
    
    
    return 0;
}