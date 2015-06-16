#include<iostream>
#include<cctype>
int main(){
    int t,r,c,i,j,k;
    char matrix[102][102];
    std::string str="spoon";
    std::cin>>t;
    bool flag;
    while(t--){
               flag=0;
               std::cin>>r>>c;           
               for(i=0;i<r;i++){
                   std::cin>>matrix[i];
                   for(j=0;j<c;j++)
                        matrix[i][j]=tolower(matrix[i][j]);
               }
               for(i=0;i<r && !flag;i++){
                   for(j=0;j<c && !flag;j++){
                       if(matrix[i][j]=='s'){
                            for(k=1;k<5;k++){
                                if(matrix[i][j+k]==str[k])
                                     flag=1; 
                                else{
                                	flag=0;
                                	break;
                                }       
                            }               
                            if(flag==0 ){
                                for(k=1;k<5;k++){
                                if(matrix[i+k][j]==str[k])
                                     flag=1;            
                                else{
                                	flag=0;
                                	break;
                                	}     
                                }          
                            }                                                              
                       }    
                   }
               }  
               if(flag==1)
                   std::cout<<"There is a spoon!\n";
               else    
                   std::cout<<"There is indeed no spoon!\n";              
    }
    return 0;    
}
