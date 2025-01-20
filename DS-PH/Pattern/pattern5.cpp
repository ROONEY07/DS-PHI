#include <stdio.h>

int main() {
    int n,s,k;
    // printf("Enter the number of lines: ");
    scanf("%d", &n);
  // s=0;
  // k=5;


    /*
                 *
               * * *
             * * * * *
           * * * * * * *
         * * * * * * * * * 

    */
  /*
          * * * * * * * * *
            * * * * * * *
              * * * * *
                * * *
                  *

  */
 /*
                    1
                    1 2 
                    1 2 3 
                    1 2 3 4 
                    1 2 3 4 5 

 */
  /*
                    1 2 3 4 5
                    1 2 3 4
                    1 2 3
                    1 2
                    1


  */
  /*
    *
   **
  ***
 ****
*****

  */
 /*
  * * * *
  * * * *
  * * * *
  * * * *


  */

  /*
  1 2 3 4
  5 6 7 8
  9 10 11 12
  13 14 15 16


  */
  // for(int i=1;i<=n;i++)
  // {
  //   // for(int j=1;j<=s;j++)
  //   // {
  //   //     printf(" ");
  //   // }
  //   for(int j=1;j<=k;j++)
  //   {
  //       printf("%d ",j);
  //   }
  //   // s=s+1;
  //   // k++;

  //   // 
  //   printf("\n");

  // }
  /* n=5
     2n-1=9
              *
             ***
            *****
           *******
          *********
           *******
            *****
             ***
              *
  */
  s=n-1;
  k=1;


  for(int i=1;i<=(2*n)-1;i++){
   // for lines

    for(int j=1;j<=s;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=k;j++)
      {
        printf("*");
      }


    //for kaj
    if(i<=n-1){
      s--;
      k=k+2;

    }
    else
    {
      s++;
      k=k-2;
    }

    printf("\n");

  }

  


  
  /*
    *
   **
  ***
 ****
*****

  */

  /*
  1 2 3 4
  5 6 7 8
  9 10 11 12
  13 14 15 16


  */
  // for(int i=1;i<=n;i++)
  // {
  //   // for(int j=1;j<=s;j++)
  //   // {
  //   //     printf(" ");
  //   // }
  //   for(int j=1;j<=k;j++)
  //   {
  //       printf("%d ",j);
  //   }
  //   // s=s+1;
  //   // k++;

  //   // 
  //   printf("\n");

  // }
  /* n=5
     2n-1=9
              *
             ***
            *****
           *******
          *********
           *******
            *****
             ***
              *
  */

 /* n=6
        *
       **
      ***
     ****
    ***** 
   ******
    *****
     ****
      ***
       **
        *  
 
 */
  s=n-1;
  k=1;


  for(int i=1;i<=(2*n)-1;i++){
   // for lines

    for(int j=1;j<=s;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=k;j++)
      {
        printf("*");
      }
    
    
    //for kaj
    if(i<=n-1){
      s--;
      k=k+1;

    }
    else
    {
      s++;
      k=k-1;
    }
    
    printf("\n");

  }




  
  /*
  1 2 3 4
  5 6 7 8
  9 10 11 12
  13 14 15 16


  */
  // for(int i=1;i<=n;i++)
  // {
  //   // for(int j=1;j<=s;j++)
  //   // {
  //   //     printf(" ");
  //   // }
  //   for(int j=1;j<=k;j++)
  //   {
  //       printf("%d ",j);
  //   }
  //   // s=s+1;
  //   // k++;

  //   // 
  //   printf("\n");

  // }
  /* n=5
     2n-1=9
              *
             ***
            *****
           *******
          *********
           *******
            *****
             ***
              *
  */
  s=n-1;
  k=1;


  for(int i=1;i<=n;i++)
  {
   // for lines

    for(int j=1;j<=s;j++)
    {
      printf(" ");
    }
    for(int j=1;j<=k;j++)
      {
        printf("*");
      }
    s--;
    k=k+2;
    printf("\n");
   
    
   

  }
    return 0;
}
