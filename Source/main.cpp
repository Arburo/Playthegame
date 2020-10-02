//Add/remove defines here:
//#define CompileConsole // - Compile this as a console application.

#ifdef __cplusplus
extern "C" {
#endif

int AddTwoNumbers(int a, int b)
{
	return a + b;
}
void AddNumberToNumberArray(int a[], int Count, int b)
{
	int n = 0;
	while(n < Count)
	{
		a[n] = a[n] + b;
		n++;
	}
}

#ifdef __cplusplus
}
#endif



#ifdef CompileConsole
void main()
{

}
#endif