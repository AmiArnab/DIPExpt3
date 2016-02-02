#include <iostream>
#include <core.hpp>
#include <highgui.hpp>
#include <cv.hpp>
#include <dirent.h>
#include <vector>

using namespace std;

int main(int argc,char *argv[])
{
    cout << "Starting program...\n";
    DIR *mydir;
    dirent *ent;
    vector<string> inputfiles;

    if(argc !=2)
    {
        cout << "Invalid no of arguments!\n";
        return 1;
    }

    if(mydir = opendir(argv[1]))
    {
        while(ent = readdir(mydir))
        {
            string s = ent->d_name;
            inputfiles.push_back(s);
        }
        closedir(mydir);
        inputfiles.erase(inputfiles.begin(),inputfiles.begin()+2);
        for(int i = 0;i<inputfiles.size();++i)
        {
            cout << inputfiles.at(i) << endl;
        }
    }
    else
    {
        cout << "Cant open directory!\n";
    }
    return 0;
}
