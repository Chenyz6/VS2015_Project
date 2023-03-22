#include "../tcpsocket/tcpScocket.h"
#define BUFSIZ 512
int main()
{
	init_Socket();
	SOCKET fd = createClientSocket("192.168.1.62");
	char recvbuf[BUFSIZ] = { 0 };
	char sendbuf[BUFSIZ] = { 0 };
	while (true)
	{
		//发送消息
		printf("send>");
		gets_s(sendbuf, BUFSIZ);
		if (SOCKET_ERROR == send(fd, sendbuf, strlen(sendbuf), 0))
		{
			err("end");
		}
		//recv从指定的socket接收消息
		if (0 < recv(fd, recvbuf, BUFSIZ, 0))
		{
			printf("recv:%s\n", recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));
		}

	
	}
	if (SOCKET_ERROR == (fd, sendbuf, strlen(sendbuf), 0))
	{
		err("send");
	}
	closesocket(fd);
	close_Socket();
	printf("client---end---");
	getchar();
	//system("pause");
	return 0;
}