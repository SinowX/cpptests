#include <ctime>
#include <iostream>
#include <locale>
#include <thread> 
#include <unistd.h>
int main()
{
    /* std::locale::global(std::locale("zh_CN.UTF8")); */
    char mbstr[100];
		while(true)
		{
    std::time_t t = std::time(nullptr);
    if (std::strftime(mbstr, sizeof(mbstr), "%Y-%m-%d %OH:%M:%S ", std::localtime(&t))) {
        std::cout << mbstr << std::hex << std::this_thread::get_id()
					<< " INFO"<< " infomaction.." << " main()"<<std::endl;
    }
			sleep(1);
		}
}
