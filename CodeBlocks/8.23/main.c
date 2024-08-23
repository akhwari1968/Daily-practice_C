#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//#if 3 == 3
//    printf("hehe\n");
//#endif // 1
//    return 0;
//}

//#define M 6
struct S
{
    char c1;
    int i;
    char c2;
};

#define OFFSETOF(type,m_name) (size_t)&(((type*)0)->m_name)

int main()
{
    struct S s = {0};
    printf("%d\n",OFFSETOF(struct S,c1));
    printf("%d\n",OFFSETOF(struct S,i));
    printf("%d\n",OFFSETOF(struct S,c2));


//{
//#if M < 5
//    printf("hehe\n");
//#elif M == 5
//    printf("haha\n");
//#else
//    printf("heihei\n");
//#endif // M



    return 0;
}
