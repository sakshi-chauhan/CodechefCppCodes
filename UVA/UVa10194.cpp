#include<iostream>
#include<cstdio>
#include<map>
#include<cctype>
#include<algorithm>
#include<vector>

struct game{
       
       int pts;       
       int game;
       int win;
       int tie;
       int loss;
       int goal_diff;
       int goal_score;
       int goal_against;
       
};

std::string upper( std::string s ){
            
     for( int i = 0 ; i < s.size() ; i++ )
          s[i] = toupper(s[i]);                   
     
     return s;
            
}


bool cmp( std::pair<std::string,game> par1 , std::pair<std::string,game> par2 ){
     
     if( par1.second.pts != par2.second.pts )
        return( par1.second.pts > par2.second.pts );
        
     if( par1.second.win != par2.second.win )
        return(par1.second.win>par2.second.win);
        
    if( par1.second.goal_diff != par2.second.goal_diff )
        return( par1.second.goal_diff > par2.second.goal_diff );
        
    if( par1.second.goal_score != par2.second.goal_score )
        return( par1.second.goal_score > par2.second.goal_score );
        
    if( par1.second.game != par2.second.game )
        return( par1.second.game != par2.second.game );
    
    if( upper(par1.first) != upper(par2.first) )
        return upper(par1.first) < upper(par2.first);
        
    return false;
     
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int N,T,G,i,n1,n2;
    bool flag;
    char a;
    std::string str,team1,team2;
    std::string tour_name;
    std::string team_name;
    std::map<std::string, game> mymap;
    //std::map::iterator it;
    
    
    std::cin>>N;
    
    while( N-- ){
           
           getline(std::cin,tour_name);

           std::cin>>T;
    
           while( T-- ){
                  getline(std::cin,team_name);    
                  mymap[team_name].pts = 0;
                  mymap[team_name].game = 0;
                  mymap[team_name].win = 0;
                  mymap[team_name].tie = 0;
                  mymap[team_name].loss = 0;
                  mymap[team_name].goal_diff = 0;
                  mymap[team_name].goal_score = 0;
                  mymap[team_name].goal_against = 0;           
           }       
           
           std::cin>>G;
           while( G-- ){
                  
                  flag = 1;
                  while(a = getchar()){
                          
                          
                        if(a == '\n')
                            break;
                            
                        if(flag == 0)
                            team1 += a;
                            
                        else if(a=='#')
                        {
                            scanf("%d@%d#",&n1,&n2);
                            flag=0;
                        }
                        
                        if(flag)
                            team2 += a;
                            
                  }
           }
           
           
           mymap[team1].game++;
           mymap[team2].game++;
           
           mymap[team1].goal_score += n1;
           mymap[team2].goal_score += n2;
           
           mymap[team1].goal_against += n2;
           mymap[team2].goal_against += n1;
           
           mymap[team1].goal_diff += n1 - n2;
           mymap[team2].goal_diff += n2 - n1;
           
           if( n1 > n2 ){
               
               mymap[team1].win++;
               mymap[team2].loss++;
               mymap[team1].pts += 3;    
               
           }
           
           else if( n2 > n1 ){
                
               mymap[team2].win++;
               mymap[team1].loss++;
               mymap[team2].pts += 3;  
                     
           }
           
           else{
                
                mymap[team1].tie++;
                mymap[team2].tie++;
                mymap[team1].pts ++;
                mymap[team2].pts++;      
                
           }
           
           std::vector< std::pair<std::string,game> > vec(mymap.begin(),mymap.end());
           //cmp(mymap.begin(),mymap.end());
          // std::sort(mymap.begin(),mymap.end(),cmp);
          std::sort(vec.begin() , vec.end() , cmp );
          std::vector< std::pair<std::string,game> >::iterator it ;//= *std::min_element( vec.begin(), vec.end() );
          
          int k = 1 ;
          std::cout<<tour_name<<'\n';
          for( it = vec.begin() ; it != vec.end() ; i++ ){
               
                std::cout<<k<<") ";    
                std::cout<<it->first<<" ";
                std::cout<<it->second.pts<<"p, ";
                std::cout<<it->second.game<<"g ";
                std::cout<<"("<<it->second.win<<"-"<<it->second.tie<<"-"<<it->second.loss<<"), ";
                std::cout<<it->second.goal_diff<<"gd ";
                std::cout<<"("<<it->second.goal_score<<"-"<<it->second.goal_against<<")";
                k++;
          }
          std::cout<<'\n';
    }
    
    return 0;
        
}
