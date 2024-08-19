#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
    FILE* pf = fopen("test.txt","r");
    if (pf == NULL)
    {
        printf("%s\n",strerror(errno));
        //perror("fopen");
        return 1;
    }

    fseek(pf,2,SEEK_SET);
    char ch = fgetc(pf);
    printf("%c\n",ch);
    printf("%d\n",ftell(pf));

    fseek(pf,-1,SEEK_END);
    ch = fgetc(pf);
    printf("%c\n",ch);
    printf("%d\n",ftell(pf));

    rewind(pf);
    ch = fgetc(pf);
    printf("%c\n",ch);

    fclose(pf);
    pf = NULL;


//    truct s
//    {
//        char arr[100];
//        int age;
//        float score;
//    };
//    struct s a = {0};
//    int ch = 0;
//
//    char i = 0;
//    for (i = 'a';i <= 'z';i++)
//    {
//        //fputc(i,pf);
//    }
//
//    while((ch = fgetc(pf)) != EOF)
//    {
//        printf("%c ",ch);
//    }
//    fputs("zhangsan",pf);
//    char arr[20];
//    fgets(arr,10,pf);
//
//    printf("%s\n",arr);
//    fprintf(pf,"%s %d %f",a.arr,a.age,a.score);
//    fscanf(pf,"%s %d %f",a.arr,&(a.age),&(a.score));
//    printf("%s %d %f",a.arr,a.age,a.score);
//
//    fwrite(&a,sizeof(struct s),1,pf);
//    fread(&a,sizeof(struct s),1,pf);
//    printf("%s %d %f",a.arr,a.age,a.score);
    return 0;
}
