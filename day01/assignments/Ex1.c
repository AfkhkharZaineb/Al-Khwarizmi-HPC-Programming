#include <stdio.h>
#include <time.h>
int main(int argc, char** argv) {
    int i_stride;
    float s,total_t,rate;
    int N = 10000;
    clock_t start_t, end_t;
    float a[10000*20];
    for(int j=0;j< 10000*20;j++){
    	a[j] = 1;
    }
    s=0;
    for(int i_stride=1;i_stride < 21; i_stride++){
    	s=0;
    	start_t =  clock();
    	for(int i=0; i < N*i_stride+1; i += i_stride)
        	s=s+a[i];
        printf("%d", i_stride);
        printf("%f ",s/20000);
        end_t = clock();       
  	total_t = 1000*(double)(end_t - start_t);
  	rate = 8*N*(1000/total_t)/(1024*1024);
    printf(" %f\n", total_t );
    printf(" %f\n", rate );

    }          
    return(0);
}