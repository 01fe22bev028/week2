
 void vowel(char rand[])
 {
     int i,rev=0,rem,dig,m,n;
     for(i=0;i<10;i++)
     {
n=rand[i];
while(rand[i]!=0)
{
dig=rand[i]%10;
rev=rev*10+dig;
rand[i]=rand[i]/10;
}
if(rev==n)
{
printf(" palindrome number\n");
}
else
printf(" not a palindrome number\n");
 }
 }
