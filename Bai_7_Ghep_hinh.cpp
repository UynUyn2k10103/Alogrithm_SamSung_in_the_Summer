#include<stdio.h>
#include<math.h>
void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int n, i, a, b, c, d, e, f;
	scanf("%d", &n);
	while(n--){
		int x, s=0, max=0;
		scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f);
		s = a*b + c*d + e*f;
		x = sqrt(s);
		if(s != x * x) printf("NO\n");
		else
		{
			if(a > b) swap(&a, &b);			
			if(c > d) swap(&c, &d);
			if(e > f) swap(&e, &f);
			if(b == d && d == f && f == x && (a + c + e == x)) printf("YES\n");
			else
			{
				if(d == x)
				{
					swap(&a, &c);
					swap(&b, &d);
				}
				if(f == x)
				{
					swap(&a, &e);
					swap(&b, &f);
				}
				if(b == x)
				{
					a = x - a;
					if((a == c && a == e) || (a == c && a == f) || (a == d && a == e) || (a == d && a == f)) printf("YES\n");
					else printf("NO\n");
				}
				else printf("NO\n");
			}
		}
	}
 	return 0;
}