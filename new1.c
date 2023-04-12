#include<stdio.h>
#include<string.h>
void main()
{
  int i,T,N,K,l=0,m;
  char s[10];
 printf("\n Enter the number of test cases:");
 scanf("%d",&T);
 for(m=1;m<=T;m++)
 {
 printf("\n Enter the length of string and goodness number:");
 scanf("%d %d",&N,&K);
 printf("\n Enter the string:");
 scanf("%s",s);
 for(i=1;i<=N/2;i++)
 {
     if(s[i]!=s[N-i+1])
     {
        l++; 
     }
 }
 if(l<=K)
 {
     l=K-l;
 }
 else
 {
     l=0;
 }
 printf("\n Case #%d:%d",m,l);
 }
}