#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
    if(argc!=2)
    printf("please enter touchp 1\\0\n");
    if(argv[1][0]=='1')
    {
        system("sudo modprobe -r psmouse");
        printf("Closed Touch Plate");
    }
    else
    if(argv[1][0]=='0')
    {
        system("sudo modprobe psmouse");
        printf("Opened Touch Plate");
    }
    else
    {
        printf("failed");
    }
    
    

}
