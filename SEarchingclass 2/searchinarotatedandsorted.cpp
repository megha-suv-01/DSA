#include<iostream>
#include <vector>
using namespace std ;
int BinarySearch(vector<int>& arr ,int s , int e , int target){
    
     int mid = (s + (e-s) / 2);
     

     while(s<=e){
        if(arr[mid] == target){
           return mid;
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
   

}



int findpivotindex(vector<int>& arr){
    int n = arr.size();
    int s = 0;
    int e = n-1 ;
    int mid = s+(e-s)/2 ;

    while(s<=e){
        if(mid+1 <n && arr[mid] > arr[mid+1]){
            return mid ;
        }
        else if( mid-1 >0 && arr[mid] < arr[mid-1]){
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
int Search(vector<int>& arr , int target ){

    int ans = -1 ;
    int n = arr.size();
    int PivotIndex= findpivotindex( arr );

    //search on A 
    if(target> arr[0] && target < arr[PivotIndex]){
        ans  = BinarySearch(arr , 0 ,PivotIndex , target);
    }

    else{
         ans  = BinarySearch(arr ,  PivotIndex+1 , n-1 ,   target);
    }
    return ans ;

}

int main(){

    vector<int> nums;
    nums.push_back(12);
    nums.push_back(14);
    nums.push_back(16);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    nums.push_back(8);
    nums.push_back(10);
    int target = 8;
    
    cout<<"Target is present at index: "<<Search(nums , target );

    return 0 ;
}