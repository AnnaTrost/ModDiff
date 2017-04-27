int foo(int a, int b);

int main(void) {
	return foo(900,5);
}

int foo(int a, int b) {
	int c=b;
	for (int i=0;i<3;++i)
		c-=a;
	
	return c;
}
