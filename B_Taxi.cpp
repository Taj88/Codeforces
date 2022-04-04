#include<iostream>
using namespace std;
int main(){
int n,j,one=0,two=0,three=0,four=0,x=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>j;
    if (j==1)
    {
   one++;
    }
      if (j==2)
    {
   two++;
    }  if (j==3)
    {
   three++;
    }  if (j==4)
    {
   four++;
    }
    
}
x+=four;
if(three<one)
{
    x+=three;
    one=one-three;
    three=0;
}
else if(one<=three){
    x+=one;
    three=three-one;
    one=0;
}
if(three>0){
    x+=three;
    three=0;
}
    if(two>0){
        x+=two/2;
        two=two%2;
    }
    int remain =one+(two*2);
    if(remain<=4 && remain>0)
    {
        x+=1;
    
    }
    else if(remain%4 !=0){
    
x+=(remain/4)+1;
    }
    else{
        x+=remain/4;
    }
    
    
    cout<<x<<endl;

return 0;
}