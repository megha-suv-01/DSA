#include<iostream>
using namespace std ;

int peakelement(int arr[] , int n){
    int s = 0 ;
     int e = n-1; 
     int mid = s+(e-s)/2;

     while(s<e){
        if(arr[mid] < arr[mid+1]){
            //right
            s = mid+1;
        }
        else{
            e =mid ;
        }
        mid = s+(e-s)/2;


     }
      return s;
     
}



int main(){

    int arr[] = {10,20,30,90,70,50,40,30};
    int n = 8;
    cout<<"Peak element is on the  index : "<<peakelement(arr ,n);
    return 0;

}