
typedef signed char TBOARD;

//���º����ڳ������п�ʼ��ʱ����ã�������һ��
extern "C" __declspec(dllexport) bool Login(char* strLoginName, char* strPassword);		//��¼

extern "C" __declspec(dllexport) bool InitFromModelFile(char* strModelFileName);	//ʹ��ģ���ļ���ʼ��
extern "C" __declspec(dllexport) bool InitWithoutModelFile(int nBoardWidth, int nBoardHeight, int nWinLen);		//��ģ���ļ�ʱ��ʼ��

//���º�����ÿ����Ϸ��ʼ��ʱ����ã�ÿ����Ϸ����һ��
extern "C" __declspec(dllexport) bool StartNewGame();			//��ʼ��Ϸ���������������

//���º�����ÿ�����ӵ�ʱ����ã�ÿ�����ӵ���һ��
extern "C" __declspec(dllexport) bool SetPieceWithCoord(int nX, int nY);	//������������
extern "C" __declspec(dllexport) bool SetPieceWithGUI(CStatic* pCtrlBoard, int nCursorXInCtrl, int nCursorYInCtrl);		//���ݽ����������Ļ���λ������

extern "C" __declspec(dllexport) bool SetPieceByAI(void);					//AI���ӣ��ú�������ʧ�ܱ�ʾ����¼���û����ֲ���
extern "C" __declspec(dllexport) bool SetPieceByAIAndShow(CStatic* pCtrlBoard);		//AI���Ӳ��ڽ�������ʾ

extern "C" __declspec(dllexport) bool IsGameOver();		//��Ϸ�Ƿ��Ѿ�����
extern "C" __declspec(dllexport) int GetWinner();		//��ʤ��

extern "C" __declspec(dllexport) bool DrawBoard(CStatic* pCtrlBoard);		//��������
extern "C" __declspec(dllexport) bool DrawPieces(CStatic* pCtrlBoard);		//������������

//���º�������Ҫ��ʱ����ã��Ǳ������
extern "C" __declspec(dllexport) TBOARD* GetBoardData(int* pnBoardWidth, int* pnBoardHeight);	//��õ�ǰ���������ڴ����׵�ַ��������Ŀ�͸ߣ������Ҫ�Ļ���
extern "C" __declspec(dllexport) int GetPoint();

extern "C" __declspec(dllexport) bool SaveSteps(char* strDataFileName);		//�����������
extern "C" __declspec(dllexport) bool SaveModel(char* strModelFileName);	//����ģ������

//���º������ڡ�������ˮƽ�ȼ�������
extern "C" __declspec(dllexport) bool SetLayers4Pred(int nLayers);		//��������Ԥ��Ĳ�������֮ͬʱ������ֹ�������ѧϰ��������ʹ��ָ����ģ�ͽ���Ԥ�⣬�ɱ�֤��ƽ��

//���º�������ѵ��ȷ����������
/*
	pnarrData: ������ݣ����ӵ�һ�������һ�����ӵ�λ�ã�X��Y���������ߣ�-1��ʾ���ӣ�1��ʾ���ӣ���
		pnarrData[0]��ʾ��һ���ӵ�X���꣨�±��0��ʼ�ƣ���pnarrData[1]��ʾ��һ���ӵ�Y���꣬pnarrData[2]��ʾ��һ���ӵ������ߣ�pnarrData[3]��ʾ�ڶ����ӵ�X���꣬�������ơ�
		������������Ͻǿ�ʼ�ƣ��������ҵ�X��������Ϊ0��1��2 ......���������µ�Y��������Ϊ0��1��2 ......
	nPieces: ��������ӵĸ���
	nBoardWidth: ���̵Ŀ�ȣ����磺15x15�������У���Ⱥ͸߶Ⱦ�Ϊ15
	nBoardHeight: ���̵ĸ߶�
*/
extern "C" __declspec(dllexport) bool TrainNetwork(int* pnarrData, int nPieces, int nBoardWidth, int nBoardHeight);