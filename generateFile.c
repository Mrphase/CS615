#include <stdio.h>
void CreateMyFile(char * szFileName,int nFileLength)
{
FILE* fp = fopen(szFileName, "wb+"); // 创建文件bai
if(fp==NULL)
printf("open file fail");
else
{
fseek(fp, nFileLength-1, SEEK_SET); // 将文du件的指针 移至 指定zhi大小的位置dao
fputc(32, fp); // 在要指定大小文件的末尾随便放一个数据
fclose(fp);
}
}

int main(int argc, char **argv)
{
     int src1 = atoi(argv[1]);
    //  auto src2 = (argv[2]);
    printf("file size: %d", src1);
    printf("file name: %c", argv[2]);
CreateMyFile(argv[2],1024*1024*1024*src1); //调用测试
argv[2][0]='2';
CreateMyFile(argv[2],1024*1024*1024*src1);

argv[2][0]='3';
CreateMyFile(argv[2],1024*1024*1024*src1);
argv[2][0]='4';
CreateMyFile(argv[2],1024*1024*1024*src1);
argv[2][0]='5';
CreateMyFile(argv[2],1024*1024*1024*src1);

return 0;
}