int pylons(int k, vector<int> arr) {
int i=0,j,c=0,n=arr.size();
    while(i<n)
    {  int f=1;
        for(j=min(i+k-1,n-1);j>=max(i-k+1,0);)
        {
            if(arr[j]==0)
                j--;
            else if(arr[j]==1)
            {   f=0;
                i=j+k;
             c++;
             
             break;
            }
        }
     if(f==1)
         return -1;
    }
return c;
}