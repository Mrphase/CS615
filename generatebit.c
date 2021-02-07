#include <stdio.h>
void CreateMyFile(char * szFileName,int nFileLength)
{
FILE* fp = fopen(szFileName, "wb+"); // \xe5\x88\x9b\xe5\xbb\xba\xe6\x96\x87\xe4\xbb\xb6bai
if(fp==NULL)
printf("open file fail");
else
{
fseek(fp, nFileLength-1, SEEK_SET); // \xe5\xb0\x86\xe6\x96\x87du\xe4\xbb\xb6\xe7\x9a\x84\xe6\x8c\x87\xe9\x92\x88 \xe\xaedaobb\xe8\x87\xb3 \xe6\x8c\x87\xe5\xae\x9azhi\xe5\xa4\xa7\xe5\xb0\x8f\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd
fputc(32, fp); // \xe5\x9c\xa8\xe8\xa6\x81\xe6\x8c\x87\xe5\xae\x9a\xe5\xa4\xa7\xe5\xb0\x8f\xe6\x96\x87\xe4\xbb\xb6\xe\xe6\x8d\xae6\x9c\xab\xe5\xb0\xbe\xe9\x9a\x8f\xe4\xbe\xbf\xe6\x94\xbe\xe4\xb8\x80\xe4\xb8\xaa\xe6\x95\xb0
fclose(fp);
}
}

int main(int argc, char **argv)
{
     int src1 = atoi(argv[1]);
 int src2 = atoi(argv[2]);
//  auto src2 = (argv[2]);
    printf("file num: %d", src1);
    // printf("file name: %c", argv[2]);
FILE *fp = NULL; char name[64]="";

for(long i=src1; i<src2;i++)
{
sprintf(name,"%d.txt",i); //
puts(name);
fp=fopen(name,"w");
if( fp== NULL ) break ; //
//if(i%1000==0) printf(i);
fclose(fp);
}

return 0;
}
