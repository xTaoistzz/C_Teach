#include <stdio.h>
int main(int argc, char const *argv[])
{
    //Arrays
    int arrayA[9] = {1,2,3,4,5,6,7,8,9};
    int arrayB[3][3] = {1,2,3,4,5,6,7,8,9};
    int i,j,k;

    //index of array start from 0
    printf("1 dimension array use\n");
    k=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arrayA[k]);
            k++;
        }
        printf("\n");
    }
    printf("\n");

    printf("2 dimension array use\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arrayB[i][j]);
        }
        printf("\n");
    }


    printf("\nString\n");
    char arrayNameA[30] = "xTaoistzz"; //reserve 30 bytes
    char arrayNameB[] = "xTaoistzz"; //reserve 10 bytes cause xTaoistzz have 9 character and '\0'
    printf("%s %s\n\n",arrayNameA,arrayNameB);

    char dataA[3][30] = {
        "xTaoistzzA",
        "GithubA",
        "StudentA"
    }; //reserve 90 bytes
    for(i=0;i<3;i++){
        printf("%s\n",dataA[i]);
    }
    return 0;
}
