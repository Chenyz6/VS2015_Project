#include "../tcpsocket/tcpScocket.h"
#define BUFSIZ 512
int main()
{
	init_Socket();

	SOCKET serfd = createServerSocket();
	printf("wait client connect...\n");
	// 如果有客户端请求链接
	SOCKET clifd = accept(serfd, NULL, NULL);
	if (INVALID_SOCKET == clifd)
	{
		err("accept");
	}
	//可以和客户端进行通信了
	char recvbuf[BUFSIZ] = { 0 };
	char sendbuf[BUFSIZ] = { 0 };
	while (true)
	{
		//recv从指定的socket接收消息
		if (0 < recv(clifd, recvbuf, BUFSIZ, 0))
		{
			printf("recv:%s\n", recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));
		}

		//发送消息
		printf("send>");
		gets_s(sendbuf, BUFSIZ);
		if (SOCKET_ERROR == send(clifd, sendbuf, strlen(sendbuf), 0))
		{
			err("end");
		}
	}
	closesocket(clifd);
	closesocket(serfd);
	close_Socket();
	printf("server---end---");
	//system("pause");
	return 0;
}