#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    int A[]={24,53,1,34,9,-65};
    int i;
    bubble_sort(A,6);//function prototype
    for(i=0;i<=5;i++)
    {
        //this loop will print the value
        printf("%d \t",A[i]);

    }
    getch();
}
void  bubble_sort(int A[],int N)
{
    int round,i,temp;
    for(round=0;round<=N-1;round++)
    {
        //traversal
        for(i=0;i<=N-1-round;i++)
        {
            //swapping
            if(A[i]>A[i+1])
            {

                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;

            }
        }

    }

}
