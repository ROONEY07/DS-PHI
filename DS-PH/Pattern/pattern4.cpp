#include <stdio.h>

int main() {
  /*
     *
     **
     ***
     ****
     *****
  
  */
    int n,k=1; //k er man define er first jaiga..
            //aikhane k er man akbar ei print hobe
    // printf("Enter the number of lines(n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
        {
          //k er man define er 2nd space/jaiga......
          //k er man print hobe protita line print howar por por
          
        for (int j = 1; j <= k; j++) 
        {
          //k er man define er 3rd space/jaiga......
          //protita * print howar por k er man 1 hoya jabe
            
            printf("*");
            //kaj hocche aikhne
            //amr dorkar protita kaj seshe akta kore * barbe
        }
        //aikhane kaj ses tai, aikhane bole dita hove akta kore * baranor jnno
         k++;
         printf("\n");
        
    }

    return 0;
}
