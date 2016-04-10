void InsertionSort_Up(int * list, int len)
{
    int i = 0;
    int j = 0;
    int key = 0;

    for(i = 1; i < len; i++)
    {
        key = list[i];
        j = i - 1;
        while((j >= 0) && (list[j] > key))
        {
            list[j+1] = list[j];
            j -= 1;
        }
        list[j+1] = key;
    }
}

void InsertionSort_Down(int * list, int len)
{
    int i = 0;
    int j = 0;
    int key = 0;

    for(i = 1; i < len; i++)
    {
        key = list[i];
        j = i - 1;
        while((j >= 0) && (list[j] < key))
        {
            list[j+1] = list[j];
            j -= 1;
        }
        list[j+1] = key;
    }
}