#include<iostream>
int main(){
    int n,i,t,not_amb=0;
    int arr1[10005],arr2[10005];
    std::cin>>t;
    while(t>0){
        not_amb=0;         
       for(i=1;i<=t;i++)
                  std::cin>>arr1[i];           
       for(i=1;i<=t;i++){
                  arr2[arr1[i]]=i;                       
       }          
       for(i=1;i<=t;i++){
                  if(arr2[i]!=arr1[i]){                         
                       not_amb=1;
                       break;
                  }
       }
       if(not_amb)
                  std::cout<<"not ambiguous\n";
       else
                  std::cout<<"ambiguous\n"; 
       std::cin>>t;          
    }
    return 0;    
}
