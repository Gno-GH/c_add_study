//
//  main.cpp
//  quick_sort
//
//  Created by Gno on 2017/8/7.
//  Copyright © 2017年 Gno. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int cont = 0;
int Partation(int arg[],int length,int start,int end);
void QuickSort(int arg[],int length,int start,int end);
int main(int argc, const char * argv[]) {
//    srand((unsigned int)time(NULL));
//    int i = rand()%+100;
    int arr[10];
    for(int i = 0;i<10;++i)
        arr[i] = 10-i;
    QuickSort(arr, 10, 0, 9);
    for(int i = 0;i<10;++i)
        cout<<arr[i]<<endl;
    cout<<cont<<endl;
    return 0;
}
int Partation(int arg[],int length,int start,int end)
{
    if(!arg||length<=0||start<0||end>=length)
        throw "ERROR";
    int index = (start+end)>>1;
    int small = start - 1;
    swap(arg[index],arg[end]);
    for(index = start;index<end;++index)
    {
        if(arg[index]<arg[end])
        {
            ++small;
            if(small!=index)
            {
                swap(arg[small],arg[index]);
                ++cont;
            }
        }
    }
    ++small;
    swap(arg[small],arg[end]);
    return small;
}
void QuickSort(int arg[],int length,int start,int end)
{
    if(start==end)
        return;
    int index = Partation(arg, length, start, end);
    if(index>start)
        QuickSort(arg, length, start, index-1);
    if(index<end)
        QuickSort(arg, length, index+1, end);
}
