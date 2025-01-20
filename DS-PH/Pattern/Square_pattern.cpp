#include<stdio.h>
  int main()
  {

    //01

     /*  *****
         *****
         *****
         *****
     */
   //  int line, star;
   //  scanf("%d",&line);
   //  star=line;
   //  for (int i = 1; i <= line; i++)
   //  {
   //       for (int j = 1; j <= star; j++)
   //       {
   //           printf("*");
   //       }
   //       printf("\n");
         
   //  }






  //02
   /*
         1 2 3 4
         5 6 7 8
         9 10 11 12
   */

//     int line, star;
//     scanf("%d",&line);
//     star=4;
//     for (int i = 1; i <= line; i++)
//     {
//          for (int j = 1; j <= star; j++)
//          {
//              printf("%d ",j+(i-1)*4);
//          }
//          printf("\n");
         
         
//     }





//03
/*
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
    1 2 3 4 5
*/
// int line, star;
// scanf("%d",&line);
// star=5; //proti line a 5 ta star thakbe
// for (int i = 1; i <= line; i++)
// {
//     for (int j = 1; j <= star; j++)
//     {
//         printf("%d ", j);
//     }
//     printf("\n");
    
// }





//04
/* 
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
    5 5 5 5
*/
// int line, star;
// scanf("%d",&line);
// star=5; //proti line a 5 ta star thakbe
// for (int i = 1; i <= line; i++)
// {
//     for (int j = 1; j <= star; j++)
//     {
//         printf("%d ", i);
//     }
//     printf("\n");
    
// }






//05
/*
    a a a a
    b b b b
    c c c c
    d d d d
*/
// int line, star;
// scanf("%d",&line);
// star=5; //proti line a 5 ta star thakbe
// for (int i = 0; i < line; i++)
// {
//     for (int j = 0; j < star; j++)
//     {
//         char letter= 'a'+i;
//         printf("%c ",letter);
        
//     }
//     printf("\n");
    
// }







//06
/*
    a b c d 
    e f g h
    i j k l
    m n o p
*/
int line, star;
scanf("%d",&line);
star=4; //proti line a 5 ta star thakbe
for (int i = 0; i < line; i++)
{
    for (int j = 0; j < star; j++)
    {   
        //letter+(i-1)*4)
        // char letter= 'a'+j+(i-1)*4;
        char letter= 'a'+i*4+j;
        printf("%c ",letter);
        
    }
    printf("\n");
    
}
    

    return 0;
  }