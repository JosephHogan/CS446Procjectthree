#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
int main(void)
{
const char *single="singleRoot";
const char *many="hierarchicalRoot";
mkdir(single, S_IRWXU);
mkdir(many, S_IRWXU);
int check=chdir(single);
FILE *singlefiles[100];
if(check==0){
    for(int i=1;i<101;i++){
        char filename[13];
        sprintf(filename,"file%d.txt",i);
        singlefiles[i]=fopen(filename,"w");
    }
}
check==55;
check=chdir("..");
if(check==0){
printf("we good");
}
else{
    printf("oh no");
}
check=12;
FILE *manyfiles[100];

check=chdir(many);
printf("%d", check);
if(check==0){
    for(int i=0;i<10;i++){
        char dirName[12];
        sprintf(dirName,"files%d-%d",i*10+1,i*10+10);
        mkdir(dirName,S_IRWXU);
        int checky=chdir(dirName);
        for(int c=1;c<=10;c++){
            char filename[13];
            sprintf(filename,"file%d.txt",i*10+c);
            manyfiles[i*10+c]=fopen(filename,"w");
        }
        check=chdir("..");

    }
    
}
chdir("..");
struct file
{
    char type[40];
    int numOfFiles;
    float avgFileSize;
    float traversalTime;
};
char directory[200];
getcwd(directory,200);
printf("%s", directory);

    return 0;
}