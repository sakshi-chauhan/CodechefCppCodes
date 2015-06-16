#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int main(){
	int N, Q;
	cin>>N>>Q;
	map<string, string> types;
	while(N--){
		string a, b;
		cin>>a>>b;
		types[a]=b;
	}
	while(Q--){
		string fname;
		cin>>fname;
		int pos=fname.rfind('.');
		if(pos==string::npos){
			cout<<"unknown"<<endl;
		}else{
			string extension=fname.substr(pos+1);
			if(types.count(extension))
				cout<<types[extension]<<endl;
			else
				cout<<"unknown"<<endl;
		}
	}
	return 0;
}