

#include <stdio.h>
#include<conio.h>
void main()
{
    int length;
    scanf("%d",&length);
    int array[length];
    for(int i = 0;i<length;i++){
          scanf("%d",&array[i]);
    }
    int sel = length - 1;
    int temp = 0;
    for(int i = 0;i<length/2;i++){
        temp = array[i];
        array[i] = array[sel -i];
        array[sel-i] = temp;
    }
    for(int i = 0;i<length;i++){
          printf("%d",array[i]);
    }
}
