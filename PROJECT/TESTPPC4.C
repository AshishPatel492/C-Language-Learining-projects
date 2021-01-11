#define product(a,b) a*b
int main()//a=5 and b=2 is wrong !!!
{                                   //a=3+2 and b=4-6
 clrscr();
 printf("product of 3 and 4 is:%d",product(3+2,4-6));//ans is 3+2*4-6
 getch();
}