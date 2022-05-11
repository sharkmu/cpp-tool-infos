#include <iostream>
using namespace std;





int main()
{
	int key;
	int notGood;
	notGood = true;
	system("color 0a");
	while (notGood)
	{
		system("cls");
		std::cout << "\n" << std::endl;
		std::cout << "				1. HWID infos					2. CPU infos\n" << std::endl;
		std::cout << "\n" << std::endl;
		std::cout << "				3. exit						4. soon\n" << std::endl;
		cout << "key: ";
		cin >> key;
		key = (int)key;
		if (key == 1)
		{
			system("cd Resources && GetHWID.exe");
			notGood = false;
		}

		else if (key == 2)
		{
			system("cd Resources && GetCPU.exe");
			notGood = false;
		}

		else if (key == 3)
		{
			return 0;
		}
		else
		{
			system("cls");
			std::cout << "plz enter a vaild num" << std::endl;
			system("timeout 2");
		}

	}
}