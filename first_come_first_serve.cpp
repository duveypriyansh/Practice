#include <stdio.h>

int main()
{
    #include <iostream>

using namespace std;

int main()
{
   int i,tat = 0,twt = 0,ttat = 0,n;
   
   int sum = 0;
   int wt = 0;
    
   printf("Enter the no of processes in the list\n");  //this will give value of i
   scanf("%d",&n);
    int t[n];
   printf("enter the burst time for each processes\n");
   for(i = 0; i <= n-1;i++){
   scanf("%d",&t[i]);
   }
   printf("give me waiting time of each processes\n");
     for(i = 0; i <= n-1; i++){
        scanf("%d",&wt);
     }
     printf("give me turn around time for each process\n");
     for(i = 0; i <= n-1; i++){
        scanf("%d",&tat);   
     }
     if(i == 0){
         wt = 0;
         tat = t[0];
     }
     for(i = 1; i <= n-1; i++){
         sum = sum + t[i-1];
         wt = sum;
         tat = sum + t[i];
         twt = twt + tat;
         ttat = ttat + tat;
    }
    cout << twt << " " << ttat;
   return 0;
}

    return 0;
}
