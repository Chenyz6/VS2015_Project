#include "../tcpsocket/tcpScocket.h"
#define BUFSIZ 512
int main()
{
	init_Socket();

	SOCKET serfd = createServerSocket();
	printf("wait client connect...\n");
	// ����пͻ�����������
	SOCKET clifd = accept(serfd, NULL, NULL);
	if (INVALID_SOCKET == clifd)
	{
		err("accept");
	}
	//���ԺͿͻ��˽���ͨ����
	char recvbuf[BUFSIZ] = { 0 };
	char sendbuf[BUFSIZ] = { 0 };
	while (true)
	{
		//recv��ָ����socket������Ϣ
		if (0 < recv(clifd, recvbuf, BUFSIZ, 0))
		{
			printf("recv:%s\n", recvbuf);
			memset(recvbuf, 0, sizeof(recvbuf));
		}

		//������Ϣ
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