#include <iostream>
using namespace std;
#include <array>
 int linearsearch(int arr[], int n , int key){
   
        
        for(int i = 1; i <= n; i++){
            if(arr[i] == key){
                return i;
            }
        }
        return -1;
    }
    
 int main(){
        int n;
        cin >> n;
        int arr[n+1];
     
        for(int i = 1; i <= n ; i++){
            
            cin >> arr[i];
        }
        int key;
        cin >> key;
        
        cout << linearsearch(arr,n,key) << endl;
    return 0;
}
 
   

   
