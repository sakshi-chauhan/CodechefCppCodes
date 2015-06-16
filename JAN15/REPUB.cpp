#include<iostream>
#include<cstring>
 
int main(){
    
    int T,max,count;
    std::string str;
    char c,s;
    int freq[26];
    
    std::cin>>T;
    std::cin.ignore(); 
    while( T-- ){
           
           //std::cin.ignore();      
           std::getline(std::cin,str);
           //std::cin>>str; 
           memset(freq,0,sizeof(freq));
           max = 0;
           
           for( int i = 0 ; i < str.length() ; i++ ){
                //std::cout<<str[i]<<" ";
                if( str[i] >= 65 && str[i] <= 90 ){
                    
                    count = freq[ str[i] - 'A'] + 1;  
                    //std::cout<<"Count of "<<str[i]<<count<<"\n";  
                    freq[ str[i] - 'A'] = count;
                }
                         
                else if( str[i] >= 97 && str[i] <= 122){
                    count = freq[ str[i] - 'a' ]+ 1 ;
                    //std::cout<<"Count of "<<str[i]<<count<<"\n"; 
                    freq[ str[i] - 'a' ] = count;
                }
                
                else
                    continue;
                if( count >= max ){
                    
                    
                    if( count == max ){
                        
                        if( str[i] >= 65 && str[i] <= 90 ){
                            s = str[i] + 32;
                            c = (c > s ? c :s);
                        }    
                        
                        else
                            c = (c > str[i] ? c :str[i]);     
                        
                        //std::cout<<"changed c = "<<c<<"\n";
                    }
                    else{
          
                        if( str[i] >= 65 && str[i] <= 90 ){
                            s = str[i] + 32;
                            c = s; 
                        }
                        else
                            c = str[i];
                        
                    }
                    
                    max = count;  
                    //std::cout<<"Max = "<<max<<"char = "<<c<<"\n";  
                }
           }
           std::cout<<c<<"\n";
           //std::cin.ignore(); 
           std::cin.clear();
    }
    
    return 0;
        
}
