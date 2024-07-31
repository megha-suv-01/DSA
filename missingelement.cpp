#include<iostream>
using namespace std ;

int FindMissingElement(int arr[] , int n){
    int s= 0 ;
    int e=  n-1;
    int mid = s+(e-s) /2 ;
    int ans = -1; 
     while(s<=e){
        int diff = arr[mid] - mid ;
        if (diff == 1){
            //right 
            s= mid+1 ;
        }
        else{
            //left
            e = mid-1 ;
            //store
            ans = mid ;
        }

        mid = s+(e-s) /2 ;
        
        
     }
     return ans + 1 ;
     
}




int main(){

    int arr[] = {1,2,3,4,5,7,8,9};
        int n = 8 ;
        cout<<"Missing element is: "<< FindMissingElement( arr , n);
    


    return 0 ;
}