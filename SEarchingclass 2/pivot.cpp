#include<iostream>
using namespace std ;

int findpivotindex(int arr[] , int n){
    int s = 0;
    int e = n-1 ;
    int mid = s+(e-s)/2 ;

    while(s<=e){
        if(arr[mid] > arr[mid+1]){
            return mid ;
        }
        else if(arr[mid] < arr[mid-1]){
            return mid-1 ;
        }
        else if(arr[s] > arr[mid]){
            //B line pe h
            //left
            e = mid-1;

        }
        else{
            s = mid+1 ;
        }
        //mid update
         mid = s+(e-s)/2 ;
    }

}




int main(){

    int arr[] = {12,14,16,18 ,2,4,6,8,10};
    int n = 9 ;
    cout<<"Pivot element is on the index : "<<findpivotindex( arr , n);
    return 0 ;
}