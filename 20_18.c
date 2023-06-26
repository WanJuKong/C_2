#include <stdio.h>
#include <pwd.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void)
{
	struct passwd *pw;
	while(pw=getpwent())
		printf("home: %s, uid: %d, home: %s\n", pw->pw_name, pw->pw_uid, pw->pw_dir);
	endpwent();
	exit(0);
}
