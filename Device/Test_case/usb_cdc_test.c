#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>

int main() {
	int fd, ret;
	char str[32];
	char r_str[32];

	fd = open("/dev/usb_cdc1", O_RDWR);
	if(fd < 0) {
		perror("open() failed");
		_exit(1);
	}
	int choice;
	//printf("Enter the choice = \n");
	//scanf("%d",&choice);
	do
	{
		printf("\n\nPress the following\n\n1 for green\n2 for blue\n3 for orange\n4 for fetching LDR Value\n\n0 for exit.\n\n");
		scanf("%d",&choice);
		switch (choice)
	{
	case 1:
		strcpy(str,"Green");
		ret = write(fd,str,5);
		break;
	case 2:
		strcpy(str,"Blue");
		ret = write(fd,str,4);
		break;
	
	case 3:
		strcpy(str,"Orange");
		ret = write(fd,str,strlen(str));
		break;

	case 4:
		strcpy(str,"LDR");
		ret = write(fd,str,strlen(str));
		read(fd,r_str,sizeof(r_str));
		(uint32_t)r_str;
		printf("\n\nValue of LDR : %d\n\n",r_str);
		break;
	
	default:
		strcpy(str,"Ajay");
		ret = write(fd,str,strlen(str));
		break;
	}
		
	} while (choice != 0);
	close(fd);	

	return 0;
}

