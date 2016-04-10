#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "InsertionSort.h"

void Test_InsertionSortUp_NoNeedSort()
{
    int list[5] = {0,1,2,3,4};
    InsertionSort_Up(list, sizeof(list)/sizeof(int));
    assert(list[0] == 0);
    assert(list[1] == 1);
    assert(list[2] == 2);
    assert(list[3] == 3);
    assert(list[4] == 4);
}

void Test_InsertionSortUp_Sort1Elem()
{
    int list[5] = {0,1,2,4,3};
    InsertionSort_Up(list, sizeof(list)/sizeof(int));
    assert(list[0] == 0);
    assert(list[1] == 1);
    assert(list[2] == 2);
    assert(list[3] == 3);
    assert(list[4] == 4);
}

void Test_InsertionSortUp_Reverse()
{
    int list[5] = {5,4,3,2,1};
    InsertionSort_Up(list, sizeof(list)/sizeof(int));
    assert(list[0] == 1);
    assert(list[1] == 2);
    assert(list[2] == 3);
    assert(list[3] == 4);
    assert(list[4] == 5);
}

void Test_InsertionSort_Up()
{
    Test_InsertionSortUp_NoNeedSort();
    Test_InsertionSortUp_Sort1Elem();
    Test_InsertionSortUp_Reverse();
}

void Test_InsertionSortDown_NoNeedSort()
{
    int list[5] = {5,4,3,2,1};
    InsertionSort_Down(list, sizeof(list)/sizeof(int));
    assert(list[0] == 5);
    assert(list[1] == 4);
    assert(list[2] == 3);
    assert(list[3] == 2);
    assert(list[4] == 1);
}

void Test_InsertionSortDown_Sort1Elem()
{
    int list[5] = {5,4,2,3,1};
    InsertionSort_Down(list, sizeof(list)/sizeof(int));
    assert(list[0] == 5);
    assert(list[1] == 4);
    assert(list[2] == 3);
    assert(list[3] == 2);
    assert(list[4] == 1);
}

void Test_InsertionSortDown_Reverse()
{
    int list[5] = {1,2,3,4,5};
    InsertionSort_Down(list, sizeof(list)/sizeof(int));
    assert(list[0] == 5);
    assert(list[1] == 4);
    assert(list[2] == 3);
    assert(list[3] == 2);
    assert(list[4] == 1);
}

void Test_InsertionSort_Down()
{
    Test_InsertionSortDown_NoNeedSort();
    Test_InsertionSortDown_Sort1Elem();
    Test_InsertionSortDown_Reverse();
}

int main()
{
    Test_InsertionSort_Up();
    Test_InsertionSort_Down();
    printf("Test OK!\n");
    system("pause");
    return 0;
}