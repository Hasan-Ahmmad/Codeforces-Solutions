/*  1. Convert upper to lower and vise versa

     transform(a.begin(), a.end(), a.begin(), ::tolower);
     transform(k.begin(),k.end(),k.begin(), :: toupper );

    2. cheaking alphabet or not
     
        if(isalpha(s[i]))
        {
            st.insert(s[i]);
        }

    3. Prime or not
    
     i)   bool isPrime(int n)
        {
            if(n<2) return false;
            for(int i=2;i*i<=n;i++)
            {
                if(n%i==0) return false;
            }
            return true;
        }

      ii)   
        bool Prime(int n){
            if(n<2) return false;
            if(n==2 || n==3) return true;
            if(n%2==0) return false; 
                    
            for(int i=3; i*i<=n; i+=2){
                if(n%i==0) return false;
            }
            return true;
        }  
    
    4. GCD

    i) built in =>   __gcd(a,b);

    ii) 
        int GCD(int a, int b) {
        if (b == 0)
            return a;
        return GCD(b, a % b);

    iii)
        int GCD(int x, int y)
        {
        int ans=1;
        for(int i=1;i<=min(x,y) ; i++)
        {
            if(x%i==0 && y%i==0)
            {
                if(i>ans) ans=i;
            }
        }
        return ans;
        }
        
        
    4.1 LCM

        
        int LCM(int a, int b){
            int ans = max(a,b);          
            while(true){
                if(ans%a == 0 && ans%b ==0){
                    return ans;
                }
                else ans++;
            }
        }
        

    5. Decimal to Binary

        void Binary(int n){
            string s="";
            while(n>0){
                s+=n%2 + '0';
                n/=2;
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }   
    
    6. Max & Min in vector
      
        int mx= *max_element(arr.begin(),arr.end());
        int mn= *min_element(arr.begin(),arr.end());


    7. All Subarray
          
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                for(int k=i; k<=j; k++){
                    cout<<a[k]<<" ";
                }
                cout<<endl;
            }
        }


    8. Bubble sort
    
        for(int i=0; i<n-1; i++){
            for(int j=0; j<n-i-1; j++){
                if(a[j]>a[j+1]){
                    swap(a[j],a[j+1]);
                }
            }
    }

    9. Selection sort

        for(int i=0; i<n-1; i++){
        int min = i;
            for(int j=i+1; j<n; j++){
                if(a[j]<a[min]){
                    min = j;
                }
            }

        swap(a[min],a[i]);
    }


*/