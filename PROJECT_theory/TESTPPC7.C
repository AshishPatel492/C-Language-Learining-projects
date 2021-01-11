#define y "India"
main()
{
 clrscr();
 #ifdef country
  printf("%s is a great Country",country);
 #endif

 #ifndef country
  printf("I Love my Nation");
 #endif
 getch();
}