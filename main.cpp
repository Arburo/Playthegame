//Add/remove defines here:
//#define CompileConsole // - Compile this as a console application.

#ifdef __cplusplus
extern "C" {
#endif

int AddTwoNumbers(int a, int b)
{
	return a + b;
}

#ifdef __cplusplus
}
#endif



#ifdef CompileConsole
void main()
{

}
#endif