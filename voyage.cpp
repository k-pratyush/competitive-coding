#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::string;


int main(){
	int t, n, w, temp, x = 0, flag1 = 0;
	string s;
	int count[]={0};
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	
	cin >> t;
	while(t--){
		cin >> s;
		n = s.length();
		w=n;
		for(int i=0;i<26;i++){
			for(int j=0;j<n;j++){
				if(s[j]==alphabet[i]){
					count[i]++;
					if(count[i]>1)
					     w--;
				} 
			}
		}
		
	for(int j=0;j<w-1;j++){
		for(int i=0;i<w-j-1;i++){
			if(count[i]>count[i+1]){
				temp =count[i];
				count[i]=count[i+1];
				count[i+1]=temp;
			}
		}
	}
	for(int i=0;i<w-1;i++){
		if(count[i+1]-count[i]>1){
			flag1=1;
		}
		else if(count[i+1]-count[i]==1){
			x++;
		}
	}
	if(flag1==0 && x<=1){
		cout<<"YES\n";
	}
	else
		cout<<"NO\n";
		
	}
}