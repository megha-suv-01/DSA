#include<iostream>
using namespace std ;

int LastOccurence(int arr[] , int n , int target){
    int s= 0;
     int e = n-1 ;
     int mid = (s + (e-s) / 2);
     int ans = -1 ;

     while(s<=e){
        if(arr[mid] == target){
            ans = mid ;
           //right
           s = mid +1; 
        }

        else if(arr[mid] > target){
            //left
            e = mid - 1;
        }

        else if(arr[mid] < target){
            //right 
            s = mid +1;
        }
        mid = (s + (e-s) / 2);

        
     }
     return ans ;

}
int FirstOccurence(int arr[] , int n , int target){
    int s= 0;
     int e = n-1 ;
     int mid = (s + (e-s) / 2);
     int ans = -1 ;

     while(s<=e){
        if(arr[mid] == target){
            ans = mid ;
           //left
           e = mid - 1; 
        }

        else if(arr[mid] > target){
            //left
            e = mid - 1;
        }

        else if(arr[mid] < target){
            //right 
            s = mid +1;
        }
        mid = (s + (e-s) / 2);

        
     }
     return ans ;

}

int totaloccurence(int arr[] , int n , int target){
    int firstocc = FirstOccurence(arr , n , target);
     int lastocc = LastOccurence(arr , n , target);
     int totalocc = (lastocc - firstocc)+1 ;
     return totalocc ;
}

int main(){

    int arr[] ={10,30,30,30,30,30,80};
    int n = 7 ; 
    int target  = 30 ;

    //int ansindex = FirstOccurence(arr, n , target);
    // if(ansindex != -1){
    //     cout<<"element found at index : "<< ansindex <<endl ;
    // }
    // else{
    //     cout<<"element not foudnd"<<endl;
    // }

    cout<<"Total occurence of the element in the array is: "<< totaloccurence(arr , n , target);
    


    return 0;
}