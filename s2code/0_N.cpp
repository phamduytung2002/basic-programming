/*
hint for problem N

string a, b;

string add(string a, string b){
	// make a.size() == b.size()
	int carry;
	string ans = "0"*a.size();
	// lặp từ cuối string về
	for(int i=a.size()-1; i>=0; i--){
		int x = (a[i]-'0') + (b[i]-'0') + carry;
		if(x>=2) carry=1;
		else carry=0;
		x%=2;
		ans[i] = x + '0';
	}
	if(carry==1) ans = "1"+ans;
	return ans;
}

*/