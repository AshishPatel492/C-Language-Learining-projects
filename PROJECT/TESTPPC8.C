
#define Action(a,b) a##b+a*b
main()
{
 clrscr();
 printf("%d",Action(3,4));//a=3##b=4+3*4 ans=34+3*4
 getch();
}