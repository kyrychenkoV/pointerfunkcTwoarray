#include <stdio.h>
#include<stdlib.h>
#define line 3
#define colums 5

void OutData();
int **return1( int **array);
int *return2(int array[][colums]);
void printarray(int **array);


int main()
{
    OutData();
    return 0;
}
void OutData(){
    int i;
    int array [line][colums]={{1,8,6,8,4},{6,7,8,9,10},{11,12,13,14,15}};
    printarray(array);


    int **pointer;
    int **pointer1;
    pointer=array;
    pointer1=return1(pointer);
    printarray(pointer1);

    int *pointline;
    pointline=return2(array);
    printf("\nPrint line 1 trouth *int array\n");
    for(i=0;i<colums;i++){
        printf("%d ",*(pointline+i));
    }
    printf("\n");
    printarray(array);
}
int **return1(int **array){
    int i,j;
    for (i=0;i<line;i++){
        for (j=0;j<colums;j++){
            *(array + i*colums + j)=(i + 1)*(j + 1);
        }
    }
    *(array + 8)=100;
    *(array + 2*colums + 1)=200;

    return array;
}

int *return2(int array[][colums]){
    int i, *point;
    point=*(array+1);
    *(point+4)=30;

    return point;
}

int *return3(int *point,int *array){
    point=array;
    point[0]=6;
    return point;
}
void printarray(int **array){
    int i,j;
    printf("Array :\n");
    for (i=0;i<line;i++){
        for (j=0;j<colums;j++){
            printf ("%d ",*(array + i*colums + j)); // if in funkc transfer (int array[][Colums])    *(*(array+i)+j))
        }
        printf("\n");
    }
    printf("\n");


}