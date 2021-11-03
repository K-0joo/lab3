#include <stdlib.h>
#include <fcntl.h>

#define PRERMS	/* O_CREAT를 사용하는 open 을 위한 허가 */
char *workfile="junk";

main()
{
	int filede;

	if((filedes = open(workfile, O_RDWR | O_CREATE, PERMS)) == -1)
	{
		printf("Couldnt't open %s\ n", workfile);
		exit(1);	/* 오류이므로 퇴장한다 */
	}

	/* 프로그램의 나머지 부분이 뒤따른다 */

	exit(0);

}
