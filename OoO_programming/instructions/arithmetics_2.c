#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main()
{
    int i,sum=0,data[131072],previous=0,tmp=0, tmp_1=0;
    struct timeval time_start, time_end, program_start, program_end;
    for(i=0;i<131072;i++)
        data[i]=rand()%8738;
#ifdef A
    gettimeofday(&time_start, NULL);
    for(i=0;i<1000000000;i++)
    {
        sum+=data[(i*13) & 131071];
    }
    gettimeofday(&time_end, NULL);
    printf("sum: %d %lf seconds\n",sum, ((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
#else
    gettimeofday(&time_start, NULL);
    for(i=0;i<1000000000;i++)
    {
//        tmp = i << 2;
//        tmp_1 = (i << 4);
//        sum+=data[(tmp_1 - tmp +i) & 131071];
        sum+=data[((i << 4) - (i << 2) + i) & 131071];
    }
    gettimeofday(&time_end, NULL);
    printf("sum: %d %lf seconds\n",sum,((time_end.tv_sec * 1000000 + time_end.tv_usec) - (time_start.tv_sec * 1000000 + time_start.tv_usec))/1000000.0);
#endif        
    return 0;
}
