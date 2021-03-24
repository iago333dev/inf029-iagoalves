#include <stdio.h>
#include <stdlib.h>

int * createArray(int value1,int value2,int value3){
    static int arr[3];

    arr[0] = value1;
    arr[1] = value2;
    arr[2] = value3;

    return arr;
}