#include <stdio.h>
struct StudentA {
    int number;
    float point;
    char alone;
};
typedef struct
{
    int number;
    float point;
    char alone;
} StudentB ;
//Structure cannot assign data in field
/*
struct Student{
    int number = 9;
    float point = 10.5;
    char alone = 'A';
};
*/
//struct can be a multiple struct by arrays
struct PointerStructArray
{
    int number;
    float point;
    char alone;
};

int main(int argc, char const *argv[])
{
    //Call normal sturct
    struct StudentA stA;
    //Call typedef struct
    StudentB stB;
    //Add value to struct
    printf("\n\nAssign number[int] to sturct : ");
    scanf("%d",&stA.number);
    printf("Assign number[float] to struct : ");
    scanf("%f",&stA.point);
    fflush(stdin);
    printf("Assign character[char] to struct : ");
    scanf("%c",&stA.alone);
    //Display value in struct
    printf("\nNUMBER : %d\n",stA.number);
    printf("POINT : %f\n",stA.point);
    printf("CHARACTER : %c\n",stA.alone);

    //use pointer in struct
    StudentB *ptr;
    ptr = &stB;
    //Add value to struct with pointer
    printf("\n\nAssign number[int] to sturct : ");
    scanf("%d",&ptr->number);
    printf("Assign number[float] to struct : ");
    scanf("%f",&ptr->point);
    fflush(stdin);
    printf("Assign character[char] to struct : ");
    scanf("%c",&ptr->alone);
    //Display value in struct
    printf("\nNUMBER : %d\n",ptr->number);
    printf("POINT : %f\n",ptr->point);
    printf("CHARACTER : %c\n",ptr->alone);

    //use pointer to keep data in struct(Array)
    struct PointerStructArray Test[3];
    struct PointerStructArray *ptrSPA;
    ptrSPA=Test;
    for(int i=0;i<3;i++){
        printf("\n\nStruct[%d]",i+1);
        printf("\nAssign number[int] to sturct : ");
        scanf("%d",&ptrSPA->number);
        printf("Assign number[float] to struct : ");
        scanf("%f",&ptrSPA->point);
        fflush(stdin);
        printf("Assign character[char] to struct : ");
        scanf("%c",&ptrSPA->alone);
        //do next struct by pointer
        ptrSPA++;
    }
    ptrSPA=Test;
    for(int i=0;i<3;i++){
        printf("\n\nStruct[%d]\n",i);
        printf("NUMBER : %d\n",ptrSPA->number);
        printf("POINT : %f\n",ptrSPA->point);
        printf("CHARACTER : %c\n",ptrSPA->alone);
        ptrSPA++;
    }
    return 0;
}
