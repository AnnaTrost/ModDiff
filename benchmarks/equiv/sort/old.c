char foo(int a, int b);

int main(void) {
	int x[5]={3,2,5,1,0};
	for (int i=1;i<5;i++)
	  if (!foo(x[i],x[i-1])) {
		  int tmp=x[i];
		  x[i]=x[i-1];
		  x[i-1]=tmp;
	  }
	return x[4];
}

char foo(int a, int b) {
	if (a>b)
	  return 1;
	return 0;
}
