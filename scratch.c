#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
/*void sort_by_area(triangle* tr, int n) {
	int i,j;
    float p;
    int temp;
    int *s=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        s[i]=(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
      if(s[i]>s[j])
      {
         temp=s[i];
         s[i]=s[j];
         s[j]=temp;
         temp=tr[i].a;
         tr[i].a=tr[j].a;
         tr[j].a=temp;
         temp=tr[i].b;
         tr[i].b=tr[j].b;
         tr[j].b=temp;
         temp=tr[i].c;
         tr[i].c=tr[j].c;
         tr[j].c=temp;
         }
        }
    }
}*/
void sort_by_area(triangle* tr, int n) {
	int i,j;
    float p;
    int temp;
    int *s=malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        s[i]=(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
    }
    int flag=0;
    for(i=0;i<n && flag==0;i++)
    {
        flag=1;
        for(j=0;j<n-i-1;j++)
        {
      if(s[j]>s[j+1])
      {
         temp=s[i];
         s[i]=s[j];
         s[j]=temp;
         temp=tr[i].a;
         tr[i].a=tr[j].a;
         tr[j].a=temp;
         temp=tr[i].b;
         tr[i].b=tr[j].b;
         tr[j].b=temp;
         temp=tr[i].c;
         tr[i].c=tr[j].c;
         tr[j].c=temp;
         flag=0;
         }
        }
    }
}    
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}