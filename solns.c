/* Enter your solutions in this file */
#include <stdio.h>

int max(int argv[], int argc){
   int large ;
    large = argv[0];
    for (int i = 0 ; i < argc ; i++) {
         if (argv[i] > large) {
         large = argv[i];
         }
       }
         //printf("%i\n", large);
    return large;
    }
    
    int min(int argv[], int argc){
   int small ;
    small = argv[0];
    for (int i = 0 ; i < argc ; i++) {
         if (argv[i] < small) {
         small = argv[i];
         }
       }
        // printf("%i\n", small);
    return small;
    }
    
    float average(int argv[], int argc){
  float sum ;
    sum  = 0.0;
    for (int i = 0 ; i < argc ; ++i) {
         sum += argv[i];
       }
   float avg;
     avg = sum/argc;
       //  printf("%f\n", avg);
    return avg;
    }
    
    int mode(int argv[], int argc) {
   int i ;        
   int large ;
    large = argv[0];
    for ( i = 0 ; i < argc ; i++) {
         if (argv[i] > large) {
         large = argv[i];
         }
       }
         //printf("%i\n", large);
    int small ;
    small = argv[0];
    for (i = 0 ; i < argc ; i++) {
         if (argv[i] < small) {
         small = argv[i];
         }
       }
        // printf("%i\n", small);
        int counts[100] ,k=-1;
        int p,q=0; 
        int mode[large-small];
      for (i = small ; i <= large ; i++){
         int cnt =0 ;
           for (int j = 0;j < 12;j++){
           if (argv[j] == i){
             ++cnt;
             }        
        }
         counts[++k] = cnt;
         // printf("%i %i\n",i,counts[k]); 
          if(counts[k]>q) { 
           p=0;
           mode[p]= i;
           q=counts[k];                            
           }
       }
             // printf("%i\n",mode[p]); 
             return mode[p];                      
   }
   
   int factors(int argc, int argv[])
{
  int i, j=0;
  for(i=2;i<=argc;i++)
  {
    if(argc%i==0)
    {
      argv[j]=i;
      //printf("%d %d\n",j,argv[j]);
      argc = argc/i;
      i = 1;  
      j++;
      
    } 
  }
  //printf("%i\n", j);
  return j;  
}
   
