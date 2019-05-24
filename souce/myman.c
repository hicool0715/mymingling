#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char* argv[])
{
    if(argc!=1)
    {
        if(!strcmp(&(argv[1][0]),"mytouch"))
            printf("关闭控制面板：mytouch 0\n开启控制面板： mytouch 1\n");
            else
            {
                printf("没有找到该命令，尝试使用\"man\"在系统中查找\n");
            }
            
    }
    else
        if(argc==1)
        {
            system("more /home/myfile/myman.txt");
        }
    
    

}
